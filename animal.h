#include <iostream>
using namespace std
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
	protected:
		string name;
	public:
		Animal():name("noname"){}
		Animal(string a):name(a){}
		virtual void speak()const =0;
		
		
};
#endif
