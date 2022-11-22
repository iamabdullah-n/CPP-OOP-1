#include "Number.h"

myNum::myNum() //Default Constructor
{
	num = 0;
}

myNum::myNum(int n) //Default Parameterized Constructor
{
	num = n;
}

void myNum::setNum(int n) //Setter of Number
{
	num = n;
}

int myNum::getNum() //Getter of Number
{
	return num;
}

int myNum::conversion() //Conversion of +ve Number into -ve and vise versa
{
	return num * -1;
}