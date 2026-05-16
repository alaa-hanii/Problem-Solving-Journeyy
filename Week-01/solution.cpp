
// Problem: https://codeforces.com/problemset/problem/1/A

#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
    return 0;
}

// Priblem O sheet Tanta community vjuge : Merge Intervals 
// https://vjudge.net/contest/756131#problem/O
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n ; cin >> n ;
   vector <pair <long long, long long >> s ;
   for (int i = 0 ; i < n ; i++){
       long long l, r;
       cin >> l >> r ;
       s.push_back({l, r});
   }
   sort (s.begin(), s.end());
   vector <pair <long long, long long >> ans ;
    long long cur_start = s[0].first;
    long long cur_end = s[0].second;
    for (int i = 1 ; i < n ; i++){
        if (cur_end >= s[i].first){
            cur_end = max(cur_end, s[i].second);
        }else {
            ans.push_back({cur_start, cur_end});
            cur_start = s[i].first;
            cur_end = s[i].second;
        }
    }
    ans.push_back({cur_start, cur_end});
    for (auto &pair : ans ){
        cout << pair.first << " " << pair.second << endl;
    }
    
    
    return 0;
}
