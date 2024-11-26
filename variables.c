#include <stdio.h>

int main(){

    int x; //declaration
    x = 6; //initialization
    int y = 12; //declaration + initialization
    int age = 24;
    float gpa = 2.05; //floating point number(decimals)
    char grade = 'C'; //single character
    char name[] = "Satyam"; //array of characters
    //--
    printf("I am %d years old\n", age);
    printf("Hello %s\n", name);
    printf("Your average garde is %c\n", grade);
    printf("Your GPA is %f\n", gpa);

    return 0;
}