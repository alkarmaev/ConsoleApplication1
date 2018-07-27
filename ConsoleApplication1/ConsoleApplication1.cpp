// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string> 
#include <fstream>
#include "Defs.h"
#include "FileHandler.h"

using namespace std;


int main()
{
	system ("chcp 1251>nul");
	string myName;
	string myAge;
	string mySex;
	//string saveFile = "1.txt";
	string saveFile = "F:\\test\\1.txt";
	
	cout << "это файл: " << saveFile << endl;
	while (true)
	{
		cout << "Введите свое имя: " << endl;
		cin >> myName;
		myName = "name:::" + myName;
		writeToFileOnce(&saveFile, &myName, true);
		cout << "Введите свой возраст: " << endl;
		cin >> myAge;
		myAge = "Age:::" + myAge;
		writeToFileOnce(&saveFile, &myAge, false);

		cout << "Введите свой пол: " << endl;
		cin >> mySex;
		mySex = "Sex:::" + mySex;
		writeToFileOnce(&saveFile, &mySex,false);
		//cout << "Hello world: " << myName << endl;
				
		PRINT << "Ваше имя: " << myName << endl;
		PRINT << "Ваш возраст: " << myAge << endl;
		PRINT << "Ваш свой пол: " << mySex << endl;
	}
	system("pause>nul");
	return 0;
}

