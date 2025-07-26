#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class DiceGame {
private:
    int totalRolls;  
public: 
    DiceGame() {
        srand(time(0));    
        totalRolls = 0;   
    } 
    void rollDice(int numDice) {
        cout << "\nRolling " << numDice << " dice...\n";
        for (int i = 0; i < numDice; ++i) {
            int roll = (rand() % 6) + 1;  
            cout << "Die " << (i + 1) << ": " << roll << endl;
        }
        totalRolls++;   } 
    bool askUser() {
        char choice;
        cout << "\nDo you want to roll again? (y/n): ";
        cin >> choice;
        return (choice == 'y' || choice == 'Y');
    } 
    void start() {
        int numDice;
        bool keepRolling = true;

        while (keepRolling) {
            cout << "\nHow many dice do you want to roll? ";
            cin >> numDice;

            if (numDice <= 0) {
                cout << "Please enter a valid number of dice.\n";
                continue;
            }

            rollDice(numDice);
            keepRolling = askUser();
        } 
        cout << "\nYou rolled the dice " << totalRolls << " time(s) in total.\n";
        cout << "Thanks for playing!" << endl;
    }
}; 
int main() {
    DiceGame game;
    game.start();
    return 0;
}