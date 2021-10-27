#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int prime[2000000000+1]={0};
	for(int i=2;i<=sqrt(2000000001) ; i++){
		if(prime[i]==0){
			for(int j=2*i ; j<2000000001 ; j++){
				prime[j]++;
			}
		}
	}
	while(t--){
		int x,y;cin>>x>>y;
		for(int i=2;i<=2000000000 ; i++){
			if(prime[i]>0){
				continue;
			}
			bool isit = true;
			for(int j=x ; j<=y ; j++){
				if(j%i == 0){
					isit=false;
					break;
				}
			}
			if(isit){
				cout<<i<<"\n";
			}
		}
	}
	return 0;
}