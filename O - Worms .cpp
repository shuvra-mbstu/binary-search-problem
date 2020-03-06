#define mx 1000007
#include<bits/stdc++.h>
using namespace std;
int test, arr[mx], qury, num, sum[mx];
int binary_searc(int target)
{
    int lo=1;
    int hig= test;
    int ans=-1;
    while(lo<=hig)
    {
        int mid=(lo +((hig-lo)/2));
       // cout<<lo<<"  "<<mid<<"  "<<hig<<"   "<<sum[mid]<<endl;
        if(sum[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(sum[mid]>target)
        {
            ans=mid;
            hig=mid-1;
        }
        else{
                lo=mid+1;
        }
    }
        return ans;
}
int main()
{
    int res;
    scanf("%d",&test);
    for(int i=1;i<=test; i++)
    {
        scanf("%d",&arr[i]);
        if(i==1){
        sum[1]=arr[1];
        }
        else
        {
            sum[i]=sum[i-1]+arr[i];
        }
      //  cout<<sum[i]<<endl;
    }
    scanf("%d",&qury);
    for(int j=0; j<qury; j++)
    {
        scanf("%d",&num);
        res=binary_searc(num);
        printf("%d\n",res);
    }
}
