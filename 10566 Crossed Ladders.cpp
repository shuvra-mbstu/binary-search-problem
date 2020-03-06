#include<bits/stdc++.h>
using namespace std;
double num1, num2, num3, num4, res, sum, BD, EF, BC,AE,DE,AB,ADE,DEBC,AC,rtio,AD;
   // double ans;

double binary()
{
    double low=0.0,mid,rtio2,ans;
    double high=AB;
    int cnt = 200;
    while(cnt--)
    {
        mid=(low+high)/2.0;
        ans=mid;
        AC=sqrt((BC*BC)-(mid*mid));
        BD=sqrt((AD*AD)-(mid*mid));
        rtio2=((AC*BD)/(AC+BD));
        if(rtio2<=rtio)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    return ans;
}
int main()
{
    int cas=0,test;
   // scanf("%d",&test);
   while( scanf("%lf%lf%lf",&AD,&BC, &EF)!=EOF)
    {

        rtio=(EF);
        AB=min(AD,BC);
       double answr=binary();
        printf("%.3lf\n",answr);
    }
    return 0;
}

