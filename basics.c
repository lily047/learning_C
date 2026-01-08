/* basic program to print Hello world */
#include <stdio.h> // library for standard input output operations
#include <string.h> //used for manipulating c-strings
#include <math.h> // used for mathematical operations
#include <stdlib.h> //used for memory management

int main() {
    printf("Hello world!\n");
    return 0;
}

/* Hackkerank easy Basic C question */
/*This challenge requires you to print Hello, World! on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.*/
#include <stdio.h> // library for standard input output operations
#include <string.h> //used for manipulating c-strings
#include <math.h> // used for mathematical operations
#include <stdlib.h> //used for memory management

int main() {

    char s[100]; // initilizes an array called s
    scanf("%[^\n]%*c", &s); // %[^\n] reads characters until it hits a new line
    // [ .. ] "read characters matching this pattern
    // ^ negation
    // ^\n not \n
    // %*c - %c means read a character, * means don't store it anywhere

    printf("Hello world!\n");
    return 0;
}
