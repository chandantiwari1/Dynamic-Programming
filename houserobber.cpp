#include <bits/stdc++.h>
#include <vector>

using namespace std;

//let me memo
int house(vector<int>&nums,int i){
    if(i>=nums.size()){
        return 0;
    }
    int ans=0;
    for(i;i<nums.size();i++){
        ans=max((nums[i]+house(nums,i+2)),ans);
    }
    cout<<"thisruns"<<"\n";
    return ans;
}

int rob(vector<int>& nums) {
    int size=nums.size();
    int ans = house(nums,0);
    return ans;
}




int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<rob(nums);
    return 0;
}