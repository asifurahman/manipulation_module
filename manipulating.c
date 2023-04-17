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
}