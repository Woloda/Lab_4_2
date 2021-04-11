#include "Circle.h"


Circle::Circle() : r(0) {}					//конструктор за умовчанням(без параметрів)
Circle::Circle(double value) : r(value) {}	//конструктор ініціалізації

void Circle::Set_r(double value) { r = value; }		//встановлення значення поля "r"
double Circle::Get_r() const { return r; }			//отримання значення поля "r"

double Circle::Square() {			//віртуальний метод --- відповідає за обчислення площі кола
	const double Pi = atan(1) * 4;
	return Pi * r * r;
}

double Circle::Perimeter() {		//віртуальний метод --- відповідає за обчислення периметра кола
	const double Pi = atan(1) * 4;
	return 2 * Pi * r;
}

//віртуальний метод --- відповідає за виведення на екран даних кола
std::ostream& Circle::Display(std::ostream& out) const {
	out << "\nThe radius is: " << r;
	return out;
}