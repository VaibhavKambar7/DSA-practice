#include<bits/stdc++.h>
using namespace std;

string move(string s)
{

    if(s.length()==0)
    {
        return "" ;
    }

    char ch=s[0];
  
    if(ch=='x')
    {
        
       return  move(s.substr(1)) + ch;

    }
    else{
        return ch + move((s.substr(1)));
    }
  

}

int main()
{
    string s="abcdxcfsxmxxm";

    cout<<move(s);
    
}