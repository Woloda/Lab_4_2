#include "Rectangle.h"


Rectangle::Rectangle() : a(0), b(0) {}								//конструктор за умовчанням(без параметрів)
Rectangle::Rectangle(double v_a, double v_b) : a(v_a), b(v_b) {};	//конструктор ініціалізації

void Rectangle::Set_a(double value) { a = value; }	//встановлення значення поля "a"
void Rectangle::Set_b(double value) { b = value; }	//встановлення значення поля "b"

double Rectangle::Get_a() const { return a; }		//отримання значення поля "a"
double Rectangle::Get_b() const { return b; }		//отримання значення поля "b"

//віртуальний метод --- відповідає за обчислення площі прямокутника
double Rectangle::Square() { return a * b; }

//віртуальний метод --- відповідає за обчислення периметра прямокутника
double Rectangle::Perimeter() { return 2 * (a + b); }

//віртуальний метод --- відповідає за виведення на екран даних прямокутника
std::ostream& Rectangle::Display(std::ostream& out) const {
	out << "\nThe first side is: " << a;
	out << "\nThe second side is: " << b;
	return out;
}