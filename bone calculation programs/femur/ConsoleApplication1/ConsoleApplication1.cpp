// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void FemurCalc(double APSD, double MLSD) 
{
	double Pindex = ((APSD / MLSD) * 100);
	cout << "Index: " << Pindex << endl;
}

int main()
{
	while (true)
	{
		double APSD;
		cout << "APSD: " << endl;
		cin >> APSD;
		double MLSD;
		cout << "MLSD: " << endl;
		cin >> MLSD;

		FemurCalc(APSD, MLSD);

	}

	
}


