#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > 0)
        {
            arr[j] = 1;
        }
        else if(arr[j]<0){
            arr[j] = 2;
        }
        
        cout<<arr[j]<<" ";
    } 
    return 0;
}