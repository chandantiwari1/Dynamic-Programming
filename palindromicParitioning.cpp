//palindromic partioning leetcode question


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


class Solution {
public:
    string s;
    bool is_palindrome(int i,int j){
        while(i<=j){
            if(s[i]!=s[j]) return false;
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        this->s = s;

    }
};

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution s;
    string str;
    cin>>str;
    vector<vector<string>> ans = s.partition(str);
    return 0;
}
