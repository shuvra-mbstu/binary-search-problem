#include<bits/stdc++.h>
using namespace std;
int n,arr[1000];
int binary_searc(int target)
{
    int lo=1;
    int hig= n;
    int ans=-1;
    while(lo<=hig)
    {
        int mid=(lo +hig)/2;
            cout<<lo<<" "<<hig<<" "<<arr[mid]<<endl;
        if(arr[mid]==target)
        {
            ans=mid;
            return ans;
        }
        else if(arr[mid]<target)
        {
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
        int target, value;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&target);
        cout<<target<<endl;
        value=binary_searc(target);
        cout<<value<<endl;
}
/*
4
1 2 3 4
2
*/
