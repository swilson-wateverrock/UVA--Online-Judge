#include<bits/stdc++.h>


using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    printf("%Lf\n",1.0L);
	vector<string>v;
	string shobdo;
	string fs;
	string ss;
	int n,m;

	while(cin>>shobdo)
	{
		v.push_back(shobdo);
		}

	sort(v.begin(),v.end());

	for(int i=0; i<v.size(); i++)
	{
		if(v[i].size()==1) continue;

		for(int j=1; j<v[i].size(); j++)
		{
			fs=v[i].substr(0,j);
			ss=v[i].substr(j,v[i].size()-1);

			if((binary_search(v.begin(),v.end(),fs)) && (binary_search(v.begin(),v.end(),ss)))
			{
				 cout<<v[i]<<endl;
				 break;
			}

		}

	}



	return 0;
}
