#include "ex2.h"
#include <stdio.h>

void ex2()
{
	static int age = 10;
	static int height = 72;

	printf("I am %d years old. \n", age);
	printf("I am %d inches tall.\n", height);

}