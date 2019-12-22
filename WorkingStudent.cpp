#include "stdafx.h"
#include <string>
#include "WorkingStudent.h"
using namespace std;

WorkingStudent::WorkingStudent(string name, long id, int age, float salary, int average, string institute, bool same_institute):Student(name,id,age,average,institute),Employee(name,id,age,salary){
	this->same_institute = same_institute;
}