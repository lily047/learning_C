#include <stdio.h> // library for standard input output operations
#include <string.h> //used for manipulating c-strings
#include <math.h> // used for mathematical operations
#include <stdlib.h> //used for memory management

int main() {//called a method 

    printf("Hello, World!\n"); 

    //Drawing a shape in c 
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    //initialising variables 
    char character; //stors one character
    char characterName[]="John"; //stores multiple characters 
    //remember '' for storing chars and "" for storing strings. 
    char character2Name[100]; // initialising strings 
    int characterAge = 35; 

    printf("There was a man named %s\n", characterName); 
    printf("%s was %d years old.\n", characterName, characterAge); 
    return 0; 
    
    /*
    char ch, s, sen;

    printf("Enter a character: \n");
    scanf("%c\n", &ch);
    printf("%c\n", ch);

    printf("Enter a string: \n");
    scanf("%c\n", &s);
    printf("%c\n", s);

    printf("Enter a sentence: \n");
    scanf("%c", &sen);
    printf("%c\n", sen);
    return 0;

    */
}
