#include "myMath.h"
#define Exp 2.71828182846

double Exponent(int x){
    return Power(Exp,x);    
}

double Power(double x, int y){
    double p;
    int i;
    p=1.0;
    for (i=0 ; i<y ; ++i)
            p=p*x;
    return p;        
}