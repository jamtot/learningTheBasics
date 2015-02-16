#include "Car.h"

Car::Car(int car_age) : m_age(car_age)
{}

Car::~Car()
{}

void Car::printName()
{
	printf("Cars name is \"%s\"!\n", m_name);
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
