#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,diff,min=999999,old;
        cin>>n;
        long long int x;
        long long int a[n],b[n];
        unordered_map<int,int> umap;
        for(long long int i = 0;i<n;i++)
        {
            cin>>a[i];
            umap[a[i]] = 0;
        }

        for(long long int i = 0;i<n;i++)
        {
           old = umap[a[i]];
           umap[a[i]]=i;
           if(old!=0)
           {
           diff = umap[a[i]] - old;
           cout<<diff<<" ";
           if(diff<min)
            min = diff;
           }

        }
        cout<<min<<"\n";
    }
    return 0;
}
