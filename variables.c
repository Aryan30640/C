#include <stdio.h>

int main(){

    int x; //declaration
    x = 6; //initialization
    int y = 12; //declaration + initialization
    int age = 24;
    float profit = 2.6203177344; //floating point number(decimals)
    char grade = 'C'; //single character(letter)
    char name[] = "Satyam"; //array of characters
    double point = 3.142857142857143;
    //--
    printf("I am %d years old\n", age);
    printf("Hello %s\n", name); //%s means string
    printf("Your average garde is %c\n", grade); //%c means single letter/character
    printf("Your profit is %0.2f\n", profit); //%f means floating numbers or decimal numbers
    printf("The value of pi is %0.15lf\n", point);
    return 0;
}





