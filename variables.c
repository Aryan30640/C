#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 24;
    float profit = 2.6203177344; //floating point number(decimals)
    char grade = 'C'; //single character(letter)
    char name[] = "Satyam"; //array of characters
    double point = 3.142857142857143; //same as floating numbers but with more precision(15-16 decimal points)
    //--
    printf("I am %d years old\n", age);
    printf("Hello %s\n", name); //%s means string
    printf("Your average garde is %c\n", grade); //%c means single letter/character
    printf("Your profit is %0.2f\n", profit); //%f means floating numbers or decimal numbers
    printf("The value of pi is %0.15lf\n", point); //%lf means double
    //--
    bool a = false; //true --> 1, false --> 0;
    signed char b = 100; //-128 to +127, signed char === char
    unsigned char c = 250; //0 to +255
    printf("The value of a is %d\n", a);
    printf("The value of b is %c\n", b); // character --> integer
    printf("The value of c is %d\n", c); //unsigned character --> integer
    return 0;
}





