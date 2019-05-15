#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	double x;

	cout << "Enter a number: "; cin >> x;
	cout << "Multiplication table of: " << x << "\n";
	
	
	for (a = 1; a<=10; a++)
		cout << a << " * " << x << " = " << (a * x) << "\n"; 
	
	
	_getch();
	return 0;

}
