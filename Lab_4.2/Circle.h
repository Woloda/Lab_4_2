#pragma once

#include "Figure.h"


class Circle : public Figure {		//похідний клас "Circle"(коло) --- успадковує від класу "Figure"
private:
	double r;	//поле "r" --- відповідає за радіус кола 
public:
	Circle();			//конструктор за умовчанням(без параметрів)
	Circle(double);		//конструктор ініціалізації

	void Set_r(double);		//встановлення значення поля "r"
	double Get_r() const;	//отримання значення поля "r"

	virtual double Square();		//віртуальний метод --- відповідає за обчислення площі кола
	virtual double Perimeter();		//віртуальний метод --- відповідає за обчислення периметра кола

	//віртуальний метод --- відповідає за виведення на екран даних кола
	virtual std::ostream& Display(std::ostream& out) const;
};