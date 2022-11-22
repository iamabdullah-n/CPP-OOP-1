#include "Character.h"

int main()
{
	char alphabet = '\0';

	myChar c1('A'); //Single Object with the value for parameterized constructor

	cout << "The value of object with default parameterized constructor is " << c1.getChar() << endl; //Getting default value

	cout << "\nFOR THE SINGLE ALPHABET.......\n\n"; //Setting and Getting of a single object
	cout << "Enter the value of single object : ";
	cin >> alphabet;
	c1.setChar(alphabet);

	cout << "The alphabet is " << c1.getChar() << endl;
	cout << "The number after conversion (A to a) is " << c1.conversion() << endl;

	int size = 0;

	cout << "\nFOR THE MULTIPLE VALUES.........\n\n"; //Setting and Getting of Multiple Objects

	cout << "Enter how many objects you want : ";
	cin >> size;

	myChar* c; //Making an Array of mulitple objects
	c = new myChar[size];

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the " << i + 1 << " object value : ";
		cin >> alphabet;

		c[i].setChar(alphabet);
	}

	//Making two character arrays for sorting
	char* array;
	array = new char[size];

	char* array2;
	array2 = new char[size];

	char temp;

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		array[i] = c[i].getChar(); //Getting the alphabets in array
		array2[i] = array[i]; //Dupliating the array for case-specific sorting
		if (array2[i] >= 97 && array2[i] <= 122)		array2[i] -= 32;

		cout << i + 1 << ". Object alphabet is " << c[i].getChar() << endl;
		cout << "After conversion (A to a) is " << c[i].conversion() << endl;
	}

	//Sorting Algorithm
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array2[i] > array2[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				temp = array2[i];
				array2[i] = array2[j];
				array2[j] = temp;
			}
		}
	}

	//Setting the sorted values likewise in objects
	for (int i = 0; i < size; i++)
	{
		c[i].setChar(array[i]);
	}

	delete[] array;
	delete[] array2;

	array = nullptr;
	array2 = nullptr;

	//Printing of sorted objects
	cout << "\nAFTER SORTING...........\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". Object Value is " << c[i].getChar() << endl;
	}

	delete c;
	c = nullptr;

	return 0;
}