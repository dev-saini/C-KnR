/* ------------------------------ MACROS ------------------------------- */

#define MAXLENGTH	100
#define TABSTOP		6
#define TAB  		'\t'
#define READ 		"r"
#define SPACE		' '
#define END_OF_STRING	'\0'

#define TABSTOP_REACHED( count , tabstop )	( count % tabstop ) == 0

/* --------------------------------------------------------------------- */


/* ------------------ FUNCTIONS HEADERS ----------------------- */

// Input | Output
void fetchTabSpecifications( char const *[] , int * , int * );

void readInputFromFile( char * );

void displayOutputString( char * );


// Converting Spaces to Tabs - Entab
void entab( char * , char * , int , int );

void performEntab( char , char * , int , int * );

void placeTabIfTabstopReached( char * , int , int ** , int * );

void placeSpacesBeforeTabstop( char * , int * );


// Utility
char getNextChar( char * );

void sendCharToOutputString( char * , char );

/* ------------------------------------------------------------- */