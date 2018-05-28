#include <iostream>
#include "dog.h"
#include "animal.h"
#include "cat.h"
using namespace std;

int main()
{
	Animal *ani;
	Dog dog("ABC");
	Cat cat("bcb");
	ani = &dog;
	ani->speak();
	ani = &cat;
	ani->speak();
	return 0;
}			
