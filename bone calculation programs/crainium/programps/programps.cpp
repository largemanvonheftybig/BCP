// programps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void Discrim1(double gop, double eueu, double zyzy, double bab, double ban, double bapr, double prn, double alal) 
{
	double discriminant = ((gop*-0.25) + (eueu * -1.56) + (zyzy * 1.75) + (bab * 0.73) + (ban * -0.29) + (bapr * 0.10) + (prn * -0.16) + (alal * -0.84));
	cout << "Discriminant 1 : " << discriminant << endl;
}

void Discrim2(double gop, double eueu, double zyzy, double bab, double ban, double bapr, double prn, double alal)
{
	double discriminant = ((gop*1.60) + (eueu * -1.90) + (zyzy * -0.10) + (bab * -1.79) + (ban * -4.41) + (bapr * 3.06) + (prn * 2.56) + (alal * 10.56));
	cout << "Discriminant 2: " << discriminant << endl;
}

void fDiscrim1(double gop, double eueu, double zyzy, double bab, double ban, double bapr, double prn, double alal)
{
	double discriminant = ((gop*-1.04) + (eueu * -5.41) + (zyzy * 5.62) + (bab * 4.29) + (ban * -4.02) + (bapr * 3.05) + (prn * -1.00) + (alal * -2.19));
	cout << "Discriminant 1: " << discriminant << endl;
}

void fDiscrim2(double gop, double eueu, double zyzy, double bab, double ban, double bapr, double prn, double alal)
{
	double discriminant = ((gop*1.28) + (eueu * -1.18) + (zyzy * 0.38) + (bab * -0.14) + (ban * -2.34) + (bapr * 1.74) + (prn * -0.01) + (alal * 2.45));
	cout << "Discriminant 2: " << discriminant << endl;
}

int main()
{

	while (true) 
	{


		double gop;
		cout << "gop: " << endl;
		cin >> gop;

		double eueu;
		cout << "eueu: " << endl;
		cin >> eueu;

		double zyzy;
		cout << "zyzy: " << endl;
		cin >> zyzy;

		double bab;
		cout << "bab: " << endl;
		cin >> bab;

		double ban;
		cout << "ban: " << endl;
		cin >> ban;

		double bapr;
		cout << "bapr: " << endl;
		cin >> bapr;

		double prn;
		cout << "prn: " << endl;
		cin >> prn;

		double alal;
		cout << "alal: " << endl;
		cin >> alal;

		int sex;
		cout << "whats the sex? 1 for male 2 for female" << endl;
		cin >> sex;

		if (sex == 1) 
		{
			Discrim1(gop, eueu, zyzy, bab, ban, bapr, prn, alal);
			Discrim2(gop, eueu, zyzy, bab, ban, bapr, prn, alal);
		}
		else if (sex == 2) 
		{
			fDiscrim1(gop, eueu, zyzy, bab, ban, bapr, prn, alal);
			fDiscrim2(gop, eueu, zyzy, bab, ban, bapr, prn, alal);
		}
		else 
		{
			cout << "Gary I need Heroin" << endl;
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
