#define mx 1000007
#include<bits/stdc++.h>
using namespace std;
 long long int arr[mx],num;
    int binary_s(int target)
    {
        int lo=1;
        int hi=num;
        int ans=0;
        while(lo<=hi)
        {
            int mid=  (hi+lo)/2;
            if(arr[mid]==target)
            {
                ans=mid;
                lo=mid+1;
            }
            else if(arr[mid]<target)
            {
                ans=mid;
                lo=mid+1;
            }
            else{
               // ans=mid;
                hi=mid-1;
            }
        //cout<<lo<<"    "<<hi<<"   "<<mid<<"     "<<ans<<endl;
        }
        return ans;
    }
int main()
{
    long long int test, cas=0, que,res,sum1,sum2,low,upp;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&num,&que);
        for(int i=1;i<=num;i++)
        {
            scanf("%lld",&arr[i]);
        }
        printf("Case %lld:\n",++cas);
        for(int j=0; j<que; j++)
        {
            scanf("%lld%lld",&low,&upp);
            sum1=binary_s(low-1);
            sum2=binary_s(upp);
            res=sum2-sum1;
            printf("%lld\n",res);
        }
    }
    return 0;
}
