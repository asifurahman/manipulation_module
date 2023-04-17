#ifndef _MANIPULATING_H_	  //checks if the preprocessor directive is available
#define _MANIPULATING_H_       // defining the header file
#include <stdio.h>	   	 // standard input/output functions included
#include <string.h>	        //include string manipulation functions
void manipulating(void);    // function prototype for manipulating
#endif

// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS // Ignore secure warnings for compatibility
#define BUFFER_SIZE 80 // Set buffer size to 80 characters
#include "manipulating.h" // Include manipulating header file

// V1
void manipulating(void) // Define manipulating function
{
	printf("*** Start of concatenating Strings Demo ***\n"); // Print start message
	char    string1[BUFFER_SIZE]; // Create two character arrays (strings) to store input strings
	char    string2[BUFFER_SIZE];
	do { // Repeat until user types 'q' to quit
		printf("Type the 1st string (q - to quit):\n"); // Prompt user to type the 1st string
		fgets(string1, BUFFER_SIZE, stdin); // Read user input and store it in 'string1'
		string1[strlen(string1) - 1] = '\0'; // Replace newline character with a null terminator
		if ((strcmp(string1, "q") != 0)) // Continue if input is not 'q'
		{
			printf("Type the 2nd string:\n"); // Prompt user to type the 2nd string
			fgets(string2, BUFFER_SIZE, stdin); // Read user input and store it in 'string2'
			string2[strlen(string2) - 1] = '\0'; // Replace newline character with a null terminator
			strcat(string1, string2); // Concatenate 'string1' and 'string2'
			printf("concatenated string is \'%s\'\n", string1); // Print the concatenated string
		}
	} while (strcmp(string1, "q") != 0);
	printf("*** End of Concatenating Strings Demo ***\n\n"); // Print end message
	/* Version 2 */

	//the program begins by printing out the following message
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE];                     //declaration of two character string arrays that can hold up to 79 characters
	char compare2[BUFFER_SIZE];
	int result;                                       // declaration of an integer variable
	do         // beginning of a do while loop
	{
		printf("Type the 1st string to compare (q - to quit):\n");   //prompts the user to enter the first string to compare
		fgets(compare1, BUFFER_SIZE, stdin);       // read the first string from the users input
		compare1[strlen(compare1) - 1] = '\0';     // Cuts off the last newline character from the beginning of the first string.
		if (strcmp(compare1, "q") != 0)           //gives the user the option to quit
		{
			printf("Type the 2nd string to compare:\n");  //prompts the user to enter the second string to compare
			fgets(compare2, BUFFER_SIZE, stdin);          // read the first string from the users input
			compare2[strlen(compare2) - 1] = '\0';        // Cuts off the last newline character from the beginning of the first string.
			result = strcmp(compare1, compare2);          //strcmp (compares) variable compare1 & compare2 and stores them in results.
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); //the program will check if the first string is less than the second
			else if (result == 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); // ============================================= equal to the second string.
			else
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); //============================================== greater than the second string.
		}
	} while (strcmp(compare1, "q") != 0);    //indication message of the program completion

	/* Version 3 */
}