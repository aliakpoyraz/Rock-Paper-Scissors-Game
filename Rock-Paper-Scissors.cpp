#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int choice;
    string player1;
    string player2;
    char gameChoiceP1;
    char gameChoiceP2;
    int gamePoint1 = 0;
    int gamePoint2 = 0;

    cout << "<<< ROCK - PAPER - SCISSORS >>> " << endl;
    cout << "<<< 1.) Play with Friends >>> " << endl;
    cout << "<<< 2.) Play with Computer >>>" << endl;
    cout << "<<< 3.) Exit >>> " << endl;
    cout << "<<< Make Your Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the name of the first player: ";
        cin >> player1;
        cout << "Enter the name of the second player: ";
        cin >> player2;
        system("clear");
        cout << "Player 1 -> " << player1 << endl;
        cout << "Player 2 -> " << player2 << "\n" << endl;
        system("clear");
        cout << player1 << "  <-- VERSUS -->  " << player2 << endl;
        this_thread::sleep_for(chrono::seconds(1));

        cout << "Game Starting..." << endl;
        cout << "3..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "2..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "1..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "GO!" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        system("clear");

        do {
            cout << player1 << " <<< Make Your Choice --> Rock (R/r) // Paper (P/p) // Scissors (S/s) >>> : ";
            cin >> gameChoiceP1;
            system("clear");
            cout << "Your turn -> " << player2 << endl;
            this_thread::sleep_for(chrono::seconds(1));

            cout << player2 << " <<< Make Your Choice --> Rock (R/r) // Paper (P/p) // Scissors (S/s) >>> : ";
            cin >> gameChoiceP2;
            system("clear");

            if ((gameChoiceP1 == 'R' || gameChoiceP1 == 'r') && (gameChoiceP2 == 'S' || gameChoiceP2 == 's')) {
                gamePoint1++;
                cout << player1 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'S' || gameChoiceP1 == 's') && (gameChoiceP2 == 'P' || gameChoiceP2 == 'p')) {
                gamePoint1++;
                cout << player1 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'P' || gameChoiceP1 == 'p') && (gameChoiceP2 == 'R' || gameChoiceP2 == 'r')) {
                gamePoint1++;
                cout << player1 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'R' || gameChoiceP1 == 'r') && (gameChoiceP2 == 'P' || gameChoiceP2 == 'p')) {
                gamePoint2++;
                cout << player2 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'S' || gameChoiceP1 == 's') && (gameChoiceP2 == 'R' || gameChoiceP2 == 'r')) {
                gamePoint2++;
                cout << player2 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'P' || gameChoiceP1 == 'p') && (gameChoiceP2 == 'S' || gameChoiceP2 == 's')) {
                gamePoint2++;
                cout << player2 << " Win this round" << endl;
            } else {
                cout << "Draw Round" << endl;
            }

            cout << "Score Board" << endl;
            cout << player1 << ": " << gamePoint1 << "  " << player2 << ": " << gamePoint2 << endl;
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } while (gamePoint1 < 3 && gamePoint2 < 3);

        if (gamePoint1 == 3) {
            cout << player1 << " wins the game!" << endl;
        } else {
            cout << player2 << " wins the game!" << endl;
        }
    }

    if (choice == 2) {
        cout << "Enter your name: ";
        cin >> player1;
        cout << "\n" << player1 << "  <-- VERSUS -->  " << "Computer" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "Game Starting..." << endl;
        cout << "3..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "2..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "1..." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "GO!" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        system("clear");

        srand(time(0));
        do {
            cout << player1 << " <<< Make Your Choice --> Rock (R/r) // Paper (P/p) // Scissors (S/s) >>> : ";
            cin >> gameChoiceP1;
            system("clear");

            // Computer's choice
            int compChoice = rand() % 3; // 0 for Rock, 1 for Paper, 2 for Scissors
            switch (compChoice) {
                case 0:
                    gameChoiceP2 = 'R';
                    cout << "Computer chooses Rock." << endl;
                    break;
                case 1:
                    gameChoiceP2 = 'P';
                    cout << "Computer chooses Paper." << endl;
                    break;
                case 2:
                    gameChoiceP2 = 'S';
                    cout << "Computer chooses Scissors." << endl;
                    break;
            }

            if ((gameChoiceP1 == 'R' || gameChoiceP1 == 'r') && (gameChoiceP2 == 'S' || gameChoiceP2 == 's')) {
                gamePoint1++;
                cout << player1 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'S' || gameChoiceP1 == 's') && (gameChoiceP2 == 'P' || gameChoiceP2 == 'p')) {
                gamePoint1++;
                cout << player1 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'P' || gameChoiceP1 == 'p') && (gameChoiceP2 == 'R' || gameChoiceP2 == 'r')) {
                gamePoint1++;
                cout << player1 << " Win this round" << endl;
            } else if ((gameChoiceP1 == 'R' || gameChoiceP1 == 'r') && (gameChoiceP2 == 'P' || gameChoiceP2 == 'p')) {
                gamePoint2++;
                cout << "Computer wins this round" << endl;
            } else if ((gameChoiceP1 == 'S' || gameChoiceP1 == 's') && (gameChoiceP2 == 'R' || gameChoiceP2 == 'r')) {
                gamePoint2++;
                cout << "Computer wins this round" << endl;
            } else if ((gameChoiceP1 == 'P' || gameChoiceP1 == 'p') && (gameChoiceP2 == 'S' || gameChoiceP2 == 's')) {
                gamePoint2++;
                cout << "Computer wins this round" << endl;
            } else {
                cout << "Draw Round" << endl;
            }

            cout << "Score Board" << endl;
            cout << player1 << ": " << gamePoint1 << "  " << "Computer: " << gamePoint2 << endl;
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } while (gamePoint1 < 3 && gamePoint2 < 3);

        if (gamePoint1 == 3) {
            cout << player1 << " wins the game!" << endl;
        } else {
            cout << "Computer wins the game!" << endl;
        }
    }

    if (choice == 3) {
        cout << "Exiting..." << endl;
    }

    return 0;
}
