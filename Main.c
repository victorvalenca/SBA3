#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "BikeRace.h"

Cyclist arCyclists[1000];

//TODO: Enter comments for this program and for each of the four functions in BikeRace.c

int main(void){

   unsigned int bibNum;
   menu choice, Exit = FALSE;

   do{

      choice = (menu) showMenu();
      switch(choice){

         case SETINFO:
	    puts("Enter bib number");
	    scanf("%d", &bibNum);
            setBikeRaceInfo(); //TODO: Pass pointer to bibNum'd Cyclist as parameter to this function
            break;

         case GETINFO:
	    puts("Enter bib number");
	    scanf("%d", &bibNum);
            getBikeRaceInfo(); //TODO: Pass pointer to bibNum'd Cyclist as parameter to this function
            break;

         case EXIT:
            Exit = TRUE;
      }

   } while (!Exit);
}

//TODO: Test your code

//TODO: Remove all of the TODOs

