#include "stdafx.h"
#include <string>
#include "Person.h"
using namespace std;

Person::Person(string name, long id, int age){
	this->name = name;
	this->id = id;
	this->age = age;
}

Person::Person(){
	this->name = "Def";
	this->id = -1;
	this->age = -1;
}

string Person::getName(){
	return this->name;
}
long Person::getID(){
	return this->id;
}
int Person::getAge(){
	return this->age;
}
