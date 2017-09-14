#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char choice, mainMenu(), ch, powersMenu(), powersChoice;
double addition1, addition2, subtraction1, subtraction2, multiplication1, multiplication2;
double division1, division2, powers1, powers2;
void additionMenu(), subtractionMenu(), multiplicationMenu(), divisionMenu();

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
	cout << "Please input an X and Y to subtract" << endl << endl;
	cin >> subtraction1;
	cout << endl;
	cin >> subtraction2;
	cout << endl;
	double subtractionOutput = (float)subtraction1 - subtraction2;
	cout << subtractionOutput << " is " << subtraction1 << " - " << subtraction2 << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

void additionMenu() {
	system("cls");
	system("clear");
	cout << "You have chosen addition. Please input two numbers to add: " << endl << endl;
	cin >> addition1;
	cout << endl;
	cin >> addition2;
	cout << endl;
	double additionOutput = addition1 + addition2;
	cout << additionOutput << " is " << addition1 << " + " << addition2 << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

void multiplicationMenu() {
	system("cls");
	system("clear");
	cout << "You have chosen multiplication. Please input two numbers to multiply: " << endl << endl;
	cin >> multiplication1;
	cout << endl;
	cin >> multiplication2;
	cout << endl;
	double multiplicationOutput = multiplication1 * multiplication2;
	cout << multiplicationOutput << " is " << multiplication1 << " times " << multiplication2 << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

void divisionMenu() {
	system("cls");
	system("clear");
    cout << "You have chosen division. Please input two numbers to divide: " << endl << endl;
	cin >> division1;
	cout << endl;
	cin >> division2;
	cout << endl;
    double divisionOutput = division1/division2;
    cout << divisionOutput << " is " << division1 << " divided by " << division2 << endl << endl;

    cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
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
	cout << "\t   Please enter your choice [ a - f, m, q]: " << endl;
	cout << "---------------------------------------------------" << endl << endl;
	cin >> powersChoice;
	cout << endl;

    if (powersChoice == 'a') {
		system("cls");
		system("clear");
        cout << "please input a number to square: " << endl << endl;
		cin >> powers1;
		cout << endl;
        double squareOutput = pow(powers1, 2);
		cout << squareOutput << " is " << powers1 << " squared" << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'b') {
		system("cls");
		system("clear");
		cout << "Please input a number to cube: " << endl << endl;
		cin >> powers1;
		cout << endl;
		double squareOutput = pow(powers1, 3);
		cout << squareOutput << " is " << powers1 << " cubed" << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	if (powersChoice == 'c') {
		system("cls");
		system("clear");
		cout << "You have chosen to raise x to any number (y). Please input two numbers: " << endl << endl;
		cin >> powers1;
		cout << endl;
		cin >> powers2;
		cout << endl;
		double squareOutput = pow(powers1, powers2);
		cout << squareOutput << " is " << powers1 << " to " << powers2 << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'd' || powersChoice == 'D') {
		system("cls");
		system("clear");
		cout << "You have chosen to square root a number. Please input a number to square root: " << endl << endl;
		cin >> powers1;
		cout << endl;
		double squareOutput = sqrt(powers1);
		cout << squareOutput << " is the square root of " << powers1 << endl << endl;

		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'e') {
		cout << "You have chosen cube root. Please input a number to cube root: " << endl << endl;
		cin >> powers1;
		cout << endl;
		double squareOutput = cbrt(powers1);
		cout << squareOutput << " is the cubed root of " << powers1 << endl << endl;
		
		cin.ignore();
		cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
		ch = cin.get();
	}
	else if (powersChoice == 'f') {
		cout << "You have chosen to take any root. Please input two numbers: " << endl << endl;
		cin >> powers1;
		cout << endl;
		cin >> powers2;
		cout << endl;
		double squareOutput = pow(powers1, 1/powers2);
		cout << squareOutput << " is the root of " << powers1 << " to the 1/" << powers2 << endl << endl;

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

