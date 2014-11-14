#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int argc the number of arguments at command-line
//char* argv[] eac cell one command-line parameter

//program will take in command-line arguments as the means
//to recieve the name of the text file the programs must process.

int main (int argc, char *argv[])
{
	FILE *file;
	char str[40]; //temporary string file to store string file in
	char *token;
	const char comma[] = (",");
	char test[] = ("Nic,2,4,6,8");
	FILE *p = test;

	printf("Number of arguments at the command line = %d\n", argc);
	

	if (argc == 2)
	{
		printf("Calculating Averages from Experimental Data in %s\n", argv[1]);

		file = fopen(argv[1], "r"); 

		//fgets(str,40,file); //reads up to 399 characters into the array str
		
		fgets(str,40,p);
		
		token = strtok(str, comma);

		printf("Name is: %s\n", token);
		


		//argv[0] is a.out argv[1] is file name specified ex. file.txt





	}

	else
	{
		printf("Error. Please include the name of a text file at the command-line.\n");
	}
}