
#include <stdlib>
#include <vector>
#include <ctime>
#include <string>
#include <iostream>

int convertToInt(string pChoice) {
    if (pChoice == "Rock" || pChoice == "rock") {
        return 0;
    }
    else if (pChoice == "Paper" || pChoice == "paper") {
        return 1;
    }
    else if (pChoice == "Scissor" || pChoice == "scissor") {
        return 2;
    }

    return 0;
}
bool inputValidation(const vector <string> choices, string pChoice) {
    bool boolean {};
    for (const string choice : choices) {
        if (choice == pChoice) {
            boolean = true;
            break;
        }
        else {
            boolean = false;
        }
    }
    return boolean;
}
void checkResult(Player &playerScore, Player &enemyScore, unsigned int &playerIChoice, unsigned int &enemyRand) {
 int resultArray[3][3] {
        {0, 2, 1},
        {1, 0, 2},
        {2, 1, 0}
    };

    int result = resultArray[playerIChoice][enemyRand];
    switch (result) {
        case 0: {
            cout << "Result is: Draw" << endl;
            break;
        }
        case 1: {
            cout << "Result is: You win!" << endl;
            playerScore.incrementScore();
            break;
        }
        case 2: {
            cout << "Result is: You lose!" << endl;
            enemyScore.incrementScore();
            break;
        }
    }
}
