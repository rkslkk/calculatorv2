/* -----------------------------------------------------------------------------

FILE:              calculator.cpp

DESCRIPTION:       Calculator, does simple math and gives you int/float choices.

COMPILER:          VS

NOTES:             I still do not have divide by 0 fixed

MODIFICATION HISTORY:

Author                  Date               Version
---------------         ----------         --------------
Erik Slikkerveer		 2017-09-20			v1 - added switch function and basic menus for all operations
Erik Slikkerveer         2017-09-23         v1.1 - added basic addition, subtraction, division, 
Erik Slikkerveer		 2017-09-27			v1.2 - added powers and roots functionality 
Erik Slikkerveer		 2017-10-01			v1.3 - added float vs integer
Erik Slikkerveer		 2017-10-10			v1.4 - fixed int vs float problems
Erik Slikkerveer		 2017-10-11			v1.5 - working on divsion problems
Erik Slikkerveer		 2017-10-16			v1.6 - added more modularity to 
Erik Slikkerveer		 2017-10-17			v1.7 - fixed menu

----------------------------------------------------------------------------- */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

// prototypes
char
choice,
mainMenu(),
ch,
powersMenu(),
powersChoice,
intfloatChoice;

void
additionMenu(),
subtractionMenu(),
multiplicationMenu(),
divisionMenu(),
getInput(),
intfloat(),
squareNumbers(),
powerSwitch(),
cubeNumbers(),
raiseNumbers(),
squareRoot(),
cubeRoot(),
takeAnyRoot(),
divideByZero();

bool endPowersProgram, endProgram;

// global variables for math operations
double x, y;

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:      switch for the main menu- allows user to go between different operations
RETURNS:           0
RETURNS:          
NOTES:             N/A
----------------------------------------------------------------------------- */

int main() {
	bool endProgram = true;
	while (endProgram) {
		choice = mainMenu();

		switch (choice) {
		case 'a':
			additionMenu();
			break;
		case 'b':
			subtractionMenu();
			break;
		case 'c':
			multiplicationMenu();
			break;
		case 'd':
			divisionMenu();
			break;
		case 'e':
			endPowersProgram = true;
			powerSwitch();
			endProgram = false;
			break;
		case 'q':
			endProgram = false;
			break;
		}
	}
}

/* -----------------------------------------------------------------------------
FUNCTION:         getInput()
DESCRIPTION:       function that gets users input (x + y)
RETURNS:           Nothing (Void Function)
NOTES:             
----------------------------------------------------------------------------- */

void getInput() {
	cout << "Please input two numbers: " << endl;
	cout << "X: ";
	cin >> x;
	cout << endl << endl;

	cout << "Y: ";
	cin >> y;
	cout << endl << endl;
}

void divideByZero() {
	if (y <= 0) {
		cout << "Cannot divide by 0. Returning to main menu" << endl;
	}
}

/* -----------------------------------------------------------------------------
FUNCTION:          intfloat()
DESCRIPTION:       asks the user if they would like to integer or floating point math
RETURNS:           Nothing (Void Function)
NOTES:             
----------------------------------------------------------------------------- */

void intfloat() {
	cout << "Would you like to do integer or floating point math? (a/b)? " << endl;
	cin >> intfloatChoice;
}

/* -----------------------------------------------------------------------------
FUNCTION:          mainMenu()
DESCRIPTION:       main menu for the switch statement, gives the users choices and asks for input
RETURNS:           character choice for the switch statement
NOTES:             
----------------------------------------------------------------------------- */

char mainMenu() {
	system("cls");
	system("clear"); // for linux
	cout << "CALCULATOR PRACTICE PROGRAM" << endl << endl;
	cout << "Hello and welcome to the calculator practice program. \nThis program allows you to practice your math skills. \nChoose what you want to practice in the menu below.\n\n";
	cout << "-----------------------------------------------------" << endl;
	cout << "\t \t Main Menu" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "A. \t \t Addition \t \t (X+Y)" << endl << endl;
	cout << "B. \t \t Subtraction \t \t (X-Y)" << endl << endl;
	cout << "C. \t \t Multiplication \t (X*Y)" << endl << endl;
	cout << "D. \t \t Division \t \t (X/Y)" << endl << endl;
	cout << "E. \t \t Powers + Roots \t \t" << endl << endl;
	cout << "Q. \t \t Quit the program \t \t " << endl << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "\t  Enter your choice [a - e, q]" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cin >> choice;
	cout << endl << endl;

	return choice;
}
/* -----------------------------------------------------------------------------
FUNCTION:          subtractionMenu()
DESCRIPTION:       does int and floating point math operations for subtraction. heads back to main menu when done
RETURNS:           Nothing (Void Function)
NOTES:             
----------------------------------------------------------------------------- */

void subtractionMenu() {
	system("cls");
	system("clear");
	cout << "Welcome to the subtraction menu" << endl << endl;
	intfloat();

	if (intfloatChoice == 'b') {
		getInput();
		double subtractionOutput = x - y;
		cout << setprecision (3) << fixed << subtractionOutput << " is " << x << " - " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'a') {
		getInput();
		double subtractionOutput = (x - y);
		cout << (int)subtractionOutput << " is " << x << " - " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

/* -----------------------------------------------------------------------------
FUNCTION:          additionMenu()
DESCRIPTION:       takes in users input (x and y) and then adds them together. can do int/float math
RETURNS:           void function
NOTES:             
----------------------------------------------------------------------------- */

void additionMenu() {
	system("cls");
	system("clear");
	cout << "Welcome to the addition menu. " << endl << endl;
	intfloat();

	if (intfloatChoice == 'b') {
		getInput();
		cout << endl;
		double additionOutput = x + y;
		cout << additionOutput << " is " << x << " + " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'a') {
		getInput();
		double additionOutput = x + y;
		cout << (int)additionOutput << " is " << x << " + " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

/* -----------------------------------------------------------------------------
FUNCTION:          multiplicationMenu()
DESCRIPTION:       multiplies two numbers put in by the user (x and y) does float and int math
RETURNS:           Nothing (Void Function)
NOTES:             
----------------------------------------------------------------------------- */

void multiplicationMenu() {
	system("cls");
	system("clear");
	cout << "You have chosen multiplication." << endl << endl;
	intfloat();

	if (intfloatChoice == 'b') {
		getInput();
		double multiplicationOutput = x * y;
		cout << multiplicationOutput << " is " << x << " times " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'a') {
		getInput();
		double multiplicationOutput = x * y;
		cout << (int)multiplicationOutput << " is " << x << " times " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

/* -----------------------------------------------------------------------------
FUNCTION:          divisionMenu()
DESCRIPTION:       divides two numbers inputted by the user. (x + y) and does int vs float.
RETURNS:           Nothing (Void Function)
NOTES:             
----------------------------------------------------------------------------- */

void divisionMenu() {
	system("cls");
	system("clear");
	cout << "You have chosen division." << endl << endl;
	intfloat();

	if (intfloatChoice == 'b') {
		getInput();
		divideByZero();
		double divisionOutput = x / y;
		cout << divisionOutput << " is " << x << " divided by " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'a') {
		getInput();
		divideByZero();
		double divisionOutput = x / y;
		cout << (int)divisionOutput << " is " << x << " divided by " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

/* -----------------------------------------------------------------------------
FUNCTION:          powersMenu()
DESCRIPTION:       Menu and all operations for powers and roots. 
RETURNS:           Returns char powersChoice
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

char powersMenu() {
	system("cls");
	system("clear");
	cout << "Welcome to the powers and roots Menu. Please choose what you would like to do. " << endl << endl;
	cout << "This menu you always allows you to take powers and roots of a number." << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\t \t POWERS AND ROOTS MENU" << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cout << "\t A. Square a number \t\t(X^2)" << endl << endl;
	cout << "\t B. Cube a number\t\t(X^3)" << endl << endl;
	cout << "\t C. Raise to any power\t\t(X^Y)" << endl << endl;
	cout << "\t D. Square root any number\t(X^1/2)" << endl << endl;
	cout << "\t E. Cube root any number\t(X^1/3)" << endl << endl;
	cout << "\t F. Take any root       \t(X^1/Y)" << endl << endl;
	cout << "\t M. Return to main menu" << endl << endl;
	cout << "\t Q. Quit the program" << endl << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cout << "\tPlease enter your choice [ a - f, m, q]: " << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cin >> powersChoice;
	cout << endl;

	return powersChoice;
}

/* -----------------------------------------------------------------------------
FUNCTION:          squareNumbers()
DESCRIPTION:       squares numbers
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void squareNumbers() {
	system("cls");
	system("clear");
	cout << "please input a number to square: " << endl << endl;
	cin >> x;
	cout << endl;
	double squareOutput = pow(x, 2);
	cout << squareOutput << " is " << x << " squared" << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO POWERS MENU";
	ch = cin.get();
}

/* -----------------------------------------------------------------------------
FUNCTION:          cubeNumbers()
DESCRIPTION:       cubes numbers
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void cubeNumbers() {
	system("cls");
	system("clear");
	cout << "Please input a number to cube: " << endl << endl;
	cin >> x;
	cout << endl;
	double squareOutput = pow(x, 3);
	cout << squareOutput << " is " << x << " cubed" << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

/* -----------------------------------------------------------------------------
FUNCTION:          raiseNumbers()
DESCRIPTION:       raises an x to a y
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void raiseNumbers() {
	system("cls");
	system("clear");
	cout << "You have chosen to raise x to any number (y). Please input two numbers: " << endl << endl;
	getInput();
	double squareOutput = pow(x, y);
	cout << squareOutput << " is " << x << " to " << y << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

/* -----------------------------------------------------------------------------
FUNCTION:          squareRoot()
DESCRIPTION:       square roots numbers
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void squareRoot() {
	system("cls");
	system("clear");
	cout << "You have chosen to square root a number. Please input a number to square root: " << endl << endl;
	cin >> x;
	cout << endl;
	double squareOutput = sqrt(x);
	cout << squareOutput << " is the square root of " << x << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
	cout << endl;
}

/* -----------------------------------------------------------------------------
FUNCTION:          cubeRoot()
DESCRIPTION:       cube roots numbers
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void cubeRoot() {
	cout << "You have chosen cube root. Please input a number to cube root: " << endl << endl;
	cin >> x;
	cout << endl;
	double squareOutput = cbrt(x);
	cout << squareOutput << " is the cubed root of " << x << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

/* -----------------------------------------------------------------------------
FUNCTION:          takeAnyRoot()
DESCRIPTION:       takes any root
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void takeAnyRoot() {
	cout << "You have chosen to take any root. Please input two numbers: " << endl << endl;
	getInput();
	double squareOutput = pow(x, 1 / y);
	cout << squareOutput << " is the root of " << x << " to the 1/" << y << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

/* -----------------------------------------------------------------------------
FUNCTION:          powerSwitch()
DESCRIPTION:       switch statement for the powers and roots
RETURNS:           void
NOTES:             Put other information here ...
----------------------------------------------------------------------------- */

void powerSwitch() {
	while (endPowersProgram == true) {
		powersChoice = powersMenu();

		switch (powersChoice) {
			case 'a':
				squareNumbers();
				break;
			case 'b':
				cubeNumbers();
				break;
			case 'c':
				raiseNumbers();
				break;
			case 'd':
				squareRoot();
				break;
			case 'e':
				cubeRoot();
				break;
			case 'f':
				takeAnyRoot();
				break;
			case 'm':
				endPowersProgram = false;
				endProgram = true;
				break;
			case 'q':
				endPowersProgram = false;
				endProgram = false;
				break;
		}
	}
}

