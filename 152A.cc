#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,m;
	cin>>n>>m;
	string s[200];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	char mxx;
	set<int> Set;
	for(int i=0;i<m;i++)
	{
		mxx=0;
		for(int j=0;j<n;j++)
		{
			mxx=max(s[j][i],mxx);
		}
		for(int j=0;j<n;j++)
		{
			if(mxx==s[j][i])Set.insert(j);
		}
	}
	cout<<Set.size();
}
