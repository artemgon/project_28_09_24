#define _CRT_SECURE_NO_WARNINGS

#include "libs.h"1

class MyString
{
protected:
	char _str[100] = {};
public:
	MyString()
	{
		_str[0] = '\0';
	}
	MyString(const char s[], int len)
	{
		strncpy(_str, s, len);
		_str[len] = '\0';
	}
	MyString& operator=(const MyString& s) {
		strncpy(_str, s._str, 99);
		_str[99] = '\0'; 
		return *this;
	}
	int lengthFunc()
	{
		return strlen(_str);
	}
	const char* getStr() const { return _str; }
	void clearFunc()
	{
		_str[0] = '\0';
	}
	MyString operator+(MyString& s) const
	{
		MyString temp;
		strncpy(temp._str, _str, 99);
		strncat(temp._str, s._str, 99 - strlen(temp._str));
		return temp;
	}
	MyString& operator+=(const MyString& s) {
		strncat(_str, s._str, 99 - strlen(_str));
		return *this;
	}
	bool operator==(MyString& s)
	{
		return strcmp(_str, s._str) == 0;
	}
	bool operator!=(MyString& s)
	{
		return strcmp(_str, s._str) != 0;
	}
	virtual ~MyString() = default;
};
class MyBitString : public MyString
{
public:
	MyBitString() : MyString() {}
	MyBitString(const char s[], int len) {
		for (int i = 0; i < len; i++) {
			if (s[i] != '0' && s[i] != '1') {
				clearFunc();
				return;
			}
		}
		strncpy(const_cast<char*>(getStr()), s, len);
	}

	void changeFunc() {
		char* str = const_cast<char*>(getStr());
		for (int i = 0; i < strlen(str); i++) {
			str[i] = (str[i] == '0') ? '1' : '0';
		}
	}
};