//redoing tutorial 2, the fraction thing
#include <iostream>
#include <stdexcept>
#include "Fraction.h"

using namespace std;

Fraction EnterFraction();

int main()
{
	Fraction f1, f2;
	cout << "Enter Fraction 1 in form: whole number numerator denominator" << endl;
	cin >> f1;
	cout << "Enter Fraction 2 in form: whole number numerator denominator" << endl;
	cin >> f2;
	
	cout << f1;
	cout << f2;
	return 0;
}
