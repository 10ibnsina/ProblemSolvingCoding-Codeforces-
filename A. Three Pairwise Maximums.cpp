#include <bits/stdc++.h>
using namespace std;
int main() {
   long long int t;
   cin>>t;
   while(t--)
   {
       long long arr[3],i;
       for(i=0;i<3;i++)
       cin>>arr[i];
       sort(arr,arr+3);
       if(arr[2]==arr[1])
       {
           cout<<"YES"<<endl;
           cout<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<endl;
       }
       else
       cout<<"NO"<<endl;
   }
    return 0;
}
