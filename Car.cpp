#include "Car.h"

Car::Car(int car_age) : m_age(car_age)
{ 
	//setName(); 
}

Car::~Car()
{}

void Car::printName()
{
	cout << "Cars name is " << m_name << endl;
}

void Car::printAge()
{
	cout << "Cars age is " << m_age << endl;
}

void Car::printDetails()
{
	printName();
	printAge();
}
