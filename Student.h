#ifndef STUDENT_H
#define STUDENT_H
#include "stdafx.h"
#include <string>
#include "Person.h"
using namespace std;

public class Student : virtual public Person
{
private:
	int average;
	string institute;
public:
	Student(string name, long id, int age,int average,string institute);
	int getAvg();
	string getInst();
};
#endif