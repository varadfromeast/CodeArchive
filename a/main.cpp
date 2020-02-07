#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long x[3];
        x[0]=a;x[1]=b;x[2]=c;

        long long diff = x[1]-x[0];
        long long req = x[2]-diff;
        if(req%2 == 0)
            x[1]=x[1]+(req/2);
        else
            x[1]=x[1]+((req-1)/2);
        cout<<x[1]<<"\n";
    }
    return 0;
}
