// cranial capacity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

double HLindex(double gop, double bab) 
{
	double average = (gop + bab) / 2;
	return average;
}
double MRF(double porvrt, double bast, double astast)
{
	double CC = (-1260.84 + (8.939*(porvrt*10)) + (7.825*(bast*10)) + (5.255*(astast*10)));
	return CC;
}

int main()
{
	double gop = 0;
	double bab = 0;
	double porvrt = 0;
	double bast = 0;
	double astast = 0;
	int typeOfCalc = 0;
	while (true) 
	{
		cout << "What are you calculating? 1 for HLindex, 2 for MRF" << endl;
		cin >> typeOfCalc;

		if (typeOfCalc == 1) 
		{
			cout << "gop: ";
			cin >> gop;
			cout << endl;
			cout << "bab: ";
			cin >> bab;
			cout << endl;

			cout << "The average is: " << HLindex(gop, bab) << endl;
			cout << endl;
		}
		else if (typeOfCalc == 2) 
		{
			cout << "porvrt: ";
			cin >> porvrt;
			cout << endl;
			cout << "bast: ";
			cin >> bast;
			cout << endl;
			cout << "astast: ";
			cin >> astast;
			cout << endl;

			cout << "Cranial Capacity of this specimen: " << MRF(porvrt, bast, astast);
			cout << endl;
		}
		else 
		{
			cout << "Bruh" << endl;
		}

		
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
