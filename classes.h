#include "libs.h"

class Passport
{
protected:
	string _snp, _city, _sex, _birth_date, _number;
public:
	Passport(string snp, string city, string sex, string birth_date, string number) : _snp(snp), _city(city), _sex(sex), _birth_date(birth_date), _number(number) {}
	virtual void printFunc() const
	{
		cout << "SNP: " << _snp << endl;
		cout << "City: " << _city << endl;
		cout << "Sex(M/F): " << _sex << endl;
		cout << "Birth date: " << _birth_date << endl;
		cout << "Number: " << _number << endl;
	}
	~Passport() = default;
};

class ForeignPassport : public Passport
{
protected:
	string _visa_data;
public:
	ForeignPassport(string snp, string city, string sex, string birth_date, string number, string visa_data) : Passport(snp, city, sex, birth_date, number), _visa_data(visa_data) {}
	void printFunc() const override
	{
		Passport::printFunc();
		cout << "Visa data: " << _visa_data << endl;
	}
	~ForeignPassport() = default;
};
