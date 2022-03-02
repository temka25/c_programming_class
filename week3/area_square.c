#include <stdio.h>
int main(void)
{
    printf("What is the lenght? ");
    double lenght;
    scanf("%lf", &lenght);
    double area = lenght * lenght;
    printf("The area is %lf!\n",area);
    return 0;
}
