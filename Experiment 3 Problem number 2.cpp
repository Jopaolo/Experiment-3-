#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int temp[21];
	int a;
	int day = 0;
	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
	for (int j = 0; j < 21; j++)
	{
		if (j < 7)
		{
			day = j + 1;
			cout << "Province A, ";
			cout << "Day " << day << ": ";
			cin >> temp[j];
		}
		else if (j > 6 && j < 14)
		{
			day = j - 6;
			cout << "Province B, ";
			cout << "Day " << day << ": ";
			cin >> temp[j];
		}
		else if (j > 13 && j < 21)
		{
			day = j - 13;
			cout << "Province C, ";
			cout << "Day " << day << ": ";
			cin >> temp[j];
		}
	}
	cout << "Displaying Values: " << endl;
	for (int j = 0; j < 7; j++)
	{

		a = temp[j];
		day = j + 1;
		cout << "Province A, Day " << day << "= " << a << endl;
	}
	for (int j = 7; j < 14; j++)
	{
		a = temp[j];
		day = j - 6;
		cout << "Province B, Day " << day << "= " << a << endl;
	}
	for (int j = 14; j < 21; j++)
	{
		a = temp[j];
		day = j - 13;
		cout << "Province C, Day " << day << "= " << a << endl;
	}
	_getch();
	return 0;
}