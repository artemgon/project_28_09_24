#include "classes.h"

int main()
{
	Passport p1("Ivanov Ivan Ivanovich", "Kyiv", "M", "01.01.2000", "3465234");
	p1.printFunc();
	cout << endl;	
	ForeignPassport p2("Petrov Petr Petrovich", "Lviv", "M", "02.02.2000", "1234567890", "01.01.2020 - 01.01.2021");
	p2.printFunc();
	return 0;
}