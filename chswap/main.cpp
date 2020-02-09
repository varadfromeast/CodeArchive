#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long n;
       cin>>n;
       string s,t;
       cin>>s>>t;
       char ch1[2];
       long long i =0;
       for(;i<n;i++)
       {
           if(s[i]!=t[i])
           {
               ch1[0]=s[i];
               ch1[1]=t[i];
               break;
           }
       }
       i = i+1;
       long long count = 0;
       for(;i<n;i++)
       {
           if(s[i]==ch1[0] && t[i]==ch1[1])
            count= count +1;
       }
       if(count == 1)
        cout<<"YES\n";
       else
        cout<<"NO\n";


   }
}
