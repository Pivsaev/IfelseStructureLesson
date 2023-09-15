#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    float D, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    D = pow(b, 2)-4*a*c;
    x1 = ((-1*b) + sqrt(D))/(2*a);
    x2 = ((-1*b) - sqrt(D))/(2*a);
printf("%f %f", x1, x2);
}