//=============================================================================
// Problem A sheet Tanta community vjuge : Using vector 
// https://vjudge.net/contest/756131#problem/A
//=============================================================================
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
 int n , q ;
 cin >> n >> q;
 vector <int> v(n);
 for (int i = 0 ; i < n ; i++){
    cin >> v[i] ;
 }

 vector <int> result;

 while(q--){
    string query;
    cin >> query;
    if (query == "pop_back") {
            v.pop_back();
        }
        else if (query == "front") {
            result.push_back(v.front());
        }
        else if (query == "back") {
            result.push_back(v.back());
        }
        else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            sort(v.begin() + l - 1, v.begin() + r);
        }
        else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(v.begin() + l - 1, v.begin() + r);
        }
        else if (query == "print") {
            int pos;
            cin >> pos;
            result.push_back(v[pos - 1]);
        }
        else if (query == "push_back") {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }
    for (int x : result) {
        cout << x << endl;
    }

 return 0;
}
//=============================================================================
// Problem b sheet Tanta community vjuge
// https://vjudge.net/contest/756131#problem/B
//=============================================================================
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
 int n ; cin >> n ;
 vector <int> v(n) ;
 for (int i = 0 ; i < n ; i++){
    cin >> v[i] ;
 }
 sort (v.begin() , v.end());

 for (int i = 0 ; i < n ; i++){
    cout << v[i] << " " ; ;
 }
 return 0;
}

//=============================================================================
// Problem c sheet Tanta community vjuge 
// https://vjudge.net/contest/756131#problem/C
//=============================================================================
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
 int q ; cin >> q;

 deque <int> dq ;
 vector<int> result;

 while (q--){
    string query;
    cin >> query;
    if (query == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (query == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (query == "pop_back") {
            dq.pop_back();
        }
        else if (query == "pop_front") {
            dq.pop_front();
        }
        else if (query == "front") {
            result.push_back(dq.front());
        }
        else if (query == "back") {
            result.push_back(dq.back());
        }
        else if (query == "print") {
            int x;
            cin >> x;
            result.push_back(dq[x - 1]);
        }

 }

 for (int x : result) {
        cout << x << endl;
    }
 return 0;
}
//=============================================================================
// Problem d sheet Tanta community vjuge 
// https://vjudge.net/contest/756131#problem/D
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t ; cin >> t;
 vector <int> result;

 while (t--){
    string s; cin >> s;
    int openr = 0, opens = 0, moves = 0;
    for (char c : s ){
        if (c == '(') openr++;
        else if (c == '[') opens++ ;
        else if (c == ')' && openr > 0){
            openr--;
            moves++;
        }
        else if (c == ']' && opens > 0){
            opens--;
            moves++;
        }
    }
    result.push_back(moves);
 }
 for (int x : result){
    cout << x << "\n" ;
 }
 return 0;
}
//=============================================================================
// Problem E sheet Tanta community vjuge 
// https://vjudge.net/contest/756131#problem/E
//=============================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq; 
    string command;
    
    while (true) {
        cin >> command;
        if (command == "insert") {
            int k;
            cin >> k;
            pq.push(k); 
        } 
        else if (command == "extract") {
            cout << pq.top() << endl; 
            pq.pop(); 
        } 
        else if (command == "end") {
            break; 
        }}
    return 0;
}
//=============================================================================
// Problem E sheet Tanta community vjuge 
// https://vjudge.net/contest/756131#problem/E
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq; 
    string command;
    
    while (true) {
        cin >> command;
        if (command == "insert") {
            int k;
            cin >> k;
            pq.push(k); 
        } 
        else if (command == "extract") {
            cout << pq.top() << endl; 
            pq.pop(); 
        } 
        else if (command == "end") {
            break; 
        }}
    return 0;
}
//=============================================================================
// Problem F sheet Tanta community vjuge 
// https://vjudge.net/contest/756131#problem/F
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    string command;
    int q ; cin >> q ;
    vector <int> output;

    while (q--) {
        cin >> command;
        if (command == "push") {
            int k;
            cin >> k;
            pq.push(k);
        }
        else if (command == "pop") {
            pq.pop();
        }
        else if (command == "top") {
            output.push_back(pq.top());
        }}
    for(int x : output){
        cout << x << endl;
    }

    return 0;
}
//=============================================================================
// Priblem G sheet Tanta community vjuge
// https://vjudge.net/contest/756131#problem/G
//=============================================================================
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int open_count = 0; 
    int result = 0;     

    for (char c : s) {
        if (c == '(') {
            open_count++; 
        } else if (c == ')') {
            if (open_count > 0) {
                result += 2;
                open_count--;
            }
        }
    }

    cout << result << endl;
    return 0;
}
//=============================================================================
// Priblem H sheet Tanta community vjuge
// https://atcoder.jp/contests/abc158/tasks/abc158_d?lang=en
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    deque<char> dq;
    for (char c : s) {
        dq.push_back(c);
    }
    bool rev = false;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            rev = !rev;
        } else {
            int f;
            char c;
            cin >> f >> c;
            if (!rev) {
                if (f == 1)
                    dq.push_front(c);
                else
                    dq.push_back(c);
            } else {
                if (f == 1)
                    dq.push_back(c);
                else
                    dq.push_front(c);
            } } }
if (rev) {
        reverse(dq.begin(), dq.end());
    }
    for (char c : dq) {
        cout << c;
    }
    return 0;
}
//=============================================================================
// Priblem I sheet Tanta community vjuge
// https://vjudge.net/contest/756131#problem/I
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s , t ; cin >> s >> t ;
    string doubled = s + s;
    if (doubled.find(t) != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
//=============================================================================
// Priblem J sheet Tanta community vjuge 
// https://vjudge.net/problem/AtCoder-abc217_e/origin
//=============================================================================








//=============================================================================
// Priblem K sheet Tanta community vjuge 
// https://vjudge.net/problem/AtCoder-abc217_e/origin
//=============================================================================











//=============================================================================
// Priblem M sheet Tanta community vjuge 
// https://vjudge.net/problem/AtCoder-abc217_e/origin
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n ; cin >> n;
   queue <long long > q;
   priority_queue <long long, vector<long long>, greater<long long> > pq;
   while (n--){
       int type; cin >> type;
       if (type == 1){
           int x ; cin >> x;
           q.push(x);
       }else if (type == 2){
           if (!pq.empty()){
               cout << pq.top() << endl;
               pq.pop();
           }else {
               cout << q.front() << endl;
               q.pop();
           }
       }else {
           while (!q.empty()){
           pq.push(q.front());
           q.pop();
           }
       }
   }  
    return 0;
}
//=============================================================================
// Priblem N sheet Tanta community vjuge 
// https://vjudge.net/problem/AtCoder-abc247_d/origin
//=============================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
   int q ; cin >> q ;
   deque <pair <long long, long long >> dq;
   while (q--){
       int type ; cin >> type ;
       if (type == 1){
          long long x , c; cin >> x >> c ;
          dq.push_back({x,c});
       }else{
           long long c ; cin >> c ;
               long long sum = 0;
           while (c>0){
               long long take = min (c, dq.front().second);
               sum += dq.front().first*take;
               c-= take;
               if (take == dq.front().second){
                   dq.pop_front();
               }else{
                   dq.front().second-= take;
               }
           }
        cout << sum << endl;

       }
   }
    return 0;
}
//=============================================================================
// Priblem O sheet Tanta community vjuge : Merge Intervals 
// https://vjudge.net/contest/756131#problem/O
//=============================================================================
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
