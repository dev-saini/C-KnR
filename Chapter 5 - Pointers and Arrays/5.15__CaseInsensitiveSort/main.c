#include "stdio.h"
#include "header_files/readlines.h"
#include "header_files/sorthandler.h"

/*

=>	Program to Sort Strings read from a file, providing all types of sortings.

	~ Lexicographical Sorting
	~ Reverse Sorting
	~ Numeric Sorting

	A terminal handle controls which type of Sorting is prompted,

		-r : Enables Reverse Sorting
		-n : Enables Numeric Sorting

		No handle by default prompts Lexicographical Sorting.

	Concept :	At run-time, a pointer to function decides which particular
			function to be called, based on the handle provided by the user.

	Improvisation: Sorts strings irrespective of the case in which is the string
			is read, either Upper Case or Lower Case.


Happy Coding:) !
*/

int main(int argc, char const * argv[]) {

	char * lines[ MAXLINES ];

	int no_of_lines = 0, last_n_lines, memory_status, type;

	memory_status = populateBufferFromFile( lines , &no_of_lines );

	checkMemoryStatus( memory_status );

	checkTypeOfSorting( argc , argv , &type );

	sortHandler( type , lines , no_of_lines );

	printSortedLines( lines , no_of_lines , type );

	return 0;

}