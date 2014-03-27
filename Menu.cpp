/**----------------------------------------------------------------
 *  Author:        Ovidiu PODARIU
 *  Date:          27-Mar-2014
 *
 *  It is used to represent the main menu of the game.
 *
 *----------------------------------------------------------------*/

 #include "Menu.h"
 #include <stdio.h>
 #include <stdlib.h>    // system("cls");

 Menu::Menu() {

    nrOfOptions = 3;

    // Initialize the name of the options
    options[0].name = (char*) "New game";
    options[1].name = (char*) "How to play";
    options[2].name = (char*) "Exit";

    currentOption = 0;

    // Initially, "New game" is selected
    options[0].selected = true;
    options[1].selected = false;
    options[2].selected = false;

 }

 void Menu::displayMenu() {

     clearScreen();

     printf("\n\n");

     displayTitle();

     printf("\n\n");

     displayOptions();

 }

 void Menu::displayTitle() {

     printf("\t\t#####################\n");
     printf("\t\t###               ###\n");
     printf("\t\t###   S N A K E   ###\n");
     printf("\t\t###               ###\n");
     printf("\t\t#####################\n");

 }

 void Menu::displayOptions() {

     for (unsigned int i = 0; i < nrOfOptions; i++) {
        printf("\t\t     ");
        if (options[i].selected)
            printf("> ");
        else
            printf("  ");
        printf(options[i].name);
        printf("\n\n");
     }

 }

 void Menu::displayInstructions() {

     clearScreen();

     printf("\n\n");

     displayTitle();

     printf("\n\n\n");

     printf("\t\t      How to play \n");
     printf("\t\t      =========== \n\n\n");
     printf("\t     The objective of the game is to eat\n");
     printf("\t as many food items as possible and     \n");
     printf("\t avoid hitting the walls.               \n");
     printf("\t     Each food items gives you 10 points\n");
     printf("\t and you have 3 lives - 3 chances to get\n");
     printf("\t more points - before the game ends.    \n");

     printf("\n\n\n");

 }

 void Menu::displayCounter(unsigned int sec) {

     clearScreen();

     printf("\n\n\t The game starts in... %d", sec);

 }

 void Menu::clearScreen() {

     system("cls");

 }

 void Menu::changeOption(char direction) {

     lastCommand = direction;

     if (direction == UP && currentOption != 0) {
        options[currentOption].selected = false;
        options[--currentOption].selected = true;
     }
     else if (direction == DOWN && currentOption != (nrOfOptions - 1)) {
        options[currentOption].selected = false;
        options[++currentOption].selected = true;
     }

 }

 void Menu::resetMenu() {

    currentOption = 0;

    options[0].selected = true;
    options[1].selected = false;
    options[2].selected = false;

    lastCommand = 's';

 }

 unsigned int Menu::getCurrentOption() { return currentOption; }

 char Menu::getLastCommand() { return lastCommand; }
