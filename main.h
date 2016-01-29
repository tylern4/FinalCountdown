/************************************************************************/
/*																		*/
/*																		*/
/*  Created by Nick Tyler												*/
/*	University Of South Carolina										*/
/************************************************************************/

#ifndef MAIN_H_GUARD
#define MAIN_H_GUARD
#include "color.hpp"
#include <iostream>
#include <unistd.h>

Color::Modifier red(Color::FG_RED);
Color::Modifier blue(Color::FG_BLUE);
Color::Modifier def(Color::FG_DEFAULT);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier bgred(Color::BG_RED);
Color::Modifier bgblue(Color::BG_BLUE);
Color::Modifier bgdef(Color::BG_DEFAULT);
Color::Modifier bggreen(Color::BG_GREEN);

void loadbar(long x, long n){
	int w = 50;
    if ( (x != n) && (x % (n/100+1) != 0) ) return;
 
    float ratio  =  x/(float)n;
    int c = ratio * w;
 
    std::cout << blue << " [";
    for (int x=0; x<c; x++) std::cout << green << "=" << def;
    std::cout << green << ">" << def;
    for (int x=c; x<w; x++) std::cout << " ";
    std::cout << blue << (int)(ratio*100) << "%]\r" << def;
}


void countdown(double time, bool sec, bool bar){
	for(unsigned int i = 0; i < time; i++){
        std::cout << " ";
		if (sec) std::cout << blue << "  " << (time-i) << " Sec left";
		if (bar) loadbar(i,time-1);
        std::cout << "\r" << std::flush;
		sleep(1);
	}
}

#endif
