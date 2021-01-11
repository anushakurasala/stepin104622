
#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int convertToInt(string pChoice);// convert players input into integer

bool inputValidation(const vector <string> choices, string pChoice);//validates player input

void printEnemyChoice(unsigned int &enemyRand, string &enemyChoice);//prints enemy choice
//remember that 0, 1 and 2 correspond to rock, paper and scissor respectively

void checkResult(Player &playerScore, Player &enemyScore, unsigned int &playerIChoice, unsigned int &enemyRand);
//determines the winner
/* a 2D array is used to compared playerIChoice (the player's choice) and the enemy's choice (randomly generated)
 * 0 represents draw
 * 1 represents player's win
 * 2 represents enemy's win
 * remember that 0, 1, 2 is also Rock, Paper and Scissor respectively.. bit confusing. Hope theres a better way to name this properly.
 * for eg. if playerIChoice = 2 (Scissors) and enemyRand = 1 (Paper), this points to "1" on the 2D array (3rd row, column 2)
 * since it points to a "1", therefore the player wins (Scissors beats Paper).
 * 1 is assigned to result, which is used in a switch statement to print out the winner on case 1 and increments the playerScore.score attribute.
 */


#endif  /* #define __GAME_H__ */
