#include "stdafx.h"
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "WorkingStudent.h"
#include <iostream>
using namespace std;

void print(int size,int *types, Person** arr){
	for (int i = 0; i < size; i++){
		cout << "Person " << i + 1 << ":" << endl;
		cout << "Name: " << arr[i]->getName() << endl;
		cout << "ID: " << arr[i]->getID() << endl;
		cout << "Age: " << arr[i]->getAge() << endl;
	}
}
int main(){
	int size;
	cout << "Enter size:";
	cin >> size;
	Person **arr=new Person*[size];
	int *types;
	types =new int [size];
	int type;
	string name;
	long id;
	int age;
	int avg;
	string inst;
	float salary;
	bool same_inst;
	for (int i = 0; i < size; i++){
		cout << "Enter type of person. For Person type 1, for Student type 2, for Employee type 3, for Working Student type 4:";
		cin >> type;
		switch (type){
		case 1:
			types[i] = 1;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter age: ";
			cin >> age;
			arr[i] = new Person(name,id,age);
			break;
		case 2:
			types[i] = 2;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter age: ";
			cin >> age;
			cout << "Enter average: ";
			cin >> avg;
			cout << "Enter institute: ";
			cin >> inst;
			arr[i] = new Student(name, id, age, avg, inst);
			break;
		case 3:
			types[i] = 3;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter age: ";
			cin >> age;
			cout << "Enter salary: ";
			cin >> salary;
			arr[i] = new Employee(name, id, age,salary);
			break;
		case 4:
			types[i] = 4;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter age: ";
			cin >> age;
			cout << "Enter average: ";
			cin >> avg;
			cout << "Enter institute: ";
			cin >> inst;
			cout << "Enter salary: ";
			cin >> salary;
			cout << "Is working on the same institute? (True,False): ";
			cin >> same_inst;
			arr[i] = new WorkingStudent(name, id, age,salary,avg, inst,same_inst);
			break;
		default:
			cout << "Illeagal choise!";
			exit(1);
			break;
		}
		}
	print(size, types, arr);
	return 1;
}