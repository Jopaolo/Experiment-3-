#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	int smallest = 0, largest = 0;
	int value[10]; 
	int a = 0;
	double total = 0;
	for (int j = 0; j < 10; j++)
	{
		cout << "Please enter a whole number: "; cin >> value[j];
	}
	largest = value[0];
	smallest = value[0];
	for (int j = 0; j < 10; j++)
	{
		total += value[j];
		a = value[j];
		if (a < smallest)
			smallest = a;
		else if (a > largest)
			largest = a;
	}
	cout << "The smallest number is: " << smallest << endl;
	cout << "The largest  number is: " << largest << endl;
	cout << "The total is: " << total << endl;
	cout << "The average is: " << total / 10 << endl;
	_getch();
	return 0;

}