#include "libs.h"

class Transport
{
public:
	virtual float _timeFunc() const = 0;
	virtual float _fareFunc() const = 0;
	virtual void printFunc() const = 0;
	virtual ~Transport() = default;
};

class Car : public Transport
{
private:
	float _time;
	float _fare;
public:
	Car(float time, float fare) : _time(time), _fare(fare) {}
	float _timeFunc() const override { return _time; }
	float _fareFunc() const override { return _fare; }
	void printFunc() const override { cout << "Car: _time = " << _time << ", _fare = " << _fare << endl; }
};

class Bicycle : public Transport
{
private:
	float _time;
	float _fare;
public:
	Bicycle(float time, float fare) : _time(time), _fare(fare) {}
	float _timeFunc() const override { return _time; }
	float _fareFunc() const override { return _fare; }
	void printFunc() const override { cout << "Bicycle: _time = " << _time << ", _fare = " << _fare << endl; }
};

class Cart : public Transport
{
private:
	float _time;
	float _fare;
public:
	Cart(float time, float fare) : _time(time), _fare(fare) {}
	float _timeFunc() const override { return _time; }
	float _fareFunc() const override { return _fare; }
	void printFunc() const override { cout << "Cart: _time = " << _time << ", _fare = " << _fare << endl; }
};	