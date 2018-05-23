#include "stdafx.h"
#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(string NAME, int NUM, string DATE)
{
	name = NAME;
	if (NUM < 0 || NUM > 9999) {
		throw InvalidEmployeeNumber();
	}
	else {
		number = NUM; 
	}
	hireDate = DATE;
}

Employee::Employee(string NAME, int NUM)
{
	name = NAME;
	if (NUM < 0 || NUM > 9999) {
		throw InvalidEmployeeNumber();
	}
	else {
		number = NUM;
	}
}

void Employee::setName(string NAME)
{
	name = NAME;
}

void Employee::setNumber(int NUM)
{
	if (NUM < 0 || NUM > 9999) {
		throw InvalidEmployeeNumber();
	}
	else {
		number = NUM;
	}
}

void Employee::setHireDate(string DATE)
{
	hireDate = DATE;
}

string Employee::getName()
{
	return name;
}

int Employee::getNumber()
{
	return number;
}

string Employee::getHireDate()
{
	return hireDate;
}