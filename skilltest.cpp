#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	double payrate;
	double hour;


	cout << fixed << showpoint;

	cout << "how much do you earn per hour?" << endl;
	cin  >> payrate;
	cout << "how many hours do you work per week?" << endl;
	cin  >> hour;
	cout << "income before tax: " << setprecision(2) << payrate*hour << endl;
	cout << "income after tax: " << setprecision(2) << (payrate*hour)*.86 <<endl;
	cout << "the money you spent on clothes: " << setprecision(2) << ((payrate*hour)*.86)*.10 << endl;
	cout << "the money you spent on school supplies: " << setprecision(2) << (((payrate*hour)*.86)*.90)*.01 << endl;
	cout << "the money you spent to buy savings bond: " << setprecision(2) << (((((payrate*hour)*.86)*.90)*.99)*.25) << endl;
	cout << "the money your parents spent on buying additional savings for you: " << setprecision(2) << ((((((payrate*hour)*.86)*.90)*.99)*.75)*.5) << endl;
	


	_getch ();
	return 0;
 }