#ifndef WORKINGSTUDENT_H
#define WORKINGSTUDENT_H
#include "stdafx.h"
#include <string>
#include "Student.h"
#include "Employee.h"
using namespace std;

public class WorkingStudent : public Student,public Employee
{
private:
	bool same_institute;
public:
	WorkingStudent(string name, long id, int age, float salary, int average, string institute, bool same_institute);
	bool getSameInst();
};
#endif