#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "stdafx.h"
#include <string>
#include "Person.h"
using namespace std;

public class Employee : virtual public Person
{
private:
	float salary;
public:
	Employee(string name, long id, int age, float salary);
	float getSalary();
};
#endif