#include "classes.h"

int main()
{
	Transport* transport[3];
	transport[0] = new Car(1.5, 100);
	transport[1] = new Bicycle(2.5, 50);
	transport[2] = new Cart(3.5, 25);
	transport[0]->printFunc();
	transport[1]->printFunc();
	transport[2]->printFunc();
	return 0;
}