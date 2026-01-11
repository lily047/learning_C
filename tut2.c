#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int age = 40; //whole numbers 
    double d1 = 3.75; //decimal number representation 1  
    float f1 = 3.85; //decimal number representation 2 
    char singleChar = 'A'; //character representation, uses '' 
    char string[100]; //stores string  string is actually an array of chars 
    char string2[] = "Age"; //cannot be changed, only uses "" 

    printf("printf is actually a function\n");
    printf("My %s is %d\n", string2, age);
    printf("My %s is %d\n", "Age", age); //we can even specify certain text to be entered here
    printf("%f printing a float\n", f1);
    printf("%lf prints a double\n", d1); 
    printf("%.2f is used to control the decimal places\n", f1); 
    //major difference between double and float: double stores in 8 bytes and float uses 4 bytes. 
    //double has more precision and float is lousy. 


    //working with numbers 
    printf("working with numbers.\n"); 
    printf("\n");

    printf("Adding two numbers and trying to print the answer with different data specifiers: \n");
    printf("%f\n", 5 + 4);
    printf("%f\n", 5 + 4.5); 
    printf("%d\n", 5 + 4.5); // the mathematical result is 9.5 which is a double but because i used %d instead of %lf or %f
    // A garbage value is returned to me by the compiler. 
    printf("\n");

    printf("performing division and trying to print the answer with different data specifiers.\n");
    printf("%f\n", 5 / 4.5); //when deadling with decimal numbers we get a double as the result 
    printf("%d", 5/4); // here the operation is performed between teo intgers and the result is an integer so %d is used. 
    //using math functions 
    printf("\n"); 

    printf("computing the power of 2^3 and trying to print using different specifiers.\n");
    printf("%d\n",pow(2,3)); // pow(2, 3) gives 2^3 which is an float but we gave the data specifier to be %d which is a mismatch. hence throws an error. 
    printf("%f\n", pow(2,3)); // correct code for pow(2,3) 
    printf("\n"); 

    printf("computing the squareroot of a number: \n"); 
    printf("%f\n", sqrt(36));
    printf("\n"); 

    printf("rounding up a 36.75: \n"); 
    printf("%f\n", ceil(36.75)); 
    printf("\n"); 
    printf("rounding down a 36.75: \n"); 
    printf("%f\n", floor(36.75)); 
    printf("\n"); //is this ignored in the debug console??
    // to know about math functions, google cmath functions. 

    printf("Constants:\n"); 
    printf("Working of normal variables:\n"); 
    int num =5; 
    printf("%d\n", num); 
    num = 8; 
    printf("%d\n", num);
    printf("meow\n"); 
    printf("In order to make a variable unmodifiable add const before the data type of the variable\n. example:\n"); 
    const int constNum = 10; 
    printf("%d\n", constNum); 
    printf("trying to change the variable:\n"); 
    /* constNum = 20; // throws an error as constants cannot be modified.  
    printf("%d\n",num ); 
    printf("See it didn't change!\n");  */ 
    printf("Hello"); // this is also constant, as it cannot be changed

    return 0; 
}