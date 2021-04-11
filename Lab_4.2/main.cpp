#include <iostream>
#include <typeinfo>
#include <iomanip>

#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Trapeze.h"

//перевантаження операції виведення даних(зовнішня функція)
std::ostream& operator << (std::ostream& out, const Figure& obj)
{
	return obj.Display(out);	// obj – поліморфний об'єкт
}

int main(void) {
	using std::cout;

	Figure* A{}, * B{}, * C{};
	A = new Circle(4);
	B = new Rectangle(5, 8);
	C = new Trapeze(3, 7, 5, 2);

	Figure* pol_objects[3]{ A, B, C };

	cout << "\n\nDisplay object  " << typeid(*pol_objects[0]).name() << " : ";
	cout << *pol_objects[0];

	cout << "\n\nDisplay object  " << typeid(*pol_objects[1]).name() << " : ";
	cout << *pol_objects[1];

	cout << "\n\nDisplay object  " << typeid(*pol_objects[2]).name() << " : ";
	cout << *pol_objects[2];

	cout << "\n\nSquare object  " << typeid(*pol_objects[0]).name() << " : " << std::setprecision(4) << pol_objects[0]->Square();
	cout << "\nPerimeter object  " << typeid(*pol_objects[0]).name() << " : " << std::setprecision(4) << pol_objects[0]->Perimeter();

	cout << "\n\nSquare object  " << typeid(*pol_objects[1]).name() << " : " << std::setprecision(4) << pol_objects[1]->Square();
	cout << "\nPerimeter object  " << typeid(*pol_objects[1]).name() << " : " << std::setprecision(4) << pol_objects[1]->Perimeter();

	cout << "\n\nSquare object  " << typeid(*pol_objects[2]).name() << " : " << std::setprecision(4) << pol_objects[2]->Square();
	cout << "\nPerimeter object  " << typeid(*pol_objects[2]).name() << " : " << std::setprecision(4) << pol_objects[2]->Perimeter();

	cout << "\n";

	return 0;
}