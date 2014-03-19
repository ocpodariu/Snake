/*----------------------------------------------------------------
 *  Author:        Ovidiu PODARIU
 *  Date:          17-Mar-2014
 *
 *  It is used to get the user's input.
 *
 *----------------------------------------------------------------*/

#include "Input.h"
#include <conio.h>      // kbhit(); getch();

char Input::readInput() {

	if (_kbhit()) {
		char ch = _getch();
		if (ch == 0) ch = _getch();
		return ch;
	}
	else
		return 0;

}