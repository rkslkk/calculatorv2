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
getInput();

// global variables for math operations
double x, y;

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
			powersMenu();
			break;
		case 'q':
			endProgram = false;
			break;
		}
	}
}

void getInput() {
	cout << "Please input two numbers: " << endl;
	cout << "X: ";
	cin >> x;
	cout << endl << endl;

	cout << "Y: ";
	cin >> y;
	cout << endl << endl;
}

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

void subtractionMenu() {
	system("cls");
	system("clear");
	cout << "Welcome to the subtraction menu" << endl << endl;
	cout << "Would you like to do floating point or integer math? (a/b)" << endl << endl;
	cin >> intfloatChoice;

	if (intfloatChoice == 'a') {
		getInput();
		double subtractionOutput = x - y;
		cout << subtractionOutput << " is " << x << " - " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'b') {
		getInput();
		double subtractionOutput = (x - y);
		cout << (int)subtractionOutput << " is " << x << " - " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

void additionMenu() {
	system("cls");
	system("clear");
	cout << "Welcome to the addition menu. " << endl << endl;
	cout << "Would you like to do floating point or integer math? (a/b)" << endl << endl;
	cin >> intfloatChoice;

	if (intfloatChoice == 'a') {
		getInput();
		cout << endl;
		double additionOutput = x + y;
		cout << additionOutput << " is " << x << " + " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'b') {
		getInput();
		double additionOutput = x + y;
		cout << (int)additionOutput << " is " << x << " + " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

void multiplicationMenu() {
	system("cls");
	system("clear");
	cout << "You have chosen multiplication." << endl << endl;
	cout << "Would you like to do floating point or integer math? (a/b)" << endl << endl;
	cin >> intfloatChoice;

	if (intfloatChoice == 'a') {
		getInput();
		double multiplicationOutput = x * y;
		cout << multiplicationOutput << " is " << x << " times " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'b') {
		getInput();
		double multiplicationOutput = x * y;
		cout << (int)multiplicationOutput << " is " << x << " times " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

void divisionMenu() {
	system("cls");
	system("clear");
	cout << "You have chosen division." << endl << endl;
	cout << "Would you like to do floating point or integer math? (a/b)" << endl << endl;
	cin >> intfloatChoice;

	if (intfloatChoice == 'a') {
		getInput();
		double divisionOutput = x/y;
		cout << divisionOutput << " is " << x << " divided by " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (intfloatChoice == 'b') {
		getInput();
		double divisionOutput = x/y;
		cout << (int)divisionOutput << " is " << x << " divided by " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
}

char powersMenu() {
	system("cls");
	system("clear");
	cout << "Welcome to the powers and roots Menu. Please choose what you would like to do. " << endl << endl;
	cout << "This menu you always allows you to take powers and roots of a number." << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\t \t POWERS AND ROOTS MENU" << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cout << "A. Square a number \t\t(X^2)" << endl << endl;
	cout << "B. Cube a number\t\t(X^3)" << endl << endl;
	cout << "C. Raise to any power\t\t(X^Y)" << endl << endl;
	cout << "D. Square root any number\t(X^1/2)" << endl << endl;
	cout << "E. Cube root any number\t \t(X^1/3)" << endl << endl;
	cout << "F. Take any root       \t \t(X^1/Y)" << endl << endl;
	cout << "M. Return to main menu" << endl << endl;
	cout << "Q. Quit the program" << endl << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cout << "\tPlease enter your choice [ a - f, m, q]: " << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cin >> powersChoice;
	cout << endl;

    if (powersChoice == 'a') {
		system("cls");
		system("clear");
        cout << "please input a number to square: " << endl << endl;
		cin >> x;
		cout << endl;
        double squareOutput = pow(x, 2);
		cout << squareOutput << " is " << x << " squared" << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'b') {
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
	if (powersChoice == 'c') {
		system("cls");
		system("clear");
		cout << "You have chosen to raise x to any number (y). Please input two numbers: " << endl << endl;
		cin >> x;
		cout << endl;
		cin >> y;
		cout << endl;
		double squareOutput = pow(x, y);
		cout << squareOutput << " is " << x << " to " << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'd' || powersChoice == 'D') {
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
	else if (powersChoice == 'e') {
		cout << "You have chosen cube root. Please input a number to cube root: " << endl << endl;
		cin >> x;
		cout << endl;
		double squareOutput = cbrt(x);
		cout << squareOutput << " is the cubed root of " << x << endl << endl;
		
		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'f') {
		cout << "You have chosen to take any root. Please input two numbers: " << endl << endl;
		cin >> x;
		cout << endl;
		cin >> y;
		cout << endl;
		double squareOutput = pow(x, 1/y);
		cout << squareOutput << " is the root of " << x << " to the 1/" << y << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'm') {
		cout << endl;
	}
	else if (powersChoice == 'q') {
		exit(0);
	}
}

