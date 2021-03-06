#include<iostream>
#include<string>
#include<fstream>
using namespace std;
 
int bracket(string s);
int calc(string s);
string replaceStr(string str, string a, string b);
int rec=0, pos=0;

int main(){
    int result;
    string s;
	int op;
	char c;
	cout << "0 boolean expression: read from console" << endl;
	cout << "1: read from file" << endl;
    cin >> op;
	if(op==1){
		ifstream f; 
        f.open("input.txt"); 
	getline(f, s);
        if(!f.is_open()) 
			cout << "ERROR";
        f.close(); 
	}
	else{
		getline(cin, s);
	}
    s = replaceStr(s, "NOT TRUE", "0");
    s = replaceStr(s, "NOT FALSE", "1");
	s = replaceStr(s, "NOT", "!");
    s = replaceStr(s, "TRUE", "1");
    s = replaceStr(s, "FALSE", "0");
    s = replaceStr(s, "OR", "|");
    s = replaceStr(s, "AND", "&");
    s = replaceStr(s, " ", "");
	s.insert(s.size(), " ");
    result = calc(s);
	if(op == 0){
		if(result)
    		cout << "Result: TRUE" << endl;
		else
   	 		cout << "Result: FALSE" << endl;
   	 	cout << "Depth of Recursion: " << rec;
	}
	if(op == 1){
		ofstream f;
		f.open("input.txt", ios::app);
		if(result)
    		f << endl << "Result: TRUE" << endl;
		else
    		f << "Result: FALSE" << endl;
    	f << "Depth of Recursion: " << rec;
		f.close();
	}
    return 0;
}
 
string replaceStr(string str, string a, string b){
    int start = 0;
    while((start = str.find(a, start)) != string::npos){
        str.replace(start, a.length(), b);
        start += b.length();
    }
    return str;
}
 
int calc(string s){
    int x = bracket(s);
    char c = s.at(pos++);
    if(c == '|')
        return x || calc(s);
    else{
        pos--;
        return x;
    }
}
 
int bracket(string s){
    int x;
    char c = s.at(pos++);
    if(c == '('){
        rec++;
        x = calc(s);
        pos++;
    }
	else if(c == '!'){	
        rec++;
		pos++;
        x = !calc(s);
        pos++;
    }
    else{
        x = c - '0';
    }
    c = s.at(pos++);
    if(c == '&')
        return x && bracket(s);
    else{
        pos--;
        return x;
    }
}
