#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    char mainMenu = 'z';
    char powersMenu = 'z';
    double add1, add2 = 0;
    double subtract1, subtract2 = 0;
    double mult1, mult2 = 0;
    double div1, div2 = 0;
    double power1, power2 = 0;

    cout << "CALCULATOR PRACTICE PROGRAM" << endl
         << endl;
    cout << "Hello, and welcome to the Claculator Practice Program." << endl
         << endl;
    cout << "This program allows you to practice your math skills." << endl
         << endl;
    cout << "Choose what you want to practice in the menu shown below. " << endl
         << endl;
    cout << "\t\t MAIN MENU" << endl
         << endl;

    cout << "a. \t \t Addition \t \t (X + Y)" << endl;
    cout << "b. \t \t Subtraction \t \t (X - Y)" << endl;
    cout << "c. \t \t Multiplication \t (X * Y)" << endl;
    cout << "d. \t \t Division \t \t (X / Y)" << endl;
    cout << "e. \t \t Powers & Roots " << endl;
    cout << "q. \t \t Quit the program " << endl
         << endl;
    cin >> mainMenu;

    if (mainMenu == 'a' || mainMenu == 'A')
    {
        cout << "\n You have chosen Addition." << endl
             << endl;
        cout << "Please input two numbers to add together: " << endl;
        cin >> add1;
        cin >> add2;
        double sum = (add1 + add2);
        cout << "The sum is: " << sum << endl;
    };
    if (mainMenu == 'b' || mainMenu == 'B')
    {
        cout << "\n You have chosen Subtraction." << endl
             << endl;
        cout << "Please input two numbers to subtract: " << endl;
        cin >> subtract1;
        cin >> subtract2;
        double difference = (subtract1 - subtract2);
        cout << "The difference is: " << difference << endl;
    }
    if (mainMenu == 'c' || mainMenu == 'C')
    {
        cout << "\n You have chosen Multiplication." << endl
             << endl;
        cout << "Please enter two numbers to multiply: " << endl;
        cin >> mult1;
        cin >> mult2;
        double product = (mult1 * mult2);
        cout << "The product is: " << product << endl;
    }
    if (mainMenu == 'd' || mainMenu == 'D')
    {
        cout << "\n You have chosen division." << endl
             << endl;
        cout << "Please enter two numbers to divide: " << endl;
        cin >> div1;
        cin >> div2;
        double quotient = (div1 / div2);
        cout << "The quotient is: " << quotient << endl;
    }
    if (mainMenu == 'e' || mainMenu == 'E')
    {
        cout << "\n Hello, and welcome to the Powers & Roots Menu." << endl
             << endl;
        cout << "This menu allows you to take powers and roots of a number. " << endl
             << endl;
        cout << "\t\t POWERS & ROOTS MENU" << endl
             << endl;
        cout << "a. \t \t Square a number \t (X^2)" << endl;
        cout << "b. \t \t Cube a number \t \t (X^3)" << endl;
        cout << "c. \t \t Raise to any power \t (X^Y)" << endl;
        cout << "d. \t \t Square root a number \t (X^1/2)" << endl;
        cout << "e. \t \t Cube root any number \t (X^1/3)" << endl;
        cout << "f. \t \t Take any root \t \t (X^1/Y)" << endl;
        cout << "m. \t \t Return to Main Menu" << endl;
        cout << "q. \t \t Quit the program" << endl
             << endl;
        cin >> powersMenu;

        if (powersMenu == 'a' || powersMenu == 'A')
        {
            cout << "Please input a number to square: " << endl;
            cin >> power1;
            double squareOutput = pow(power1, 2);
            cout << power1 << " squared is: " << squareOutput << endl
                 << endl;
        }
        if (powersMenu == 'b' || powersMenu == 'B')
        {
            cout << "Please input a number to cube: " << endl;
            cin >> power1;
            double squareOutput = pow(power1, 3);
            cout << power1 << " cubed is: " << squareOutput << endl;
        }
        if (powersMenu == 'c' || powersMenu == 'C')
        {
            cout << "Please input two numbers to raise. " << endl;
            cin >> power1;
            cin >> power2;
            double squareOutput = pow(power1, power2);
            cout << squareOutput << " is " << power1 << " to the " << power2 << " power. " << endl << endl;
        }
        if (powersMenu == 'd' || powersMenu == 'D') {
            cout << "Please input a number to square root: " << endl;
            cin >> power1;
            double squareOutput = sqrt(power1);
            cout << squareOutput << " is the square root of " << power1 << endl << endl;
        }
        if (powersMenu == 'e' || powersMenu == 'E') {
            cout << "Please input a number to cube root: " << endl;
            cin >> power1;
            double squareOutput = cbrt(power1); // hopefuly cbrt works
            cout << squareOutput << " is the cubed root of " << power1 << endl << endl;
        }
        if (powersMenu == 'f' || powersMenu == 'F') {
            cout << "Please input two numbers to square root: " << endl;
            cin >> power1;
            cin >> power2;
            double squareOutput = pow(power1, 1/power2); // not sure if that will work
            cout << squareOutput << " is your answer. " << endl << endl;
        }
        /* This is the very inneficient part of my code. I wasn't sure how to loop back to the beginning of the program, so I paste-bombed
        the whole thing back in here. Pls be careful with the code in here as it could ruin the whole thing. Lol. 
         */

        if (powersMenu == 'm' || powersMenu == 'M')
        {
            cout << "Returning to main menu...";
            char mainMenu = 'z';
            char powersMenu = 'z';
            double add1, add2 = 0;
            double subtract1, subtract2 = 0;
            double mult1, mult2 = 0;
            double div1, div2 = 0;
            double power1, power2 = 0;
        
            cout << "CALCULATOR PRACTICE PROGRAM" << endl
                 << endl;
            cout << "Hello, and welcome to the Claculator Practice Program." << endl
                 << endl;
            cout << "This program allows you to practice your math skills." << endl
                 << endl;
            cout << "Choose what you want to practice in the menu shown below. " << endl
                 << endl;
            cout << "\t\t MAIN MENU" << endl
                 << endl;
        
            cout << "a. \t \t Addition \t \t (X + Y)" << endl;
            cout << "b. \t \t Subtraction \t \t (X - Y)" << endl;
            cout << "c. \t \t Multiplication \t (X * Y)" << endl;
            cout << "d. \t \t Division \t \t (X / Y)" << endl;
            cout << "e. \t \t Powers & Roots " << endl;
            cout << "q. \t \t Quit the program " << endl
                 << endl;
            cin >> mainMenu;
        
            if (mainMenu == 'a' || mainMenu == 'A')
            {
                cout << "\n You have chosen Addition." << endl
                     << endl;
                cout << "Please input two numbers to add together: " << endl;
                cin >> add1;
                cin >> add2;
                double sum = (add1 + add2);
                cout << "The sum is: " << sum << endl;
            };
            if (mainMenu == 'b' || mainMenu == 'B')
            {
                cout << "\n You have chosen Subtraction." << endl
                     << endl;
                cout << "Please input two numbers to subtract: " << endl;
                cin >> subtract1;
                cin >> subtract2;
                double difference = (subtract1 - subtract2);
                cout << "The difference is: " << difference << endl;
            }
            if (mainMenu == 'c' || mainMenu == 'C')
            {
                cout << "\n You have chosen Multiplication." << endl
                     << endl;
                cout << "Please enter two numbers to multiply: " << endl;
                cin >> mult1;
                cin >> mult2;
                double product = (mult1 * mult2);
                cout << "The product is: " << product << endl;
            }
            if (mainMenu == 'd' || mainMenu == 'D')
            {
                cout << "\n You have chosen division." << endl
                     << endl;
                cout << "Please enter two numbers to divide: " << endl;
                cin >> div1;
                cin >> div2;
                double quotient = (div1 / div2);
                cout << "The quotient is: " << quotient << endl;
            }
            if (mainMenu == 'e' || mainMenu == 'E')
            {
                cout << "\n Hello, and welcome to the Powers & Roots Menu." << endl
                     << endl;
                cout << "This menu allows you to take poers and roots of a number. " << endl
                     << endl;
                cout << "\t\t POWERS & ROOTS MENU" << endl
                     << endl;
                cout << "a. \t \t Square a number \t (X^2)" << endl;
                cout << "b. \t \t Cube a number \t (X^3)" << endl;
                cout << "c. \t \t Raise to any power \t (X^Y)" << endl;
                cout << "d. \t \t Square root a number \t (X^1/2)" << endl;
                cout << "e. \t \t Cube root any number \t (X^1/3)" << endl;
                cout << "f. \t \t Take any root \t \t (X^1/Y)" << endl;
                cout << "m. \t \t Return to Main Menu" << endl;
                cout << "q. \t \t Quit the program" << endl
                     << endl;
                cin >> powersMenu;
        
                if (powersMenu == 'a' || powersMenu == 'A')
                {
                    cout << "Please input a number to square: " << endl;
                    cin >> power1;
                    double squareOutput = pow(power1, 2);
                    cout << power1 << " squared is: " << squareOutput << endl
                         << endl;
                }
                if (powersMenu == 'b' || powersMenu == 'B')
                {
                    cout << "Please input a number to cube: " << endl;
                    cin >> power1;
                    double squareOutput = pow(power1, 3);
                    cout << power1 << " cubed is: " << squareOutput << endl;
                }
                if (powersMenu == 'c' || powersMenu == 'C')
                {
                    cout << "Please input two numbers to raise. " << endl;
                    cin >> power1;
                    cin >> power2;
                    double squareOutput = pow(power1, power2);
                    cout << squareOutput << " is " << power1 << " to the " << power2 << " power. " << endl
                         << endl;
                }
                if (powersMenu == 'm' || powersMenu == 'M')
                {
                    cout << "Returning to main menu...";
                }
            }
            if (mainMenu == 'q' || mainMenu == 'Q')
            {
                cout << "\n You have chosen to quit the program. Goodbye." << endl;
                exit(0);
            }
        }
    }
    if (mainMenu == 'q' || mainMenu == 'Q')
    {
        cout << "\n You have chosen to quit the program. Goodbye." << endl;
        exit(0);
    }
    return 1;
}