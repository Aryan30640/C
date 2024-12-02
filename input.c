#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;
    //--
    printf("Enter your name:\n");
    fgets(name, 25, stdin);
    //--
    printf("Enter your age:\n");
    scanf("%d", &age);
    //--
    printf("Hello, %s", name);
    printf("You are %d years old\n", age);
    return 0;
}