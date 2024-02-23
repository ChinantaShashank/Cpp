//Program to accept test cases to print twice the given character.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
while(t--)
 { 
   string S,X;
   cin>>S;
   X=S+" "+S;
   cout<<X<<endl;
  }
 return 0;
}