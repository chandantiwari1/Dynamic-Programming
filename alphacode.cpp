#include<iostream>  
#include<fstream>
#include<vector>

using namespace std;
string s;
vector<int>  memo;
int dp(int index){
    // basecase if()
    if(index==s.length()){
        return 1;
    }
    // then i need to check  if the first character is not the zero or anything else
    int ans=0;
    if(memo[index]!= -1) return memo[index];
    if(s[index]>='1' && s[index]<='9'){
        ans+= dp(index+1);
    }
    if(index+1<s.size() && s[index]=='1' && s[index+1]>='0' && s[index+1]<='9'){
        ans+= dp(index+2);
    }
    if(index+1<s.size() && s[index]=='2' && s[index+1]>='0' && s[index+1]<='6'){
        ans+= dp(index+2);
    }
    return memo[index]=ans;
}

int main()  
{
    int ans=0;
    while(1){
        cin>>s;
        if(s=="0") break;
        memo.clear();
        memo.resize(s.size()+1,-1);
        cout<<dp(0)<<endl;
    }
    return 0;
}