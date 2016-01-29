/************************************************************************/
/*																		*/
/*																		*/
/*  Created by Nick Tyler												*/
/*																		*/
/************************************************************************/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int main(int argc, char **argv){

	if (argc <= 1) exit (EXIT_FAILURE);
	//Get time from command line
	char  *time_word = argv[1];

	//check if time is too long
	if (atof(time_word) >= UINT_MAX){
		cout << red << "That's way too long!\n\rI'm not waiting that long!\n\rtry again." << def << endl;
	} else {
		//convert time to into and send to countdown function
		unsigned int time = atoi(time_word);
		countdown(time);

		//prints a new line and makes sure the color is set back to default in terminal
		cout << def << endl;
	}
	return 0;
}