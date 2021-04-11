#pragma once

#include <sstream>


class Figure {		//інтерфейс(базовий клас) "figure"(фігура)
public:
	virtual double Square() = 0;		//віртуальний метод --- відповідає за обчислення площі фігури
	virtual double Perimeter() = 0;		//віртуальний метод --- відповідає за обчислення периметра фігури

	//віртуальний метод --- відповідає за виведення на екран даних фігури
	virtual std::ostream& Display(std::ostream& out) const = 0;
};