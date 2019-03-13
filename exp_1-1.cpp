#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double box; 

	double sideline; 
	double premium; 
	double genad;

	cout << fixed << showpoint;

	cout << "Number of Box Tickets" << endl;
	cin >> box;
	cout << "total amount: "  << "         " << setprecision(2) << 250.00*box <<  endl;
	cout << " " << endl;

	cout << "Number of sideline Tickets" << endl;
	cin >> sideline;
	cout << "total amount: "  << "         " << setprecision(2) << 100.00*sideline  << endl;
	cout << " " << endl;

	cout << "Number of premium Tickets" << endl;
	cin >> premium;
	cout << "total amount: "  << "         " << setprecision(2) << 50.00*premium <<  endl;
	cout << " " << endl;

	cout << "Number of genad Tickets" << endl;
	cin >> genad;
	cout << "total amount: "  << "         " << setprecision(2) << 25.00*genad <<  endl;
	cout << " " << endl;

	cout << "grand total: " << setprecision(2) << 250.00*box + 100.00*sideline + 50.00*premium + 25.00*genad  << endl;
	_getch ();
	return 0;
 }