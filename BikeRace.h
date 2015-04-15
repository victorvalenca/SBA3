typedef struct Time{
   unsigned int hours;
   unsigned int minutes;
   unsigned int seconds;
} Time;

typedef struct Cyclist{
   char firstName[20];
   char lastName[30];
   Time startTime;
   Time endTime;
} Cyclist;

typedef enum BOOL {FALSE, TRUE} BOOL;
typedef enum menu {SETINFO, GETINFO, EXIT} menu;

extern unsigned int showMenu();
extern void setBikeRaceInfo(Cyclist *);
extern void getBikeRaceInfo(Cyclist *);

