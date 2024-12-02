#include <stdio.h>
#include <math.h>

int main(){
    float a = sqrt(729); //square root
    float b = pow(2, 10); //(base, power), here it is 2 to the power 10
    int c = round(3.14); //round off
    int d = ceil(3.14); //round off to higher value
    printf("The square root of 729 is %.2f\n", a);
    printf("The valuse of 2 to the power 10 is %.2f\n", b);
    printf("If we round of the value of PI, it would be %d\n", c);
    printf("The we round off the value of PI for higher value, it would be %d", d);
    return 0;
}