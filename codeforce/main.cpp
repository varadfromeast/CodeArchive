#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool a[1000000000] = {0};
int main() {
	ll n,s,k,t;
	cin>>t;
	while(t--)
	{
	ll min = 999999999;
	cin>>n>>s>>k;



	while(k--)
	{
		ll x;
		cin>>x;
		a[x]=true;

	}
	for(int i = 1;i<=n;++i)
	{
		if(a[i]==false)
		{

			if(abs(i-s)<min)
			min = abs(i-s);
		}
	}
	cout<<min<<endl;
	}
	return 0;
}
