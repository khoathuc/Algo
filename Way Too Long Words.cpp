#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void solve(){
    cin >> s;
    if(s.size() <= 10){
        cout << s ;
        return;
    }
    else{
        cout << s[0] << s.size() - 2 << s[s.size() - 1];
    }
}
int main(){
    cin >> n;
    while(n --){
        solve();
        cout << endl;
    }
}
