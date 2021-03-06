// PointersLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include "Person.h"

void PassByValue(int value);
void PassByRef(int &value);
void ModifyPerson(Person *person);

int main()
{

	int num1 = 3;
	int num2 = 5;
	int *pNum = &num2;

	PassByValue(num1);
	PassByRef(*pNum);

	std::cout << "pNum: ";
	std::cout << *pNum << std::endl;

	double *pDouble = new double;
	*pDouble = 5.0;

	std::cout << "pDouble: ";
	std::cout << *pDouble << std::endl;

	delete pDouble;

	Person person{1, 2, 3, "test"};
	Person *pPerson = &person;

	std::cout << "Person: " << std::endl;
	std::cout << pPerson->getAge() << std::endl;
	std::cout << pPerson->getHeight() << std::endl;
	std::cout << pPerson->getWeight() << std::endl;
	std::cout << pPerson->getName() << std::endl;

	ModifyPerson(&person);

	std::cout << "change name: " << std::endl;
	std::cout << pPerson->getName() << std::endl;

    return 0;
}

void ModifyPerson(Person *person)
{
	person->setName("test2");
}

void PassByValue(int value)
{
	std::cout << "PassByValue: ";
	std::cout << value << std::endl;
	value = 2;
	std::cout << "new value: ";
	std::cout << value << std::endl;
}

void PassByRef(int &value)
{
	value = 50;
	std::cout << "PassByRef: ";
	std::cout << value << std::endl;
}