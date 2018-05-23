#pragma once
#include "stdafx.h"
#include "Employee.h"


class ProductionWorker : public Employee {
private:
	int shift;
	double hourlyPayRate;

public:
	ProductionWorker(int, double, string, int, string);
	ProductionWorker(int, double, string, int);

	void setShift(int);
	void setHourlyPayRate(double);

	int getShift();
	double getHourlyPayRate();

	class InvalidShift
	{};
	class InvalidPayRate
	{}; 
};
