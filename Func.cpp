#include "Func.h"
void sokr(int& Sch, int& Z)
{
    int x = abs(Sch), y = abs(Z);
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    Sch /= x;
    Z /= x;
}
void fix(int& C, int& SCh, int& Z)
{
   // while(abs(SCh)>Z)
    if (abs(SCh) > Z)
    {
        int k = SCh / Z;
        C += k;
        SCh %= Z;
        if (Z == 1)
            SCh = 1;
    }
}
void fixz(int& C, int& SCh, int& Z)
{
    if (abs(SCh) <= Z) {
        if (SCh * Z > 0)
        {
            SCh = abs(SCh);
            Z = abs(Z);
            SCh *= -1;
        }
        else if (SCh * Z < 0)
        {
            SCh = abs(SCh);
            Z = abs(Z);
        }
        else if (SCh * Z == 0)
        {

        }
    }
    if (abs(SCh) > Z) 
    {
       // fix(C, SCh, Z);
        C *= -1;
        if (SCh == 1 && Z == 1)
            SCh = 0;
       if (C>0) C += 1;
    }
    //if ((C == 0 &&  SCh * Z < 0))
    //{
    //    SCh = abs(SCh);
    //    Z = abs(Z);
    //    //SCh *= -1;
    //}
    //else if ((C != 0 && C * SCh * Z < 0))
    //{
    //   // C = abs(C);
    //    SCh = abs(SCh);
    //    Z = abs(Z);
    //    C *= -1;
    //}
    //else if (C==0 && SCh * Z > 0)
    //{
    //    C = abs(C);
    //    SCh = abs(SCh);
    //    Z = abs(Z);
    //    SCh *= -1;
    //}
    //else if ((C != 0 && C * SCh * Z > 0))
    //{
    //    C = abs(C);
    //    SCh = abs(SCh);
    //    Z = abs(Z);
    //    C *= -1;
    //}

}