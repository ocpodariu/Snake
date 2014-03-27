/**----------------------------------------------------------------
 *  Author:        Ovidiu PODARIU
 *  Date:          24-Mar-2014
 *
 *  It is used to represent the main menu of the game.
 *
 *----------------------------------------------------------------*/

#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

class Menu {

private:

    /**
     * Defines an option of the menu.
     * Every option has a name and it can
     * either be selected or not.
     */
    struct Option {
        char* name;
        bool selected;
    };

    /**
     * Stores the current options of the main menu.
     */
    Option options[3];

    /**
     * Total number of options.
     */
    unsigned int nrOfOptions;

public:

    /**
     * Initialize the options.
     */
    Menu();

    /**
	* Display the main menu of the game:
	* title + options.
	*/
    void displayMenu();

    /**
	* Displays the title of the game.
	*/
    void displayTitle();

    /**
	* Displays the options of the menu.
	*/
    void displayOptions();

    /**
	* Clears the screen.
	*/
    void clearScreen();

    /**
     * Changes the selected option.
     * @param the direction towards the desired option
     */
    void changeOption(char);

};

#endif // MENU_H_INCLUDED
