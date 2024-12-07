#include "libs.h"

class Pet
{
protected:
	string name, characteristics;
public:
	Pet(string name, string characteristics) : name(name), characteristics(characteristics) {}
	virtual void printFunc()
	{
		cout << "Name: " << name << endl;
		cout << "Characteristics: " << characteristics << endl;
	}
	~Pet() = default;
};

class Dog : public Pet
{
public:
	Dog(string name, string characteristics) : Pet(name, characteristics) {}
	void printFunc() override
	{
		cout << "Dog" << endl;
		Pet::printFunc();
	}
	~Dog() = default;
};

class Cat : public Pet
{
public:
	Cat(string name, string characteristics) : Pet(name, characteristics) {}
	void printFunc() override
	{
		cout << "Cat" << endl;
		Pet::printFunc();
	}
	~Cat() = default;
};

class Parrot : public Pet
{
public:
	Parrot(string name, string characteristics) : Pet(name, characteristics) {}
	void printFunc() override
	{
		cout << "Parrot" << endl;
		Pet::printFunc();
	}
	~Parrot() = default;
};