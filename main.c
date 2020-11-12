#include <stdio.h>
#include "myMath.h"

int main()
{
    //input
    double x1,x2,x3;

    //function 1
    printf("please enter number:\n");
    scanf("%lf",&x1);
    double ans1=sub(add(Exponent((int)x1),Power(x1,3)),2);
    printf("The value of f(x)=e^x+x^3-2 at the point %lf = %0.4lf\n",x1,ans1);
    
    //function 2
    printf("\nplease enter number:\n");
    scanf("%lf",&x2);
    double ans2=add(mul(x2,3),mul(Power(x2,2),2));
    printf("\nThe value of f(x)=3x+2x^2 at the point %lf = %0.4lf\n",x2,ans2);

    //function 3
    printf("\nplease enter number:\n");
    scanf("%lf",&x3);
    double ans3=sub(div(mul(Power(x3,3),4),5),mul(x3,2));
    printf("\nThe value of f(x)=(4x^3)/5-2x at the point %lf = %0.4lf\n",x3,ans3);
    
    return 0;
}

