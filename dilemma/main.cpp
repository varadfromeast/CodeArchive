#include <iostream>
#include<string>
#define uint unsigned int
using namespace std;

int main()
{
    uint t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        uint count = 0;
        for(uint i=0;i<s.size();i++)
        {
            //cout<<s[i]<<" ";
            if(s[i]=='1')
               {
                   count= count +1;
                   cout<<count<< " ";
               }
        }
        if(count%2==0)
            cout<<"LOSE\n";
        else
            cout<<"WIN\n";
    }
    return 0;
}
