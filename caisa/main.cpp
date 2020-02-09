#include <iostream>
#include <cstdint>
#define max UINT_MAX

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		max n,k;
		cin>>n>>k;
		max res=n/k;
		if(res>=k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
	}
	return 0;
}
