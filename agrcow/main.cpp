#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int bsearch(int *ss,int l,int r,int min)
{
    int mid;
    while(r>l)
    {
        mid = (l+r)/2;
        if(ss[mid]<=min)
            l=mid;
        else
            r=mid-1;
    }
    return l;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,x;
        cin>>n>>c;
        vector<int> v1;
        v1.reserve(n);
        for(int i =0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        int min = 0,max=0;
        for(int i=1;i<n;i++)
        {
             x =v1[i]-v1[i-1];
            if(x>min)
                min = x;
        }
        vector<int>ss;
        ss.reserve(*(v1.end())-*(v1.begin()));
        for(int i =0;i<x;i++)
            ss[i]=i+1;

       cout<< bsearch(ss,0,x,min);
    }
    return 0;
}
