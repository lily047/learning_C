#include <stdio.h> 
#include <stdlib.h> 

//defining a function with a parameter 
void sayHi(char name[]){
    printf("Hello %s\n", name);
}

double cube(double num) ; 

int maxNumbers(int num1, int num2){
    int result ; 
    if (num1 > num2 ){
        result = num1 ; 
    }
    else{
         result = num2 ; 
    }

    return result ; 
}

int maxThreeNumbers(int num1, int num2, int num3){

    int result ;
    
    // logical operators are repeated twice 
    if (num1 >= num2 && num1 >= num3){
        result = num1; 
    } else if (num2 >= num1 && num2 > num3 ){
        result = num2 ; 
    } else{
        result = num3 ; 
    }

    return result ; 

}

int main(){

    //mad libs game 

    char color[20]; 
    char pluralNoun[20]; 
    char celebrityFName[20]; 
    char celebrityLName[20]; 

    printf("Enter a color: "); 
    scanf("%s", color); 

    printf("Enter a plural noun: "); 
    scanf("%s", pluralNoun); 

    // if you enter a name with space in between, scanf only takes in the first word (i.e. until the first whitespace) and skips the second word 
    // one way to bypass this in c is to take tqo inputs continously %s%s 
    printf("Enter a celebrity: "); 
    scanf("%s%s", celebrityFName, celebrityLName); 

    printf("Roses are %s \n", color); 
    printf("%s are blue \n ", pluralNoun); 
    printf("I love %s %s \n ", celebrityFName, celebrityLName);

    //ARRAYS 
    int naturalNumbers[] = {1,2,3,5,4,8,9,5}; // initializing an array 
    naturalNumbers[0] = 200 ; // altering the elements in an array
    printf("%d\n", naturalNumbers[0]) ; // accessing elements in an array

    int naturalNumber2[20]; //another way of initialising arrays, where space is defined.
    
    //calling a function 
    sayHi("Meghana"); 

    printf("%lf\n", cube(2) ); 
    //even int main() is also a function 
    // if the functions are written below int main() then they won't be loaded properly and won't be executed. 
    //if you want to have it below, just write the name of the function on the top. so that it gets compiled before int main()

    printf("%d\n", maxNumbers(1, 100)); 

    printf("%d\n", maxThreeNumbers(12,45,18)); 

    //operators
    if (3>2 || 5> 10){
        printf("True\n"); 
    }
    
    //negation 
    if (!(3>2 || 5>10))
        printf("True\n"); 
    else
        printf("False\n"); 

    return 0; 
}

double cube(double num){
    double result = num * num * num ;
    return result ;
}