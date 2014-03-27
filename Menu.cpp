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

 void Menu::clearScreen() {

     system("cls");

 }

 void Menu::changeOption(char direction) {

     if (direction == UP && currentOption != 0) {
        options[currentOption].selected = false;
        options[--currentOption].selected = true;
     }
     else if (direction == DOWN && currentOption != (nrOfOptions - 1)) {
        options[currentOption].selected = false;
        options[++currentOption].selected = true;
     }

 }
