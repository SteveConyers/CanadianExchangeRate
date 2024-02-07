/* CanadianExchangeRate.cpp by Steven Conyers
Created: 4/5/2021
Updated: 2/7/2024


#include <iostream>
#include <iomanip>	/* I/O library */
#define RATE  1.35 	/* Currency rate as of 2/7/2024 */
using namespace std;

int main(void)
{
/*Declaration*/
float usd = 0.0f;
float cad = 0.0f;

/*---------------------------------------------------------------------------------------------*/
/* Heading */
cout <<endl<<"US Dollars to Canadian Dollars Conversion by Steven Conyers"<<endl<<endl;

/*---------------------------------------------------------------------------------------------*/
/* User Input */
cout <<"US Dollar Amount: ";
cin >>usd;

/*---------------------------------------------------------------------------------------------*/
/* Conversion calculation and output */
cad = RATE * usd;
cout <<endl<<setprecision(2)<<fixed<<usd<<" US Dollar Amount = "<<setprecision(2)<<fixed<<cad<<" Canadian Dollar Amount"<<endl;

/*---------------------------------------------------------------------------------------------*/
/*End program */
return 0;
}
