#ifndef DOG_H
#define DOG_H
#include "animal.h"
using namespace std;

class Dog: public Animal
{
	public:
		Dog(string name):animal(name){}
		void speak()const
		{
			cout<<"toi la: "<<this->name<<" , gogogo"
		}
};
#endif
