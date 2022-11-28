#include<iostream>
#include<vector>
#include<list>
#include<bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}
int main()
{
	vector<int>arr;
	arr.push_back(10);
	arr.push_back(15);
	arr.pop_back();
	/*for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}*/
	/*list<int>B;
	B.push_front(5);
	B.push_back(8);
	B.pop_front();
	B.push_front(19);
	for(int i=0;i<B.size();i++)
	{
		cout<<i;
	}doubt
	vector<vector<int>>grid(5,vector<int>(5,0));
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
	        cout<<grid[i][j]<<" ";
	    }
	    cout<<endl;
	}*/
	//pair
	//pair<int,int>p(10,20);
	//cout<<p.first;
	vector<pair<int,int>>vp;
	vp.push_back({10,20});
	vp.push_back({12,15});
	vp.push_back({11,18});
	/*sort(vp.begin(),vp.end());
    for(auto it :vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }*/
    sort(vp.begin(),vp.end(),comp);
    for(auto it:vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}

