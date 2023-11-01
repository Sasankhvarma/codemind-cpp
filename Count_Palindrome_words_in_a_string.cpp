#include<bits/stdc++.h>
using namespace std;
int fun(string s){
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string k=s;
    reverse(k.begin(),k.end());
    if(k==s){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string s;
    getline(cin,s);
    int c=0;
    string t="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(fun(t)==1)c++;
            t="";
        }
        else{
            t+=s[i];
        }
    }
    if(fun(t)==1)c++;
    cout<<c;
}