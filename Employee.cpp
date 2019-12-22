#include "stdafx.h"
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string name, long id, int age, float salary) :Person(name, id, age){
	this->salary = salary;
}