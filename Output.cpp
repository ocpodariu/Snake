/**----------------------------------------------------------------
 *  Author:        Ovidiu PODARIU
 *  Date:          21-Mar-2014
 *
 *  Its purpose is to print messages to standard output
 *  and to draw the board.
 *
 *----------------------------------------------------------------*/

 #include "Output.h"
 #include <stdio.h>

 Output::Output(Board& newBoard): board(newBoard) {   }

 void Output::updateBoard() {

    for (int i = 0; i < MAX_LINES; i++) {
        for (int j = 0; j < MAX_COLUMNS; j++) {
            printf("%d", board.getXY(i, j));
        }
        printf("\n");
    }

 }

 void Output::showResults(unsigned int score) {

    if (score == 0)
        printf("Sorry, better luck next time...");
    else
        printf("Congratulations! You obtained a total score of %d.", score);

 }
