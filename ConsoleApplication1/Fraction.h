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
	Fraction operator=(Fraction &);
	void setnumerator(int);
	void setdenominator(int);
	void setwholenumber(int);
	
	void Print();
	//Destructor
	~Fraction();
	
	friend std::ostream& operator<<(std::ostream&, const Fraction &);
	friend std::istream& operator>>(std::istream &, Fraction &);
private:
	int wholenumber, numerator, denominator;
	
	void SimplifyFraction();
};

