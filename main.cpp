#include<stdio.h>
main()
{
    int a = 4, b = 5;
    float x=4,y=5;

    printf("Sum of %d and %d is %d\n",a,b);

    printf("Product of %d and %d is %d\n",a,b);

    printf("Subtraction of %d and %d is %d\n",a,b,a-b);

    printf("Percentage of %d and %d is %d\n",a,b,a%b);

    printf("Division of %f and %f is %f\n",x,y,(float)x/(float)y);

    return 0;
}
