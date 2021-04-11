#pragma once

#include "Figure.h"


class Trapeze : public Figure {	//похідний клас "Trapeze"(трапеція) --- успадковує від класу "Figure"
private:
	double a, b, c, d;		//поля "a", "b", "c" і "d" --- відповідають за сторони довільної трапеції
public:
	Trapeze();										//конструктор за умовчанням(без параметрів)
	Trapeze(double, double, double, double);		//конструктор ініціалізації

	void Set_a(double);		//встановлення значення поля "a"
	void Set_b(double);		//встановлення значення поля "b"
	void Set_c(double);		//встановлення значення поля "c"
	void Set_d(double);		//встановлення значення поля "d"

	double Get_a() const;			//отримання значення поля "a"
	double Get_b() const;			//отримання значення поля "b"
	double Get_c() const;			//отримання значення поля "c"
	double Get_d() const;			//отримання значення поля "d"

	virtual double Square();		//віртуальний метод --- відповідає за обчислення площі трапеції
	virtual double Perimeter();		//віртуальний метод --- відповідає за обчислення периметра трапеції

	//віртуальний метод --- відповідає за виведення на екран даних трапеції
	virtual std::ostream& Display(std::ostream& out) const;

};