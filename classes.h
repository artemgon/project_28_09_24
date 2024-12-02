#include "libs.h"

class Student
{
protected:
	string _name, _surname, _stage;
	int _age;
public:
	Student(const string& name, const string& surname, const string& stage, int age)
	: _name(name), _surname(surname), _stage(stage), _age(age) {}
	virtual void about() const
	{
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Stage: " << _stage << endl;
		cout << "Age: " << _age << endl;
	}
	~Student() = default;
};

class Aspirant : public Student
{
public:
	Aspirant(const string& name, const string& surname, int age) : Student(name, surname, "0", age) {}
	void about() const override
	{
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Stage: " << _stage << endl;
		cout << "Age: " << _age << endl;
	}
	~Aspirant() = default; 
};
