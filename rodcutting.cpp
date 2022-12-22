#include<bits/stdc++.h>

using namespace std;
int memo[1000000];
int rodCutting(int n,int prices[]){
    //basecase if the array reaches zero i will return zero
    if(memo[n]!= -1) return memo[n];
    if(n==0) return 0;
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,prices[i]+rodCutting(n-i,prices));
    };
    return memo[n]=ans;
}

int main()  
{
    int n;
    cin>>n;
    int prices[n+1];
    for(int i=1;i<=n;i++){
        cin>>prices[i];
    }
    memset(memo,-1,sizeof(memo));
    cout<<rodCutting(n,prices);
    return 0;
}