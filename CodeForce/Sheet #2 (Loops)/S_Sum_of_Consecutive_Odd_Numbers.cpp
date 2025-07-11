#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long m_v,max_v;
        m_v=min(x,y);
        m_v++;
        max_v=max(x,y);
        long long sum=0;
        for(int j=m_v; j<max_v;j++){
            if(j%2==1){

                sum=sum+j;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}
