#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define max1 100000000
using namespace std;



int main()
{
 int t;

 bool prime[100000];
 memset(prime,true,sizeof(prime));

 for(int i = 2; i*i<=100000;++i)
 {
     if(prime[i]==true)
     {
         for(int j=i*i;j<=100000;j+=i)
            prime[j]=false;
     }
 }
 cin>>t;

 while(t--)
 {

     int x;
     cin>>x;
     if(x==2)
       {
           cout<<1;
           continue;
       }

     if(prime[x])
     {
        cout<<7;
        x-=3;
        cout<<1;
        while(x>0 && x-=2)
            cout<<1;
        cout<<endl;
     }
     else
     {
          cout<<1;
        while(x-=2)
            cout<<1;
         cout<<endl;
     }
 }
return 0;
}
