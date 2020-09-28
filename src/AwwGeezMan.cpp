/*
 _____ ____ _____   ____ _____ ____  
| ____/ ___| ____| |___ \___  | ___| 
|  _|| |   |  _|     __) | / /|___ \ 
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/ 
                                     
 _   _                                         _      _ 
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|
 
 
Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <cstdio>
#include <iostream>
#include <string.h>

namespace C137 {
void Morty(int start, int stop, int step);
void Morty(int start, int stop);
}
namespace Z286 {
void Morty(int start, int stop, int step);
void Morty(int start, int stop);
}

int main (int ac, char** av) {
  int start, stop, step = 1;
  char* dimension;

	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" 
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;
		
		return -1;
	}


if (ac == 4) {
    for (int i=1; i<=3; i++) {
        if (i == 1){
          start = atoi(*(av+i));
         }
         else if (i == 2) {
           stop = atoi(*(av+i));
         }
         else if (i == 3) {
           dimension = *(av+i);
         }
    }
      if (strcmp(dimension,"C137") == 0) {
        std::cout << "Morty C137 says:" << std::endl;
        C137::Morty(start, stop);
      }
      else if (strcmp(dimension,"Z286") == 0) {
        std::cout << "Morty Z286 says:" << std::endl;
        Z286::Morty(start, stop);
      }
      else {
        std::cout<< "ERROR: Unkown dimension!!" << std::endl;
      }
    }
      
  
  


  if (ac == 5) {
    for (int i=1; i<=4; i++) {
        if (i == 1){
          start = atoi(*(av+i));
         }
         else if (i == 2) {
           stop = atoi(*(av+i));
         }
         else if (i == 3) {
           step = atoi(*(av+i));
         }
         else if (i == 4) {
           dimension = *(av+i);
         }
    }
      if (strcmp(dimension,"C137") == 0) {
        std::cout << "Morty C137 says:" << std::endl;
        C137::Morty(start, stop, step);
      }
      else if (strcmp(dimension,"Z286") == 0) {
        std::cout << "Morty Z286 says:" << std::endl;
        Z286::Morty(start, stop, step);
      }
      else {
        std::cout<< "ERROR: Unkown dimension!!";
      }
  
  }
 	

	
		
	// Depending on the dimension of the arguments, call the appropriate Morty
	// function
	
	
	return 0;
}
