///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: Samkelo Zondi
// Student No: 214538321
// Date: 22-March-2016
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction();
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
	friend Fraction greaterThan(const Fraction&, const Fraction&);
	//3.2
	float add(int a, Fraction b){ return (a / 1) + (b.num / b.denom); };
	float add(Fraction b, int a){ return (a / 1) + (b.num / b.denom); };
};

//3.1
Fraction greaterThan(const Fraction& f1, const Fraction& f2){
	Fraction Frac1;
	Fraction Frac2;

	Frac1.num = f1.num;
	Frac2.denom = f1.denom;

	Frac2.num = f2.num;
	Frac2.denom = f2.denom;

	if (Frac1.num == Frac2.num){
		if (Frac1.denom <= Frac2.denom)
			cout << "Fraction 1 is greater than Fraction 2 " << endl;
		else
			cout << "Fraction 2 is greater than fraction 1" << endl;
	}
	else if (Frac1.denom == Frac2.denom){
		if (Frac1.num <= Frac2.num)
			cout << "Fraction 2 is greater than fraction 1" << endl;
		else
			cout << "Fraction 1 is greater than fraction 2" << endl;
	}
}

//3.3
int main(){
	int numerator, denominator, rand;

	cout << "Please enter numerator" << endl;
	cin >> numerator;

	cout << "Plaese enter denominator" << endl;
	cin >> denominator;

	cout << "Please enter value" << endl;

	Fraction frac1(numerator, denominator);

	cout << endl;

	cout << "Please enter numerator" << endl;
	cin >> numerator;

	cout << "Plaese enter denominator" << endl;
	cin >> denominator;

	Fraction frac2(numerator, denominator), answer;

	answer = greaterThan(frac1, frac2);

	frac1.add(rand, frac1);



}