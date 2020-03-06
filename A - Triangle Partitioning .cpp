#include<bits/stdc++.h>
using namespace std;
double num1, num2, num3, num4, res, sum, AB, AC, BC, rtio,AE,DE,ABC,ADE,DEBC;
double binary(){
	double low=0.0,mid,rtio2,ans;
	double high=AB;
	int cnt = 200;
	//for step in range(64):
	while(cnt--)
    {
		mid=(low+high)/2.0;
		ans=mid;
		AE=((mid*AC)/AB);
        DE=((mid*BC)/AB);
        sum=(mid+AE+DE)/2.0;
        ADE=sqrt(sum*(sum-mid)*(sum-AE)*(sum-DE));
		 DEBC=(ABC-ADE);
	  rtio2=(ADE/DEBC);
	  if(rtio2<=rtio)
      {
          //ans=mid;
          low=mid;
      }
      else
      {
          high=mid;
}
    }
    return ans;
}
int main()
{
    int cas=0,test;
    double ans;
   scanf("%d",&test);
   for(int i=0; i<test; i++)
   {
       scanf("%lf%lf%lf%lf",&AB,&AC, &BC,&rtio);
       res=(AB+AC+BC)/2.0;
      ABC=sqrt(res*(res-AB)*(res-AC)*(res-BC));
      ans=binary();
      printf("Case %d: %.10lf\n",++cas,ans);
   }
}
