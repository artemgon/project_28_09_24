#include "classes.h"

int main()
{
	Dog dog("Arnold", "Age:5 , weight: 35 kg, height: 60 cm");
	Cat cat("Tom", "Age:3 , weight: 5 kg, height: 25 cm");
	Parrot parrot("Kesha", "Age:2 , weight: 0.5 kg, height: 15 cm");
	dog.printFunc();
	cat.printFunc();
	parrot.printFunc();
	return 0;
}