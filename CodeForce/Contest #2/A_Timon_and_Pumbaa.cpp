#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,val;
    cin>>a>>b;
    val = a - b;
    if(val>=0){
        cout<<val;
    }
    else{
        cout<<0;
    }
}