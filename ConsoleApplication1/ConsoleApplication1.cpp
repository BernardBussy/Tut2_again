//redoing tutorial 2, the fraction thing
#include <iostream>
#include <stdexcept>
#include "Fraction.h"

using namespace std;

Fraction EnterFraction();

int main()
{
	Fraction f1, f2, f3;
	cout << "Enter: 5 45/20" << endl;
	cin >> f1;
	cout << f1;
	return 0;
}
