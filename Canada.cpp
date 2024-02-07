//Canada.cpp by Steven Conyers 4/5/2021

/* Input:  Keyboard*/
/* Output: Screen*/
/* This program converts American currency (USD) to Canadian currency (CAD).
   Canadian RATE has been defined. This allows RATE and comment date to be changed without modifying code.
   With cout, the user is asked to enter in US currency amount.
   cin allows the user to enter in data.
   The amount entered in by the user will then be converted to total CAD and displayed on the screen by cout */
   
   
#include <iostream>
#include <iomanip>			/* I/O library */
#define RATE  1.259018 	/* Currency rate as of 4/8/2021 */
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