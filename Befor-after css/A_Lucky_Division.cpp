#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{	
	int i,n;
	int ar[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>n;
    for(i=0;i<14;i++){
        if(n%ar[i]==0){
        	cout<<"YES\n";
        	break;
        }

        if(i==13){
        	cout<<"NO\n";
        	break;
    	}
    }
}