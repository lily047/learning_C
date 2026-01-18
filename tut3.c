#include <stdio.h> 
#include <stdlib.h>

int main(){

    /*Python is an interpreted language - when you click "Run" in VS Code, it directly executes your .py file. One step, done.
    Why C needs extra setup:
    C is a compiled language, which means:

    First, your .c code needs to be compiled (translated) into an .exe file that your computer can actually run
    Then, that .exe file gets executed

    So you need two steps instead of one:

    tasks.json tells VS Code how to compile your C code (using gcc)
    launch.json tells VS Code how to run the compiled program
    
    instead of all that you can use the terminal: 
    gcc tut3.c -o tut3 //compiles the code 
    .\tut3 //executes the code 
    //powershell needs .\ before the file name to execute. */

    
    printf("Enter your age: \n"); 
    int age; 
    scanf(" %d", &age); //&age is a pointer
    printf("age given is: %d\n", age); 

    printf("Enter your gpa: \n"); 
    double gpa; 
    scanf(" %lf", &gpa); //%lf is long float used for double 
    printf("Given gpa is: %f\n", gpa); //for printing a double we use %f

    printf("Enter your grade: \n"); 
    char grade; 
    scanf(" %c", &grade); //The space tells scanf to skip any whitespace (including newlines) before reading the character.
    printf("The given grade is: %c\n", grade); 

    printf("Enter your name: \n"); 
    char name[20]; //array of chars, here the size of name is 20 chars 
    scanf("%s", name); //& is not required
    //whenever scanf see a blank space it stops taking input 
    printf("Your name is: %s\n", name); 

    printf("Enter your name again: \n"); 
    getchar(); //consumes the leftover \n from prev input
    fgets(name, 20, stdin); //synatx of fgets(variable, size, file_of_inpute) 
    //includes newline chars as input too 
    printf("Your name is: %s welcome\n", name); 
    //here newline char is also printed so welcome is in an other line 
    

    //basic calculator 
    double num1, num2; 
    printf("Enter the first number: "); 
    scanf("%lf", &num1); 

    printf("Enter the second number: "); 
    scanf("%lf", &num2); 

    printf("Sum of the above numbers is: %f", num1+num2);
    return 0; 
}
