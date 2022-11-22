#include "Character.h"

myChar::myChar() //Default Constructor
{
	alphabet = 0;
}

myChar::myChar(char a) //Parameterized Constructor
{
	alphabet = a;
}

void myChar::setChar(char a) //Setter of character
{
	alphabet = a;
}

char myChar::getChar() //Getter of character
{
	return alphabet;
}

char myChar::conversion() //Conversion of uppercase letter into lowercase letter and vice versa
{
	if (alphabet >= 65 && alphabet <= 90)
	{
		return alphabet + 32;
	}
	else if (alphabet >= 97 && alphabet <= 122)
	{
		return alphabet - 32;
	}
}