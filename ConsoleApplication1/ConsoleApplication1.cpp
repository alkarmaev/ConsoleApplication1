// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string> 



using namespace std;

int main()
{
	system ("chcp 1251>nul");

	string myName;
	cout << "Введите свое имя: " << endl;
	cin >> myName;
	
	cout << "Hello world: "<< myName << endl;
		
	system("pause>nul");
	return 0;
}

