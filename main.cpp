#include <iostream>
using namespace std;

class Fraction
{
private:
	int num, den;

public:
	Fraction() {
		num = 0; 
		den = 1;
	}
	Fraction(int num):Fraction() {
		this->num = num;
	}
	Fraction(int num, int den) {
		this->num = num;
		this->den = den;
	}

	//setters

	void setNum(int num) {
		this->num = num;
	}
	void setDen(int den) {
		this->den = den;
	}

	//getters
	int getNum() {
		return num;
	}
	int getDen() {
		return den;
	}

	//methods

	void print() {
		if (num > den) {//if the numerator is greater than the denominator
			int whole = num / den;
			num = num % den;
			cout << whole << " " << num << "/" << den << endl;
		}
		else {
			cout << num << "/" << den << endl;
		}
		cout << endl;
	}

	void print(int numerator, int denominator) {
		if (numerator > denominator) {//if the numerator is greater than the denominator
			int whole = numerator / denominator;
			numerator = numerator % denominator;
			cout << whole << " " << numerator << "/" << denominator << endl;
		}
		else {
			cout << num << "/" << den << endl;
		}
		cout << endl;
	}

	void print(Fraction f) {
		if (f.num > f.den) {//if the numerator is greater than the denominator
			int whole = f.num / f.den;
			f.num = f.num % f.den;
			cout << whole << " " << f.num << "/" << f.den << endl;
		}
		else {
			cout << f.num << "/" << f.den << endl;
		}
		cout << endl;
	}

	Fraction add(Fraction f) {
		Fraction result;
		result.num = num * f.den + f.num * den;
		result.den = den * f.den;
		return result;
	}

	void print_add(Fraction f) {
		Fraction result;
		result.num = num * f.den + f.num * den;
		result.den = den * f.den;
		cout << "Addition: ";
		cout << "(" << num << "/" << den << ") + (" << f.num << "/" << f.den << ") = ";
		print(result);
	}

	Fraction sub(Fraction f) {
		Fraction result;
		result.num = num * f.den - f.num * den;
		result.den = den * f.den;
		return result;
	}

	void print_sub(Fraction f) {
		Fraction result;
		result.num = num * f.den - f.num * den;
		result.den = den * f.den;
		cout << "Subtraction: ";
		cout << "(" << num << "/" << den << ") - (" << f.num << "/" << f.den << ") = ";
		print(result);
	}

	Fraction mul(Fraction f) {
		Fraction result;
		result.num = num * f.num;
		result.den = den * f.den;
		return result;
	}
	void print_mul(Fraction f) {
		Fraction result;
		result.num = num * f.num;
		result.den = den * f.den;
		cout << "Multiplication: ";
		cout << "(" << num << "/" << den << ") * (" << f.num << "/" << f.den << ") = ";
		print(result);
	}

	Fraction div(Fraction f) {
		Fraction result;
		result.num = num * f.den;
		result.den = den * f.num;
		return result;
	}
	void print_div(Fraction f) {
		Fraction result;
		result.num = num * f.den;
		result.den = den * f.num;
		cout << "Division: ";
		cout << "(" << num << "/" << den << ") / (" << f.num << "/" << f.den << ") = ";
		print(result);
	}

	
};

int main()
{
	Fraction f1(3, 4);
	Fraction f2(2, 3);
	f1.print();
	f2.print();

	f1.print_add(f2);
	f2.print_sub(f1);
	f1.print_mul(f2);
	f1.print_div(f2);
	system("pause");
	return 0;
}