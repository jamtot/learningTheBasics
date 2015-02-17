#include <iostream>
#include <string>

using namespace std;

// Vehicle class, a base class which contains a name.
class Vehicle{
protected:
	string m_name;
public:
	void setName(string name)
	{
		m_name = name;
	}
};
