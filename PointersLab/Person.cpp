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
	return this->_age;
}

int Person::getHeight()
{
	return this->_height;
}

int Person::getWeight()
{
	return this->_weight;
}

std::string Person::getName()
{
	return this->_name;
}

void Person::setName(std::string name)
{
	this->_name = name;
}