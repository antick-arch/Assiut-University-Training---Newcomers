#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,s;
    cin>>k>>s;
    int cont=0;
    for(long long x=0;x<=k;x++){
        for(long y=0;y<=k;y++){
            long long z=s-x-y;
            if(z>=0 && z<=k){
                cont++;
            }
        }
    }
    cout<<cont<<endl;
return 0;
}
