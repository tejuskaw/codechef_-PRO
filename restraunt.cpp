#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int right[n],left[n];
		for(int i=0;i<n;i++){
			int x,y;std::cin>>x>>y;
			left[i]=x;right[i]=y;
		}
		for(int i=0;i<m;i++){
			int p;cin>>p;
			if(p>right[n-1]){
				cout<<-1<<"\n";
			}
			else{
				
			}
		}
	}
	return 0;
}