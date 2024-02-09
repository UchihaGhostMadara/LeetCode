// here i have used KMP algorithm to solve this question
#include<bits/stdc++.h>
using namespace std;
string longestPrefix(string s) {
    vector<int> v1(s.length(), 0);
    for(int i = 1; i < s.length(); i++) {
        int j = v1[i-1];
        while( j > 0 && s[j] != s[i]) j = v1[j-1];
        if(s[i] == s[j]) v1[i] = j + 1;
    }
    return s.substr(s.size()-v1.back(), v1.back());
}
int main() {
  string s;
  cin>>s;
  cout<<longestPrefix(s);
  return 0;
}
