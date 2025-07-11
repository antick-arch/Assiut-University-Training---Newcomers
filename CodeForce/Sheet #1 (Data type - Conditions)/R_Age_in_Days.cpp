#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
long long age, year, month, day; 
cin>>age; 
year = age/365; 
month = (age-(year*365))/30; 
day = age - (year*365)-(month*30); 
cout<<year<<" years"<<endl; 
cout<<month<<" months"<<endl; 
cout<<day<<" days"<<endl; 
return 0; 
}