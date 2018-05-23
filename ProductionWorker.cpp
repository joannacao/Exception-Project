#include "stdafx.h"
#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(int s, double hpr, string NAME, int NUM, string DATE) : Employee(NAME, NUM, DATE)
{
	if (s < 1 || s > 2) {
		throw InvalidShift(); 
	}
	else {
		shift = s; 
	}
	if (hpr < 0) {
		throw InvalidPayRate(); 
	}
	else {
		hourlyPayRate = hpr; 
	}
}

ProductionWorker::ProductionWorker(int s, double hpr, string NAME, int NUMBER) : Employee(NAME, NUMBER)
{
	if (s < 1 || s > 2) {
		throw InvalidShift();
	}
	else {
		shift = s;
	}
	if (hpr < 0) {
		throw InvalidPayRate();
	}
	else {
		hourlyPayRate = hpr;
	}
}

void ProductionWorker::setShift(int s)
{
	if (s < 1 || s > 2) {
		throw InvalidShift();
	}
	else {
		shift = s;
	}
}

void ProductionWorker::setHourlyPayRate(double hpr)
{
	if (hpr < 0) {
		throw InvalidPayRate();
	}
	else {
		hourlyPayRate = hpr;
	}
}

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getHourlyPayRate()
{
	return hourlyPayRate;
}
