#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{ 
	double numberOfTicketsSold1; 
	double numberOfTicketsSold2;
	double numberOfTicketsSold3;
	double numberOfTicketsSold4;


	cout << "Enter ticket prices and number of tickets sold seperated by spaces to calculate ticket sales..." << endl;

	cin >> numberOfTicketsSold1;
	cout << "Box ($250) " << "	" << "Tickets Sold: " << numberOfTicketsSold1 << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << (250.00 * numberOfTicketsSold1) << endl;

	cin >> numberOfTicketsSold2;
	cout << "Sideline ($100) " << "	" << "Tickets Sold: " << numberOfTicketsSold2 << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << 100.00 * numberOfTicketsSold2 << endl;

	cin >> numberOfTicketsSold3;
	cout << "Premium ($50) " << " " << "Tickets Sold: " << numberOfTicketsSold3 << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << 50.00 * numberOfTicketsSold3 << endl;

	cin >> numberOfTicketsSold4;
	cout << "General Admission ($25) " << " " << "Tickets Sold: " << numberOfTicketsSold4 << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << 25 * numberOfTicketsSold4 << endl;

	cout << "Total Sale of Tickets: " << setprecision(2) << fixed << (250 * numberOfTicketsSold1) + (100 * numberOfTicketsSold2) + (50 * numberOfTicketsSold3) + (25 * numberOfTicketsSold4) << endl;
	_getch(); 
	return 0;
}