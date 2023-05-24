/**
 * @file main.c
 * @author Githubonline1396529
 * @version 1.0.0.0200
 * @date 2023-5-23
 * 
 * @brief 
 *
 * This program can output a picture of a cat, and supports -h/--help and -v/--version parameters,
 * which are used to print help information and version number. If there are no parameters,
 * a picture of a cat and a sentence will be output by default.
 *
 */

#include <stdio.h>
#include <string.h>

#include "prinAcat.h"
#include "printInfo.h"

/**
 * @fn Program entry function, used to parse command line arguments and perform corresponding operations.
 * @param Argc The number of command line arguments.
 * @param Argv The array of command line arguments. 
 *
 * @return The program execution result. Returns 0 to indicate normal exit.
 */ 
int main( int Argc, char *Argv[] ) {

    /* Declare variables */
    int i = 0;    // index to traversal the array

    /* Argument Processing */ 
    for( i=1 ; i<Argc ; i++ ) {
        if( !strcmp( Argv[i], "-h" ) || !strcmp( Argv[i], "--help" ) ) {
            printHelp();
        }
        else if( !strcmp( Argv[i], "-v" ) || !strcmp( Argv[i], "--version" ) ) {
            printVersion();
        }
        else {
            printArgError( Argv[i] );
            return 1;
        }
    }
    if( Argc == 1 ) {
        printCat();
        printf("Paradise is no longer paradise if there is no cat. \n");
    }
	return 0;
}