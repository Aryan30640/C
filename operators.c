#include <stdio.h>

int main(){
    int x = 5;
    int y = 2;
    float z = x/(float)y;
    printf("%.2f\n", z);
    //--
    int a = 5;
    int b = 2;
    int c = a % b;
    printf("%d\n", c);
    //--
    int p = 1;
    p++;
    printf("%d", p);
    return 0;
}