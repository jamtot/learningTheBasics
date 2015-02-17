#include "Car.h"

int main(int argc, char *argv[])
{
	int age;
	do 
	{
		cout << "How old is your car? ";
			
		cin >> age;
		cout << endl;
	}
	while(age<-1);

	Car car(age);

	string name;
	cout << "What is your car called? ";
	cin >> name;
	cout << endl;

	car.setName(name);
	car.printDetails();

	return 0;
}
