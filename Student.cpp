#include "stdafx.h"
#include <string>
#include "Student.h"
using namespace std;

Student::Student(string name, long id, int age, int average, string institute):Person(name,id,age){
	this->average = average;
	this->institute = institute;
}

int Student::getAvg(){
	return this->average;
}
string Student::getInst(){
	return this->institute;
}