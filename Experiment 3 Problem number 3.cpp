#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	char a[500];
	int b;

	cout << "Please enter characters: ";
	cin.getline(a, 500);
	b = strlen(a);
	for (int j = b; j >= 0; j--)
	{
		cout << a[j]; 
	}
	cout << "Array Size:" << b + 1 << endl;

	_getch();
	return 0;
}