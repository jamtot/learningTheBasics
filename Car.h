#include "Vehicle.h"
#include <stdio.h>

class Car : public Vehicle
{
private:
	int m_age;
	void printName();
	void printAge();
public:
	Car(int car_age);
	~Car();
	void printDetails();
};
