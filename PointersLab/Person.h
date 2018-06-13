#pragma once
#include <iostream>

class Person
{
	private:
		int _age;
		int _height;
		int _weight;
		std::string _name;

	public:
		int getAge();
		int getHeight();
		int getWeight();
		void setName(std::string name);
		std::string getName();
		Person(int age, int height, int weight, std::string name);
};