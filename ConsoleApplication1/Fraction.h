#pragma once
class Fraction
{
public:
	//Constructor
	Fraction();
	Fraction(int, int, int);
	
	Fraction operator+(Fraction &);
	Fraction operator-(Fraction &);
	Fraction operator/(Fraction &);
	Fraction operator*(Fraction &);

	void setnumerator(int);
	void setdenominator(int);
	void setwholenumber(int);
	
	void Print();
	//Destructor
	~Fraction();

private:
	int wholenumber, numerator, denominator;
	
	void SimplifyFraction();
};

