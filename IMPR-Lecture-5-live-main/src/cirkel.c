#include <math.h>
#include <stdio.h>

double circle_circumference(double radius)
{
    return 2 * M_PI * radius;
}

int main(void)
{
    double radius;
    printf("Input radius> ");
    scanf(" %lf", &radius);
    printf("\nGot radius %lf\n", radius);

    double circumference = circle_circumference(radius);
    printf("The circumference is %f\n", circumference);

    return 0;
}
