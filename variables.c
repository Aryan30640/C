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
    printf("Your average grade is %c\n", grade); //%c means single letter/character
    printf("Your profit is %0.2f\n", profit); //%f means floating numbers or decimal numbers
    printf("The value of pi is %0.15lf\n", point); //%lf means double
    //--
    bool a = false; //true --> 1, false --> 0;
    signed char b = 100; //-128 to +127, signed char === char
    unsigned char c = 20; //0 to +255
    short int d = 32000; //-32,768 to +32767, instead of 'short int' only 'short' can be written
    unsigned short e = 65000; //0 to +65,355
    int f = 2000000000; //-2 Billion to +2 Billion
    unsigned int g = 4000000000; //0 to +4 Billion
    long long int h = 9000000000000000000; //-9 quintillion to +9 quintillion
    unsigned long long int i = 1800000000000000000; //0 to +18 quintillion

    printf("The value of a is %d\n", a);
    printf("The value of b is %c\n", b); // character --> integer, %c means character, %d can also be used here
    printf("The value of c is %d\n", c); //unsigned character --> integer, %d is suggested here but %c can be used too
    printf("the value of d is %d\n", d); //%d is used for integers
    printf("the value of e is %d\n", e); //%d is used for integers
    printf("the value of f is %d\n", f); //%d is used for int(s)
    printf("the value of g is %u\n", g); //%u is used for unsigned int(s)
    printf("the value of h is %lld\n", h); //%lld is used for long long int(s)
    printf("the value of i is %llu\n", i); //%llu is used for unsigned long long int(s)

    return 0;
}





