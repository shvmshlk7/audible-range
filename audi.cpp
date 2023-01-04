#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    if(X>=67 && X<=45000)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
