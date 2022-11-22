#include<iostream>
using namespace std;

class name
{
private:
	char* firstName; //Class Member
	char* lastName; //Class Member
public:
	name();
	name(char[], char[]); //Parameterized Constuctor with default values
	name(const name&); //Copy Constructor
	~name(); //Destructor

	void copyName(name&); //Function to copy object's content
	void setName(char*, char*);
	char* getFirstName();
	char* getLastName();
	void camelCase();
	void lowerCase();
	void upperCase();
	void swapNames();
	void display();
	char* fullName();
	bool isValidName();
};