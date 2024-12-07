#include "classes.h"

int main()
{
	MyString s("Hello ", 6);
	cout << "s: " << s.getStr() << endl;
	MyString s2("World", 5);
	cout << "s2: " << s2.getStr() << endl;
	s += s2;
	cout << "s after += s2: " << s.getStr() << endl;
	MyString s3(". It's me", 9);
	cout << "s3: " << s3.getStr() << endl;
	s = s + s3;
	cout << "s after = s + s3: " << s.getStr() << endl;
	cout << "s length: " << s.lengthFunc() << endl;
	cout << "s == s2: " << (s == s2) << endl;
	cout << "s != s2: " << (s != s2) << endl;
	s.clearFunc();
	cout << "s after clear: " << s.getStr() << endl;
    MyBitString s4("1101", 4);
    MyBitString s5("1010", 4);
    cout << "s1: " << s4.getStr() << endl;
    cout << "s2: " << s5.getStr() << endl;
    s4.changeFunc();
    cout << "s1 after change: " << s4.getStr() << endl;
    s4.clearFunc();
    cout << "s1 after clear: " << s5.getStr() << endl;
	return 0;
}