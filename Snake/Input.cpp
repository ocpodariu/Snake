/*----------------------------------------------------------------
*  Author:        Ovidiu PODARIU
*  Date:          17-Mar-2014
*
*  It is used to get the user's input.
*
*----------------------------------------------------------------*/

#include "Input.h"
#include <conio.h>      // kbhit(); getch();

/**
 * Check if the user has pressed any key.
 * If he hasn't, return 0.
 * Else return the key that was pressed. If a special
 * key's been pressed return only the character != NULL
 * from the end of the sequence. For example the UP arrow
 * key has the following code: NULL + 'H'. This method
 * returns only the character 'H'.
 *
 */
char Input::readInput() {

	if (kbhit()) {
		char ch = getch();
		if (ch == 0) ch = getch();
		return ch;
	}
	else
		return 0;

}