#include "Number.h"

int main()
{
	int num = 0;

	myNum n1(10); //Single Object with value for parameterized Constructor

	cout << "The value of object with default parameterized constructor is " << n1.getNum() << endl; //Getting default value

	cout << "\nFOR SINGLE VALUE........\n"; //Setting and Getting of Single Object
	cout << "\nEnter the number for single : ";
	cin >> num;
	n1.setNum(num);

	cout << "The number is " << n1.getNum() << endl;
	cout << "The number after conversion (+ to - or - to +) is " << n1.conversion() << endl;

	int size = 0;

	cout << "\nNOW FOR MULTIPLE VALUES.......\n"; //Setting and Getting of Multiple Objects
	cout << "\nEnter how many number of multiple objects you want : ";
	cin >> size;

	myNum *n; //Making an array of Class Objects
	n = new myNum[size];

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the " << i + 1 << " object  number  : "; //Setting the value for multiple objects
		cin >> num;
		n[i].setNum(num);
	}

	int* array; //Making a dynamic array for the sorting of objects elements
	array = new int[size];

	int temp = 0;

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		array[i] = n[i].getNum(); //Getting the value for multiple objects
		cout << i + 1 << ". Object number is " << n[i].getNum() << endl;
		cout << "After conversion (+ to - or - to +) is " << n[i].conversion() << endl;
	}

	for (int i = 0; i < size - 1; i++) //Sort Algorithm
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])

			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) //After sorting of array, setting the values likewise
	{
		n[i].setNum(array[i]);
	}

	delete[] array;
	array = nullptr;

	cout << "\nAFTER SORTING............\n\n"; //Displaying the sorted objects
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ". Object number is " << n[i].getNum() << endl;
	}

	delete[] n;
	n = nullptr;

	return 0;
}