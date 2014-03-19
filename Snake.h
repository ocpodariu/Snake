/**----------------------------------------------------------------
 *  Author:        Ovidiu PODARIU
 *  Date:          18-Mar-2014
 *
 *  It describes the snake's characteristics and actions.
 *
 *----------------------------------------------------------------*/

#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED

#include "Board.h"

/// The maximum size of the snake - number of "segments".
const unsigned int MAX_SIZE = 20;

class Snake {

private:

	/**
	 * Reference to the current board.
	 */
	Board& board;

	/**
	 * Number of lives the snake has before it dies.
	 */
	unsigned int lives;

	/**
	 * The length of the snake - number of "segments".
	 */
	unsigned int length;

	/**
	 * Stores the coordinates of the snake's "segments".
	 * coord[0] - the head of the snake;
	 */
	unsigned int coord[MAX_SIZE][2];

	/**
	 * The direction of the snake. It can have one of the
	 * following values:
	 *		- 'H' -> the snake goes UP
	 *		- 'P' -> the snake goes DOWN
	 *		- 'K' -> the snake goes LEFT
	 *		- 'M' -> the snake goes RIGHT
	 */
	char direction;

	/**
	 * The player's score.
	 */
	unsigned int score;

public:

    /**
     * The constructor initializes the board,
     * the number of lives, the length of the snake,
     * the array storing the snake's coordinates,
     * the direction and the player's score.
     */
	Snake(Board&);

    /**
     * Moves the snake to its next position
     * depending on its current direction.
     */
	void move();

    /**
     * Changes the snake's current direction.
     * @param the new direction of the snake
     */
	void changeDirection(char);

    /**
     * Returns the number of lives.
     * @return the number of lives
     */
	unsigned int getLives();

    /**
     * Returns the length of the snake.
     * @return the length of the snake
     */
	unsigned int getLength();

    /**
     * Returns the player's score.
     * @return the player's score
     */
	unsigned int getScore();

};

#endif // SNAKE_H_INCLUDED
