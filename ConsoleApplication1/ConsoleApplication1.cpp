// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string> 
#include <fstream>
#include "Defs.h"


using namespace std;

int main()
{
	system ("chcp 1251>nul");

	string myName;
	string myAge;
	string mySex;
	//string saveFile = "1.txt";
	string saveFile = "F:\\test\\1.txt";
	ofstream fout;
	cout << "это файл: " << saveFile << endl;
	while (1)
	{
		fout.open(saveFile.c_str());
		if (fout.is_open())
		{
			cout << "вроде заебись" << endl;
		}
		else
		{
			cout << "xuiny" << endl;
			system("pause>nul");
			return 0;
		}
		cout << "Введите свое имя: " << endl;
		cin >> myName;
		fout << "name::::" << myName << endl;

		cout << "Введите свой возраст: " << endl;
		cin >> myAge;
		fout << "name::::" << myAge << endl;

		cout << "Введите свой пол: " << endl;
		cin >> mySex;
		fout << "name::::" << mySex << endl;

		fout.close();
		//cout << "Hello world: " << myName << endl;
	}
	system("pause>nul");
	return 0;
}

