#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <clocale>
#include <windows.h>
using namespace std;

string transmute(string & out, string & text, int& deep)
{
	string buff;
	int len;
	int n = 0;
	n = text.find('/');
	//cout << n << '\n';
	if (n == -1)
	{
		cout << "�� ����� - " << text << '\n';
		return text;
	}
	else
	{
		deep++;
		buff = text.substr(0, n);
		cout << "����� - " << buff << "������� - " << deep <<'\n';
		len = text.length();
		text = text.substr(n + 1, len);
		cout << "������� - " << text << "������� - " << deep << '\n';
		out = transmute(out, text, deep);
		out += buff;
		cout << "���������� - " << out << '\n';
		return out;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int deep = 0;
	int choice;
	string out;
	string text;
	cout << "�������� ����� �����: �� ����� ������� 0, � ������� ������� 1\n";
	cin >> choice;
	if (!choice)
	{
		ifstream fin;
		fin.open("input.txt");
		getline (fin,text);
		fin.close();
	}
	else 
		if (choice == 1)
	{
		getline(cin, text);
		cout << "������� �����.\n";
		getline(cin, text);
	}
	ofstream fout;
	fout.open("out.txt");

	transmute(out, text, deep);
	cout << "���� - " << out << '\n';
	fout << out;
	fout.close();

}