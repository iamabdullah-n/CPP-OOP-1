#include "Name.h"

int nameCompare(name n1, name n2);

int main()
{
	const int size = 100;
	char first[size] = "Ahmad", last[size] = "Ali";

	name n1(first, last);

	name n2 = n1;

	bool isValid;

	cout << "-> 1st Name using default parameterized constructor : ";
	n1.display();

	cout << "\n-> Now 2nd name using copy constructors : ";
	n2.display();

	cout << "\n-> FOR THE 1st OBJECT......\n";

	cout << "Enter the First Name : ";
	cin >> first;

	cout << "Enter the Last Name : ";
	cin >> last;

	n1.setName(first, last);

	isValid = n1.isValidName();

	while (isValid == 0)
	{
		cout << "\nINVALID NAME........\nNAME ONLY CONTAINS ALPHABETS\n";
		cout << "Enter the First Name : ";
		cin >> first;

		cout << "Enter the Last Name : ";
		cin >> last;

		n1.setName(first, last);
		isValid = n1.isValidName();
	}

	n2.copyName(n1);

	cout << "\n-> 1st Name taken by user : ";
	n1.display();
	cout << "\n-> 2nd Name taken using copyName : ";
	n2.display();

	cout << "\n-> FOR THE 2nd OBJECT......\n";

	cout << "Enter the First Name : ";
	cin >> first;

	cout << "Enter the Last Name : ";
	cin >> last;

	n2.setName(first, last);

	isValid = n2.isValidName();

	while (isValid == 0)
	{
		cout << "\nINVALID NAME........\nNAME ONLY CONTAINS ALPHABETS\n";
		cout << "Enter the First Name : ";
		cin >> first;

		cout << "Enter the Last Name : ";
		cin >> last;

		n2.setName(first, last);
		isValid = n2.isValidName();
	}

	cout << "\n-> 1st Name taken by user : ";
	n1.display();
	cout << "\n-> 2nd Name also taken by user : ";
	n2.display();

	n1.camelCase();
	n2.camelCase();

	cout << "\n-> AFTER APPLYING CAMEL CASE TO NAMES\n";
	cout << "1st ";
	n1.display();

	cout << "2nd ";
	n2.display();

	n1.lowerCase();
	n2.lowerCase();

	cout << "\n-> AFTER APPLYING LOWERCASE TO NAMES\n";
	cout << "1st  ";
	n1.display();

	cout << "2nd ";
	n2.display();

	n1.upperCase();
	n2.upperCase();

	cout << "\n-> AFTER APPLYING UPPERCASE TO NAMES\n";
	cout << "1st ";
	n1.display();

	cout << "2nd ";
	n2.display();

	n1.swapNames();
	n2.swapNames();

	cout << "\n-> AFTER SWAPPING NAMES\n";
	cout << "1st ";
	n1.display();

	cout << "2nd ";
	n2.display();

	char* array;

	array = n1.fullName();
	cout << "\n-> FULL NAMES ARE.......\n";
	cout << "1st Full Name :  " << array << endl;

	array = n2.fullName();
	cout << "2nd Full Name :  " << array << endl << endl;

	delete array;
	array = nullptr;

	int difference = 0;

	difference = nameCompare(n1, n2);

	cout << "\n-> AFTER FINDING LEXICOGRAPHICAL DIFFERENCE....\n";
	cout << "The lexicographical difference between 1st Name and 2nd Name : " << difference << endl;

	return 0;
}

int nameCompare(name obj1, name obj2)
{
	char* firstName1 = nullptr, * lastName1 = nullptr;
	char* firstName2 = nullptr, * lastName2 = nullptr;

	firstName1 = obj1.getFirstName();
	lastName1 = obj1.getLastName();

	firstName2 = obj2.getFirstName();
	lastName2 = obj2.getLastName();

	bool isEqual = true;

	int difference = 0;

	for (int count = 0; lastName1[count + 1] != '\0' || lastName2[count + 1] != '\0'; count++)
	{
		if (lastName1[count] == lastName2[count])
		{
			isEqual = true;
		}
		else
		{
			difference = lastName1[count] - lastName2[count];
			cout << lastName1[count] << " in Last Name : " << lastName1 << endl << lastName2[count] << " in Last Name : " << lastName2 << endl;
			isEqual = false;
			break;
		}
	}

	if (isEqual == true)
	{
		for (int count = 0; firstName1[count + 1] != '\0' || firstName2[count + 1] != '\0'; count++)
		{
			if (firstName1[count] == firstName2[count])
			{
				isEqual = true;
			}
			else
			{
				difference = lastName1[count] - lastName2[count];
				cout << firstName1[count] << " in Last Name : " << firstName1 << endl << firstName2[count] << " in First Name : " << firstName2 << endl;
				isEqual = false;
				break;
			}
		}
	}

	return difference;
}