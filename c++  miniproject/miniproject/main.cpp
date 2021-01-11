#include <cstdlib>
#include <vector>
#include <ctime>
#include <string>
#include <iostream>
#include "game.h"
#include "test_game.h"
using namespace std;

class Player {      //stores player/enemy points
private:
    int score;
public:
    int getScore() {
        return score;
    }

    void incrementScore() {
        score++;
    }
    //constructor
    Player(int points);
};

//constructor
Player::Player(int points)
    : score {points} {
}
int main() {
    Player playerScore {0};
    Player enemyScore {0};
    bool gameLoop {true};
    const vector <string> choices {"Rock", "rock", "Paper", "paper", "Scissor", "scissor", "Q", "q"};
    string playerChoice {};
    string enemyChoice {};
    unsigned int playerIChoice {};
    unsigned int enemyRand {};

    cout << "======================================" << endl;
    cout << "Rock, Paper, Scissor! - CLI w/ Objects" << endl;
    cout << "======================================" << endl;

    while (gameLoop) {
        cout << "\nChoose rock, paper, or scissor: " << endl;
        cout << "Press Q to quit the game." << endl;
        cin >> playerChoice;

        if (playerChoice == "Q" || playerChoice == "q") {
            cout << "Thanks for playing." << endl;
            gameLoop = false;
            break;
        }

        if (inputValidation(choices, playerChoice) == false) {      //passes vector with valid input and player's input to compare
            cout << "Invalid input, try again!" << endl;
            continue;
        }

        cout << "You picked: " << playerChoice << endl;
        playerIChoice = convertToInt(playerChoice);         //converts valid input into integers to compare with enemy's choice

        srand (time(NULL));
        enemyRand = rand() % 3;     //generates random number from 0-2

        printEnemyChoice(enemyRand, enemyChoice);
        checkResult(playerScore, enemyScore, playerIChoice, enemyRand);

        cout << "\nYour score is: " << playerScore.getScore() << endl;
        cout << "Enemy score is: " << enemyScore.getScore() << endl;
    }

    return 0;
}
