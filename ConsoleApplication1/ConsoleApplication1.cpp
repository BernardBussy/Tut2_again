//redoing tutorial 2, the fraction thing
#include <iostream>
#include <stdexcept>
#include "Fraction.h"

using namespace std;

Fraction EnterFraction();

int main()
{
	int whole, numerator, denominator;
	Fraction f1, f2, f3;

	return 0;
}

Fraction EnterFraction()
{
	int wholeNumber, numerator, denominator;
	Fraction Input;
	cout << "Enter Whole Number:  ";
	cin >> wholeNumber;
	cout << endl << "Enter Numerator:  ";
	cin >> numerator;
	cout << endl << "Enter the Denominator:  ";
	cin >> denominator;
	bool Fail;
	do
	{
		try
		{
			Input.setwholenumber(wholeNumber);
			Input.setnumerator(numerator);
			Input.setdenominator(denominator);
			Fail = false;
		}
		catch (invalid_argument e)
		{
			cout << "Invalid Fraction" << e.what;
			Fail = true;
		}
	} while (Fail);
	return Input;
}