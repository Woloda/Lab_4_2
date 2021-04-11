#include "Trapeze.h"


Trapeze::Trapeze()	//конструктор за умовчанням(без параметрів)
	: a(0), b(0), c(0), d(0)
{}
Trapeze::Trapeze(double v_a, double v_b, double v_c, double v_d)	//конструктор ініціалізації
	: a(v_a), b(v_b), c(v_c), d(v_d)
{}

void Trapeze::Set_a(double value) { a = value; }		//встановлення значення поля "a"
void Trapeze::Set_b(double value) { b = value; }		//встановлення значення поля "b"
void Trapeze::Set_c(double value) { c = value; }		//встановлення значення поля "c"
void Trapeze::Set_d(double value) { d = value; }		//встановлення значення поля "d"

double Trapeze::Get_a() const { return a; }		//отримання значення поля "a"
double Trapeze::Get_b() const { return b; }		//отримання значення поля "b"
double Trapeze::Get_c() const { return c; }		//отримання значення поля "c"
double Trapeze::Get_d() const { return d; }		//отримання значення поля "d"

//віртуальний метод --- відповідає за обчислення площі трапеції
double Trapeze::Square() {
	double value = (1.0 / 4.0) * (b + a) / (b - a);
	return value * sqrt((-a + b + c + d) * (a - b + c - d) * (a - b - c + d));
}

//віртуальний метод --- відповідає за обчислення периметра трапеції
double Trapeze::Perimeter() { return (a + b + c + d); }

//віртуальний метод --- відповідає за виведення на екран даних трапеції
std::ostream& Trapeze::Display(std::ostream& out) const {
	out << "\nThe first side is: " << a;
	out << "\nThe second side is: " << b;
	out << "\nThe third side is: " << c;
	out << "\nThe fourth side is: " << d;

	return out;
}