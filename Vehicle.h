#include <iostream>
#include <string>

// Vehicle class, a base class which contains a name.
class Vehicle{
protected:
	std::string m_name;
public:
	void setName()
	{
		m_name = "Henriksonly";
	}
};
