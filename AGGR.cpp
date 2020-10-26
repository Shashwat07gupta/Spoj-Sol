#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,g;
    cin>>t;
    while(t--){
        cin>>n>>g;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int lo=0,hi=a[n-1];
        int ans=-1;
        while(lo<hi){
            int k=1;
            int mid=lo+(hi-lo)/2;
	    //cout<<mid<<"#";
            int l=a[0];
            for(int i=1;i<n;i++){
                if(l+mid<=a[i]){
                    k++;
                    l=a[i];
                }
            }
            if(k<g){
                hi=mid;
            }
            else{
                lo=mid+1;
                ans=mid;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
