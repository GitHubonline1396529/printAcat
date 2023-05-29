/**
 * @file printInfo.c
 * @author Githubonline1396529
 * @version 1.1.0.0200
 * @date 2023-5-23
 * 
 * @brief 
 *
 * This file includes three functions to print info of the programme,
 * help info, version info and error info.
 *
 */

#include <stdio.h>

/**
 * @brief Print the help information for the program.
 *
 * This function prints out the usage and options of the program to the console.
 */
void printHelp( void ) {
    printf("Usage: printAcat [options] \n\n");
    printf("Options: \n");
    printf("    -d, --double     Display two cats.\n");
    printf("    -h, --help       Display help information.\n");
    printf("    -v, --version    Display the version information.\n");
}

/**
 * @brief Print the version information for the program.
 *
 * This function prints out the version number of the program to the console.
 */
void printVersion( void ) {
    printf("printAcat version 1.1.0.0200\n");
}

/**
 * @brief Print an error message for unknown command line arguments.
 *
 * This function prints out an error message indicating that an unknown command line argument was passed to the program.
 *
 * @param Arg The unknown argument that was passed to the program.
 */
void printArgError( char Arg[] ) {
    printf("Unknown Argument: %s \n", Arg);
    printf("run 'printAcat --help' for help.\n");
}