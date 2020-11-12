#include "myMath.h"
#define Exp 2.71828182846

double Exponent(int x){
    return Power(Exp,x);
}

double Power(double x, int y){
    int neg = 0;
    if(y < 0) {
        y = (y / (-1));
        neg = 1;
    }
    double p;
    int i;
    p=1.0;
    for (i=0 ; i<y ; ++i) {
            p=p*x;
    }
    if(neg == 1) {
        return 1/p; 
    }
    return p;        
}