class Vehicle{
protected:
	char *m_name[10];//= "Henry";
public:
	void setName()
	{
		//*m_name = "Henry";
		char *name = "Henry";
		m_name = name;
	}

};
