/*** Ahmed Ghoneim..
 * This program is a modified version or program 2 where it takes the
 * input as a command line through an array***/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int in_order(char *word);

//command line argument through main function
int main(int argc, char *argv[])
{
// input validation
if(argc == 1 || argc > 2) {
	printf("Incorrect number of arguments. Usage ./a.out word");
	return 0;
}
else {
// setting word to input
char *word = argv[1];

//calling function in_order
in_order(word);

//chechking function value and printing
if(in_order(word) == 0) {
	printf("In order\n");
}
else {
	printf("Not in order\n");

}     
}   
return 0;

}

//in_order function to check the input
int in_order(char *word) {
	int i;
	for(i=1;word[i];i++) {
		if(isalpha(word[i])){
		word[i] = tolower(word[i]);
	}
	}
	for(i=1;word[i]!='\0';i++){
		if(word[i]<word[i-1]) {
			return 1;
		}
	}
	return 0;
}

