#include <stdio.h>
#include <stdlib.h>
#include "BikeRace.h"

BOOL Exit = FALSE;

unsigned int showMenu(){
   unsigned int response;
   printf("%s\n", "1. Set Information");
   printf("%s\n", "2. Get Information");
   printf("%s\n", "3. Exit");
   scanf("%d", &response);
   return(response);
}

void setBikeRaceInfo(Cyclist *cyc){

	//Allocate memory for cyclist
	cyc = (Cyclist*) malloc(52*sizeof(char)+6*sizeof(int));

	// Prompt first and last name
	printf("Enter cyclist first name: ");
	fgets("%c", cyc->firstName, stdin);		

	printf("Enter cyclist last name: ");
	fgets("%c", cyc->lastName, stdin);

	// Prompt Start/End times
	printf("Enter Start time: ");
	
	printf("\tHours: ");
		fgets("%d", cyc->startTime.hours, stdin);
	
	printf("\tMinutes: ");
		fgets("%d", cyc->startTime.minutes, stdin);
	
	printf("\tSeconds: ");
		fgets("%d", cyc->startTime.seconds, stdin);

	
	printf("Enter End time: ");
	
	printf("\tHours: ");
		fgets("%d", cyc->endTime.hours, stdin);
	
	printf("\tMinutes: ");
		fgets("%d", cyc->endTime.minutes, stdin);
	
	printf("\tSeconds: ");
		fgets("%d", cyc->endTime.seconds, stdin);

}

void getBikeRaceInfo(Cyclist *cyc){

// TODO: Returns the information stored in the Cyclist structure currently
// passed into this function and returns the first and last names stored at
// that location, along with the total elapsed time, which is returned from
// the next function


}


static Time calcTotalRaceTime(Time startT, Time endT){

// TODO: Calculates the total hours, minutes, and seconds based on the
// difference in times stored in the two structures passed as parameters, and returns
// this value in a Time structure.

}
