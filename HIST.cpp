#include<bits/stdc++.h>
using namespace std;
long long n,x;
vector<long long> l;
vector<long long > start;
vector<long long > finish;
void solve(){
    stack<long long> uncheckedColumn;
    finish.resize(n + 2);
    start.resize(n + 2);
    for(long long i = 1; i <= n + 1; ++i){
        // kiem tra o trong nhung cot chua dc xet, co cai nao lon hon khong ?
        // neu co cot j trong tap dang xet thoa man: l[j] > l[i] : thi finish[j] bang i -> xoa j khoi tap dang xet
        // minh xet nguoc theo chieu cot i -> cot 1: dung stack
        while(!uncheckedColumn.empty() && l[uncheckedColumn.top()] > l[i] ){
            finish[uncheckedColumn.top()] = i;
            uncheckedColumn.pop();
        }
        uncheckedColumn.push(i);
    }
    uncheckedColumn.pop();
    for(long long i = n; i >= 0; --i){
        // kiem tra o trong nhung cot chua dc xet, co cai nao lon hon khong ?
        // neu co cot j trong tap dang xet thoa man: l[j] > l[i] : thi finish[j] bang i -> xoa j khoi tap dang xet
        // minh xet nguoc theo chieu cot i -> cot 1: dung stack
        while(!uncheckedColumn.empty() && l[uncheckedColumn.top()] > l[i] ){
            start[uncheckedColumn.top()] = i;
            uncheckedColumn.pop();
        }
        uncheckedColumn.push(i);
    }
    uncheckedColumn.pop();
    /*
    for(long long i = 1; i <= n; ++i){
        cout << i << ' ' << start[i] <<' ' << finish[i] << endl;
    }
    */
    unsigned long long ans = 0;
    for(int i = 1; i <= n; ++i){
        unsigned long long res = (finish[i] - start[i] - 1)* l[i];
        ans = max(ans, res);
    }
    /*
    cout << "ket qua" << ans;
    cout << "-----------------------------------------------";
    */
    cout << ans << endl;
}
int main(){
    while(1){
        cin >> n;
        if(n == 0){
            return 0;
        }
        l.push_back(-1);
        for(long long i = 1; i <= n; ++i){
            cin >> x;
            l.push_back(x);

        }
        l.push_back(-1);
        solve();
        l.clear();
    }
}
