#include <stdexcept>
#include <iostream>
#include <iomanip>
#include "Fraction.h"
using namespace std;


Fraction::Fraction()
{
	denominator = 1;
	numerator = 0;
	wholenumber = 0;
}


void Fraction::Print()
{
	SimplifyFraction(); 
	cout << wholenumber << " " << numerator << "/" << denominator << endl;
}

void Fraction::setwholenumber(int w)
{
	wholenumber = w;
}

void Fraction::setnumerator(int n)
{
	numerator = n;
}

 void Fraction::setdenominator(int d)
{
	if (d != 0) 
	{ 
		denominator = d; 
	}
	else { throw invalid_argument("The denominator cannot be zero!"); }
}

 void Fraction::SimplifyFraction()
 {
	 if (numerator > denominator)
	 {
		 if (!(numerator % denominator))
		 {
			 wholenumber += numerator / denominator;
			 numerator = 0;
			 denominator = 0;
		 }
		 else
		 {
			 wholenumber += numerator - ((numerator % denominator)*denominator);
			 numerator = numerator % denominator;
		 }
		 
	 }
	 if ((numerator < 0) && (denominator < 0))
	 {
		 numerator *= -1;
		 denominator *= -1;
	 }
 }

 Fraction Fraction::operator+(Fraction &RHS)
 {
	 Fraction result;
	 result.wholenumber = RHS.wholenumber + wholenumber;
	 result.numerator = RHS.denominator*numerator + RHS.numerator*denominator;
	 result.denominator = RHS.denominator*denominator;
	 result.SimplifyFraction();
	 return result;
 }

Fraction::~Fraction()
{
}

std::ostream& operator<<(std::ostream &os, const Fraction &RHS)
{
	os << RHS.wholenumber << " " << RHS.numerator << "/" << RHS.denominator << endl;
	return os;
}

std::istream& operator>>(std::istream &cin, Fraction &RHS)
{	
	int temp;
	bool fail = true;
		cin >> temp;
		RHS.setwholenumber(temp);
		cin >> temp;
		RHS.setnumerator(temp);
		cin >> temp;
		RHS.setdenominator(temp);
		RHS.SimplifyFraction();
		return cin;
}