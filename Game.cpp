/**----------------------------------------------------------------
 *  Author:        Ovidiu PODARIU
 *  Date:          21-Mar-2014
 *
 *  The main method. It contains the game loop.
 *
 *----------------------------------------------------------------*/

#include <stdio.h>
#include <windows.h>    // sleep()
#include <conio.h>      // kbhit()
#include "Board.h"
#include "Input.h"
#include "Output.h"
#include "Snake.h"
#include "Food.h"

int main() {

	Board board;

	Input input;
	Output output(board);

	Snake snake(board);
	Food food(board);

	do {
        snake.changeDirection(input.readInput());

        snake.move();

        // If the snake has eaten the food item
        // generate a new one.
        if (food.isEaten())
            food.generateFood();

        output.updateBoard();

        Sleep(100);
    }
    while (snake.getLives());

    output.showResults(snake.getScore());

    printf("Press any key to exit...\n");
    while(true)
        if (kbhit())
            break;

    return 0;

}
