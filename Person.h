#ifndef PERSON_H
#define PERSON_H
#include "stdafx.h"
#include <string>
using namespace std;

public class Person
{
private:
	string name;
	long id;
	int age;
public:
	Person(string name,long id,int age);
	Person();
	string getName();
	long getID();
	int getAge();
};
#endif