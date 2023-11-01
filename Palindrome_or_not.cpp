#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string k=s;
    reverse(k.begin(),k.end());
    if(k==s) cout<<"True";
    else cout<<"False";
}