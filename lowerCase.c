/* To convert upper case letter to lower case letter*/
#include<stdio.h>
#include<ctype.h> // header file to include character function
void main()
{
char x;
printf("Enter a base:");
 x = getchar();
 putchar(x); // Displays a character on the screen
 putchar('\n'); // New line
 putchar(tolower(x)); // Displays a lower case letter
}

