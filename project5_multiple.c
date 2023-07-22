/*** Ahmed Ghoneim...
 * This program takes the input of the user and checks whether if it is a multiple of 11 or not
 * ***/

#include <stdio.h>

// size of the input
#define N 1000

//defining function read_line
int read_line(char *str, int n);

int main()
{

char num[N+1];
int num2[N];
int c;

int even =0;
int odd =0;

printf("Enter the value of X: ");
// calling fucntion read_line
c  = read_line(num, N);

int i;
// multiple for loops for swithcing the input from char into int and storing it into a new array
for(i=0;i<c;i++){
	num2[i] = num[i] - '0';
}

for(i=0;i<c;i=i+2){
	even += num2[i];
}

for(i=1;i<c;i=i+2) {
	odd += num2[i];
}

for(i=0;i<c;i++) {
	printf("%d",num2[i]);
}

//if statement to find whether the input is multiple of 11 or not
if(even-odd == 0 || (even-odd)%11 ==0)
	printf(" is a multiple of 11");
else
	printf(" is not a multiple of 11");
return 0;

}

int read_line(char *str, int n)
{
          int ch; int i = 0;
          while ((ch = getchar()) != '\n')
          {  if (i < n)
             { *str++= ch;
      i++;
             }
	}
	*str = '\0';
	return i;
}		
