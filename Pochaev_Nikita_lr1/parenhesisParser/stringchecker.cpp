#include "basicheaders.h"
#include "universalqtheader.h"

// Parentheses
bool Brackets(std::string & str, int & pos, QTextStream & log);
// Square brackets
bool Square(std::string & str, int & pos, QTextStream & log);
// Round brackets
bool Round(std::string & str, int & pos, QTextStream & log);
// Go to the next line character
void step(std::string & str, int & pos, QTextStream & log);
// errors
void Mist(const std::string & inName, std::string str, \
          int pos, QTextStream & log);

int checkString(std::string inputStr, QTextStream & log) {
    int pos = 0;
    std::string successStr = inputStr;
    if (!Brackets(inputStr, pos, log)) {
        successStr = "The result is true: " + successStr + \
                " - correct\n";
        std::cout << successStr;
        log << QString::fromStdString(successStr);
        QMessageBox::information(0, "Success", \
                                 QString::fromStdString(successStr));
    }
    pos = 0;

    return 0;
}

bool Brackets(std::string & str, int & pos, QTextStream & log) {
    log << "Brackets func!\n";
    if ((str[0]=='[') || (str[0]=='B')) {
        if (Square(str, pos, log))  // is sequence in square paired
            return 1;
        else
            return 0;
    } else if ((str[0]=='(') || (str[0]=='A')) {
        if (Round(str, pos, log)) // is sequence in round paired
            return 1;
        else
            return 0;
    }

    Mist("Brackets", str, pos, log); // Error processing

    return 1;
}

bool Square(std::string & str, int & pos, QTextStream & log) {
    log << "Square func!\n";
    if (str[0] == '[' && str[1] == '[') {
        step(str, pos, log); // go to the next symbol in str
        step(str, pos, log);
        if (Square(str, pos, log)) // check for paired round #1
            return 1;
        if (str[0] == ']' && str[1] == '(') {
            step(str, pos, log);
            step(str, pos, log);
            if (Round(str, pos, log))
                return 1;
            if (str[0] == ')' && str[1] == ']') {
                step(str, pos, log);
                step(str, pos, log);
                return 0;
            }
        } else {
            Mist("Round", str, pos, log);
            return 1;
        }
    }

    if (str[0] == 'B') {
        step(str, pos, log);
        return 0;
    }

    Mist("Round", str, pos, log);

    return 1;
}

bool Round(std::string & str, int & pos, QTextStream & log) {
    log << "Round func!\n";
    if (str[0] == '(' && str[1] == '(') {
        step(str, pos, log); // go to the next symbol in str
        step(str, pos, log);
        if (Round(str, pos, log)) // check for paired round #1
            return 1;
        if (str[0] == ')' && str[1] == '[') {
            step(str, pos, log);
            step(str, pos, log);
            if (Square(str, pos, log))
                return 1;
            if (str[0] == ']' && str[1] == ')') {
                step(str, pos, log);
                step(str, pos, log);
                return 0;
            }
        } else {
            Mist("Round", str, pos, log);
            return 1;
        }
    }

    if (str[0] == 'A') {
        step(str, pos, log);
        return 0;
    }

    Mist("Round", str, pos, log);

    return 1;
}

void step(std::string & str, int & pos, QTextStream & log) {
    log << "step func!\n";
    str = str.substr(1); // cut this symbol and move next
    pos++;
}

void Mist(const std::string & inName, std::string str, \
          int pos, QTextStream & log) {
    log << "Mist func!\n";
    std::string resStr = "String is incorrect! Mistake is in: \n" + \
            inName + " parentheses with:\n" + "\"" + \
                str + "\" on " + std::to_string(pos) + " position\n";
    std::cout << resStr;
    log <<  QString::fromStdString(resStr);
    QMessageBox::information(0, "Mistake", QString::fromStdString(resStr));
}
