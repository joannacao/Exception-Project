#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class Employee {
private:
	string name;
	int number;
	string hireDate;

public:
	Employee(string, int, string);
	Employee(string, int);

	void setName(string);
	void setNumber(int);
	void setHireDate(string);

	string getName();
	int getNumber();
	string getHireDate();

	class InvalidEmployeeNumber
	{}; 
};
