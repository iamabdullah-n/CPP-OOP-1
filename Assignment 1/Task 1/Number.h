#include <iostream>

using namespace std;

class myNum
{
private:
	int num; //Class Member : Number

public:
	myNum(); 
	myNum(int);
	void setNum(int);
	int getNum();
	int conversion();
};