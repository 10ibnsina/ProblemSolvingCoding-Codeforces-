#include <bits/stdc++.h>
using namespace std;
int main() {
   long long int t;
   cin>>t;
   while(t--)
   {
       int n,c=0,i;
       cin>>n;
      string s1,s2;
      cin>>s1>>s2;
      for(i=0;i<n;i++)
      {
              if((s1[i]==s2[i] )|| (s1[i]=='G' && s2[i]=='B')||(s1[i]=='B' && s2[i]=='G'))
              {
                  continue;
              }
              else
              {
                  c=1;   
             }
      }
      if(c==1)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
   }
    return 0;
}
