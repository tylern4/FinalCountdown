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
#include <climits>

int main(int argc, char **argv){

	if (argc <= 1){
		std::cerr << "usage: " << argv[0] << " [seconds]" << std::endl;
		exit (EXIT_FAILURE);
	} 
	//Get time from command line
	char  *time_word = argv[1];

	//check if time is too long
	if (atof(time_word) >= UINT_MAX){
		std::cout << red << "That's way too long!\n\rI'm not waiting that long!\n\rtry again." << def << std::endl;
	} else {
		//convert time to into and send to countdown function
		unsigned int time = atoi(time_word);
		countdown(time);

		//prints a new line and makes sure the color is set back to default in terminal
		std::cout << def << std::endl;
	}
	return 0;
}