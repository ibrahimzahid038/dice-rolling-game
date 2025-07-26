#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  
    int numDice;
    int rollCount = 0;
    char choice;

    cout << "Welcome to the Dice Rolling Simulator!" << endl;
    cout << "Enter how many dice you want to roll: ";
    cin >> numDice;

    do {
        cout << "\nRolling " << numDice << " dice..." << endl;
        for (int i = 1; i <= numDice; ++i) {
            int die = rand() % 6 + 1;
            cout << "Die " << i << ": " << die << endl;
        }

        rollCount++;
        cout << "Total rolls so far: " << rollCount << endl; 
        do {
            cout << "\nDo you want to roll again? (y/n): ";
            cin >> choice;

            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
                cout << "Invalid input! Please enter 'y' or 'n'." << endl;
            }

        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing! You rolled the dice " << rollCount << " times." << endl;

    return 0;
}
