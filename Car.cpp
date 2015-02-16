#include "Car.h"

Car::Car(int car_age) : m_age(car_age)
{ 
	setName(); 
}

Car::~Car()
{}

void Car::printName()
{
	std::cout << "Cars name is " << m_name << std::endl;
}

void Car::printAge()
{
	printf("Cars age is %d!\n", m_age);
}

void Car::printDetails()
{
	printName();
	printAge();
}
