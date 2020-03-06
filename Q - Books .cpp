#define mx 100007
#include<bits/stdc++.h>
using namespace std;
long long int  sum[mx],num;
bool check(long long int valu,long long target)
{
    for(int i=0; i<=(num-valu);i++)
    {
        if((sum[i+valu]-sum[i])<=target)
            return true;
    }
    return false;
}
long long int binary_searc(long long int target,long long int n)
{
   long long int lo=0;
  long long int hig= n;
   long long int ans=0;
   bool chk;
    while(lo<=hig)
    {
     long long int mid=((lo +hig)/2);
        //cout<<lo<<"   "<<hig<<"   "<<mid<<"    "<<ans<<endl;
        chk=check(mid, target);
        if(chk==true)
        {
            ans=mid;
            lo=mid+1;
        }
        else{
                hig=mid-1;
        }
    }
    return ans;
}
int main()
{
    long long int test, arr[mx],time,res;
    scanf("%lld%lld",&num,&time);
    arr[0]=0;
    sum[0]=0;
    for(int i=1;i<=num;i++)
    {
        scanf("%lld",&arr[i]);
        sum[i]=sum[i-1]+arr[i];
    }
    res=binary_searc(time,num);
    printf("%lld\n",res);
    return 0;
}
