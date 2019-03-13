#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double mass;
	double density; 

	cout << "input mass in grams" << endl;
	cin >> mass;
	cout << "input density in grams per cubic cm" << endl;
	cin >> density;
	cout << "volume: " << setprecision (2)<< mass/4*density << " cm^3" <<  endl;

	_getch ();
	return 0;
 }