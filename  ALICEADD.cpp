#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b , tmp, res;
    cin >> a >> b;
    a = '0' + a;
    b = '0' + b;
    if(a.size() > b.size()){
        swap(a,b);
    }

    int a_size = a.size();
    int b_size = b.size();

    for(int i = 1; i <= b_size - a_size; ++i){
        a = '0' + a;
    }
    for(int i = 0; i <= b_size - 1; ++i){
        tmp += '0';
    }
    for(int i = b_size - 1; i >= 1; --i){
        int sum = a[i]-'0' + b[i] - '0' + tmp[i] -'0';
        if(sum >= 10){
            tmp[i - 1] = '1';
        }
        stringstream ss;
        ss << sum%10;

        res = ss.str()+ res;
    }
    if(tmp[0] == '1'){
        res = '1' + res;
    }
    cout << res;
}
