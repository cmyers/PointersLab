#include "stdafx.h"
#include "Person.h"

Person::Person(int age, int height, int weight, std::string name) 
{
	_age = age;
	_height = height;
	_weight = weight;
	_name = name;
}

int Person::getAge()
{
	return _age;
}

int Person::getHeight()
{
	return _height;
}

int Person::getWeight()
{
	return _weight;
}

std::string Person::getName()
{
	return _name;
}

void Person::setName(std::string name)
{
	_name = name;
}