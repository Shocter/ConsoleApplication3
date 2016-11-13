// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float wynik;
float kelviny(float c)
{
	wynik = c+273.15;
	return wynik;
}

float fahrenheity(float c)
{
	wynik = c * 1.8 + 32;
	return wynik;
}

int main()
{
	int wybor;
	cout << "Wybierz jednostke na jaka jednostke chcesz skonwertowac celciusze:" << endl <<
		"==============================================================================" << endl << "1. Kelvin" << endl << 
		"2. Fahrenheit" << endl << "==============================================================================" << endl 
		<< "Twoj wybor to: ";
	cin >> wybor;
	cout << "==============================================================================" << endl;
	switch (wybor)
	{
	float  c;
	case 1:
		cout << "Podaj liczbe stopni Celciusa do przeliczebia na Kleviny: " << endl << "==============================================================================" << endl;
		cin >> c;
		cout << c << " stopni Celciusa to " << kelviny(c) << " Kelvinow" << endl;
		break;

	case 2:
		cout << "Podaj liczbe stopni Celciusa do przeliczebia na Fahrenheity: " << endl << "==============================================================================" << endl;
		cin >> c;
		cout << endl << c << " stopni Celciusa to " << fahrenheity(c) << " Fahrenheitow" << endl;
		break;
	}
	system("pause");
	return 0;
}

