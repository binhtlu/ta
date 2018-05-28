#ifndef CAT_H
#define CAT_H
#include "animal.h"
using namespace std;

class Cat:public Animal
{
	public:	
		Cat(string name):Animal(name){};
		void speak()const
		{
			cout<<"toi la: "<<this-> name<<" , hihihihiih"
		}

};
#endif

