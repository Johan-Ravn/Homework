
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/*
 * A small game where the user must guess a (random) number between 1 and 20.
 * The player can guess multiple times, but at the end the number of guesses must be reported.
 * If the user guesses a number outside of [1,20], then the user can guess again, and the invalid guess is not counted.
 *
 * Bonus: Report after each guess if the user was above or below the number.
 */

int game(guess){
    int maxNum = 20;
    int tries = 0;

    srand((unsigned) time(0));
    int number = rand() % 21;

    if guess

}

int main(void){
    int maxNum = 20;
    int highestGuess = 0;
    guess = 
    g = game(guess);
    return 0;
}