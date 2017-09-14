#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char choice, mainMenu(), ch;
double addition1, addition2, subtraction1, subtraction2, multiplication1, multiplication2;
double division1, division2;
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
		case 'q':
			endProgram = false;
			break;
		}
	}
}

char mainMenu() {
	system("cls");
	cout << "Welcome to the math menu" << endl << endl;
	cout << "A. \t \t Addition \t \t (X+Y)" << endl << endl;
	cout << "B. \t \t Subtraction \t \t (X-Y)" << endl << endl;
	cout << "C. \t \t Multiplication \t (X*Y)" << endl << endl;
	cout << "D. \t \t Division \t \t (X/Y)" << endl << endl;
	cout << "Q. \t \t Quit the program \t \t " << endl << endl;
	cin >> choice;

	/* if (choice == 'a') {
		cout << "You have chosen addition." << endl << endl;
	}
	else if (choice == 'b') {
		cout << "You have chosen subtraction." << endl << endl;
	} */ // I'm not completely sure I need these, so far no I'll comment them out

	return choice;
}

void subtractionMenu() {
	system("cls");
	cout << "Welcome to the subtraction menu" << endl << endl;
	cout << "Please input an X and Y to subtract" << endl << endl;
	cin >> subtraction1;
	cin >> subtraction2;
	double subtractionOutput = (float)subtraction1 - subtraction2;
	cout << subtractionOutput << " is " << subtraction1 << " - " << subtraction2 << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

void additionMenu() {
	system("cls");
	cout << "You have chosen addition. Please input two numbers to add: " << endl << endl;
	cin >> addition1;
	cin >> addition2;
	double additionOutput = addition1 + addition2;
	cout << additionOutput << " is " << addition1 << " + " << addition2 << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

void multiplicationMenu() {
	system("cls");
	cout << "You have chosen multiplication. Please input two numbers to multiply: " << endl << endl;
	cin >> multiplication1;
	cin >> multiplication2;
	double multiplicationOutput = multiplication1 * multiplication2;
	cout << multiplicationOutput << " is " << multiplication1 << " times " << multiplication2 << endl << endl;

	cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

void divisionMenu() {
    system("cls");
    cout << "You have chosen division. Please input two numbers to divide: " << endl << endl;
    cin >> division1;
    cin >> division2;
    double divisionOutput = division1 * division2;
    cout << divisionOutput << " is " << division1 << " divided by " << division2; 

    cin.ignore();
	cout << "PRESS RETURN/ENTER TO HEAD BACK TO MAIN MENU";
	ch = cin.get();
}

