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

// TODO: Prompts the user for first and last name
// along with the start and end times.  For this you may wish to
// construct a static function that takes in an empty Time structure and then 
// prompts the user for hours, minutes, and seconds and enters these values into
// the Time structure, and then returns the loaded structure back to this
// function, setBikeRaceInfo().  The choice is yours.

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
