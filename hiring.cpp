#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int x,y;cin>>x>>y;
		string answer="";
		for(int i=0;i<n;i++){
			string perf;cin>>perf;
			int full=0;int half=0;
			for(int j=0;j<perf.length();j++){
				if(perf[j]=='F'){
					full++;
				}			
				else if(perf[j]=='P'){
					half++;
				}	
				else{
					//kuch nhi
				}
			}
			if(full>=x || (full==(x-1) && half>=y)){
				answer+='1';
			}
			else{
				answer+='0';
			}
		}
		cout<<answer<<"\n";
	}
	return 0;
}