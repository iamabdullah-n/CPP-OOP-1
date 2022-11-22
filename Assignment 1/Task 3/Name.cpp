#include "Name.h"

name::name() //Default Constuctor
{
	cout << "-> DEFAULT CONSTRUCTOR IS CALLED........\n\n";
}

name::name(char name1[], char name2[]) //Parameterized Constructor
{
	int size1 = 0, size2 = 0;
	
	for (int i = 0; name1[i] != '\0'; i++, size1++);

	for (int i = 0; name2[i] != '\0'; i++, size2++);

	firstName = new char[size1 + 1];
	lastName = new char[size2 + 1];

	for (int count = 0; name1[count] != '\0'; count++)
	{
		firstName[count] = name1[count];
	}
	firstName[size1] = '\0';

	for (int count = 0; name2[count] != '\0'; count++)
	{
		lastName[count] = name2[count];
	}
	lastName[size2] = '\0';
}

name::name(const name& obj) //Copy Constructor
{
	int size1 = 0, size2 = 0;

	for (int i = 0; obj.firstName[i] != '\0'; i++, size1++);

	for (int i = 0; obj.lastName[i] != '\0'; i++, size2++);

	firstName = new char[size1 + 1];
	lastName = new char[size2 + 1];

	for (int count = 0; obj.firstName[count] != '\0'; count++)
	{
		firstName[count] = obj.firstName[count];
	}
	firstName[size1] = '\0';

	for (int count = 0; obj.lastName[count] != '\0'; count++)
	{
		lastName[count] = obj.lastName[count];
	}
	lastName[size2] = '\0';
}

void name::copyName(name& obj) //Function works like a copy constructor
{
	int size1 = 0, size2 = 0;

	for (int i = 0; obj.firstName[i] != '\0'; i++, size1++);

	for (int i = 0; obj.lastName[i] != '\0'; i++, size2++);

	firstName = new char[size1 + 1];
	lastName = new char[size2 + 1];

	for (int count = 0; obj.firstName[count] != '\0'; count++)
	{
		firstName[count] = obj.firstName[count];
	}
	firstName[size1] = '\0';

	for (int count = 0; obj.lastName[count] != '\0'; count++)
	{
		lastName[count] = obj.lastName[count];
	}
	lastName[size2] = '\0';
}

void name::setName(char* name1, char* name2) //Setter of both names
{
	int size1 = 0, size2 = 0;

	for (int i = 0; name1[i] != '\0'; i++, size1++);

	for (int i = 0; name2[i] != '\0'; i++, size2++);

	firstName = new char[size1 + 1];
	lastName = new char[size2 + 1];

	for (int count = 0; name1[count] != '\0'; count++)
	{
		firstName[count] = name1[count];
	}
	firstName[size1] = '\0';

	for (int count = 0; name2[count] != '\0'; count++)
	{
		lastName[count] = name2[count];
	}
	lastName[size2] = '\0';
}

char* name::getFirstName()
{
	int length = 0;

	for (int i = 0; firstName[i] != '\0'; i++, length++);

	char* temp = new char[length + 1];

	for (int i = 0; firstName[i] != '\0'; i++)
	{
		temp[i] = firstName[i];
	}
	temp[length] = '\0';

	return temp;
}

char* name::getLastName()
{
	int length = 0;

	for (int i = 0; lastName[i] != '\0'; i++, length++);

	char* temp = new char[length + 1];

	for (int i = 0; lastName[i] != '\0'; i++)
	{
		temp[i] = lastName[i];
	}
	temp[length] = '\0';

	return temp;
}

void name::camelCase() //Conversion of 1st letter into Capital
{
	if (firstName[0] >= 97 && firstName[0] <= 122)
	{
		firstName[0] -= 32;
	}

	if (lastName[0] >= 97 && lastName[0] <= 122)
	{
		lastName[0] -= 32;
	}
}

void name::lowerCase() //Conversion of all elements into lowercase
{
	for (int i = 0; firstName[i] != '\0'; i++)
	{
		if (firstName[i] >= 65 && firstName[i] <= 90)
		{
			firstName[i] += 32;
		}
	}
	
	for (int i = 0; lastName[i] != '\0'; i++)
	{
		if (lastName[i] >= 65 && lastName[i] <= 90)
		{
			lastName[i] += 32;
		}
	}
}

void name::upperCase() //Conversion of all elements into uppercase
{
	for (int i = 0; firstName[i] != '\0'; i++)
	{
		if (firstName[i] >= 97 && firstName[i] <= 122)
		{
			firstName[i] -= 32;
		}
	}

	for (int i = 0; lastName[i] != '\0'; i++)
	{
		if (lastName[i] >= 97 && lastName[i] <= 122)
		{
			lastName[i] -= 32;
		}
	}
}

void name::swapNames() //Swapping First Name with Last Name
{
	int size1 = 0, size2 = 0;

	for (int i = 0; firstName[i] != '\0'; i++, size1++);

	for (int i = 0; lastName[i] != '\0'; i++, size2++);

	char* temp1 = new char[size1 + 1];
	char* temp2 = new char[size2 + 1];

	for (int count = 0; firstName[count] != '\0'; count++)
	{
		temp1[count] = firstName[count];
	}
	temp1[size1] = '\0';

	for (int count = 0; lastName[count] != '\0'; count++)
	{
		temp2[count] = lastName[count];
	}
	temp2[size2] = '\0';

	firstName = new char[size2  + 1];
	lastName = new char[size1 + 1];

	for (int count = 0; temp2[count] != '\0'; count++)
	{
		firstName[count] = temp2[count];
	}
	firstName[size2] = '\0';

	for (int count = 0; temp1[count] != '\0'; count++)
	{
		lastName[count] = temp1[count];
	}
	lastName[size1] = '\0';

	delete[] temp1, temp2;
	temp1 = nullptr, temp2 = nullptr;
}

void name::display() //Displaying Names here without getting into main
{
	cout << "Name : " << firstName << ' ' << lastName << endl;
}

char* name::fullName() //Returning the full name by combining first and last names
{
	int size1 = 0, size2 = 0;

	for (int i = 0; firstName[i] != '\0'; i++, size1++);

	for (int i = 0; lastName[i] != '\0'; i++, size2++);

	char* fullN = new char[size1 + size2 + 2];

	int counter = 0;

	for (int count = 0; firstName[count] != '\0'; count++)
	{
		fullN[counter++] = firstName[count];
	}

	fullN[counter++] = 32;

	for (int count = 0; lastName[count] != '\0'; count++)
	{
		fullN[counter++] = lastName[count];
	}

	fullN[counter] = '\0';

	return fullN;
}

bool name::isValidName() //Checking whether the names are valid or not (Ah*ed : INVALID)
{
	for (int count = 0; firstName[count] != '\0'; count++)
	{
		if (!((firstName[count] >= 65 && firstName[count] <= 90) || (firstName[count] >= 97 && firstName[count] <= 122)))
		{
			return 0;
		}
		else
		{
			continue;
		}
	}

	for (int count = 0; lastName[count] != '\0'; count++)
	{
		if (!((lastName[count] >= 65 && lastName[count] <= 90) || (lastName[count] >= 97 && lastName[count] <= 122)))
		{
			return 0;
		}
		else
		{
			continue;
		}
	}

	return 1;
}

name::~name()
{
	delete[] firstName;
	delete[] lastName;

	firstName = nullptr;
	lastName = nullptr;
}