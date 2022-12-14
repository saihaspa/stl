    //multimap
    /*
    multimap<char,string>mpp;
    for(int i=0;i<4;i++)
    {
        char c;
        string s;
        cin>>c>>s;
        mpp.insert(make_pair(c,s));
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"-->"<<it.second<<"\n";
    }
    return 0;
    */


#include <iostream>
#include<map>
#include<vector>
#include<iterator>
using namespace std;
int main() 
{
    //map- dictionary
    //key and value
    //inserting elements to map
    map<int,int>mpp;
    mpp.insert(pair<int,int>(1,20));
    mpp.insert(pair<int,int>(2,30));
    mpp[3]=5;//another way to insert 
    mpp[3]=11;
    //map<int,int>::iterator itr;
    cout<<"KEY"<<" "<<"ELEMENT"<<"\n";
    for(auto itr =mpp.begin();itr!=mpp.end();++itr)
    {
        cout<<itr->first<<"-->"<<itr->second<<"\n";
    }
    cout<<"\n";
    //inserting elements from mpp to m map
    map<int,int>m(mpp.begin(),mpp.end());
    
    for(auto itr =m.begin();itr!=m.end();++itr)
    {
        cout<<itr->first<<"-->"<<itr->second<<"\n";
    }
    cout<<"After removing values with key 3";
    int n=m.erase(3);
    for(auto i=m.begin();i!=m.end();++i)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    m[4]=5;
    m[5]=12;
    cout<<"After removing elements upto key 4"<<"\n";
    m.erase(m.begin(),m.find(4));
    for(auto i=m.begin();i!=m.end();++i)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}
/*
KEY ELEMENT
1-->20
2-->30
3-->11

1-->20
2-->30
3-->11
After removing values with key 31 20
2 30
After removing elements upto key 4
4 5
5 12
*/
