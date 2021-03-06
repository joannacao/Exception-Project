// Exception.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Employee.h"
#include "ProductionWorker.h"
#include <string>
#include <iostream>

using namespace std; 


int main()
{
	try {
		Employee e("Hannah", 789, "Jan 1 2000"); 
		cout << e.getNumber() << endl; 
		//Employee e1("Ron", 10000, "Nov 1 2009"); 
		//cout << e1.getNumber() << endl;
		ProductionWorker p(1, 17.85, "Dan", 4567, "Oct 5 2016"); 
		cout << p.getShift() << endl;
		//ProductionWorker p1(0, 17.85, "John", 6789, "Aug 6 1998"); 
		//cout << p1.getShift() << endl;
		ProductionWorker p2(2, -10.9, "Fiona", 6782, "Dec 1 2005"); 
		cout << p2.getHourlyPayRate() << endl;
	}
	catch (Employee::InvalidEmployeeNumber) {
		cout << "Invalid employee number." << endl; 
	}
	catch (ProductionWorker::InvalidShift) {
		cout << "Invalid shift" << endl; 
	}
	catch (ProductionWorker::InvalidPayRate) {
		cout << "Invalid rate" << endl; 
	}
    return 0;
}

