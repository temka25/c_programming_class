#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("What is the radius? ");
    double radius;
    scanf("%lf", &radius);
    double area = M_PI * radius * radius;
    printf("The area is %lf!\n", area);
    return 0;
}
