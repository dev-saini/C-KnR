/* ------------ MACROS ------------- */

#define LEXICO_SORT	'l'
#define REVERSE_SORT	'r'
#define NUMERIC_SORT	'n'
#define REVERSE_NUMERIC_SORT	1

/*---------------------------------- */


/* --------------------------- FUNCTIONS HEADERS ------------------------------ */

int checkTypeOfSorting( int , const char * [] );

int type( int , int );

void sortHandler( int , char * [] , int );

void quickSort( char * [] , int , int , int );

void setTypeOfSorting( int , void ( ** )( char * [] , int * , int , int ) );

void lexicographicSort( char * [] , int * , int , int );

void reverseSort( char * [] , int * , int , int );

void numericSort( char * [] , int * , int , int );

void reverseNumericSort( char * [] , int * , int , int );

int numberCompare( char * , char * );

void swap( char * [] , int , int );

/* ---------------------------------------------------------------------------- */