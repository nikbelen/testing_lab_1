#include <stdio.h>
#include <math.h>

#include "myfunc.h"

solve root(double A,double B,double C)
{
    double D;
    solve solveres;
    D=B*B-4*A*C;
    if((A==0)&&(B==0)&&(C==0))
    {
        solveres.number_s=-1;
        return solveres;
    }
    if((A==0)&&(B==0)&&(C!=0))
    {
        solveres.number_s=0;
        return solveres;
    }
    if((A==0)&&(B!=0))
    {
        solveres.number_s=1;
        solveres.s1=-C/B;
        return solveres;
    }
    if(D<0)
    {
        solveres.number_s=0;
        return solveres;
    }
    if(D==0)
    {
        solveres.number_s=1;
        solveres.s1=(-B/2)/A;
        return solveres;
    }
    if(D>0)
    {
        solveres.number_s=2;
        solveres.s1=(-B+sqrt(D))/(2*A);
        solveres.s2=(-B-sqrt(D))/(2*A);
        return solveres;
    }
    solveres.number_s=0;
    return solveres;
}
