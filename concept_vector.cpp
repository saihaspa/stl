// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<map>
using namespace std;
int main() {
    vector<int>A;
    A.push_back(5);//Adding elemnt at back
    A.emplace_back(10);
    A.push_back(20);
    A.emplace_back(30);
    A.push_back(20);
    A.push_back(40);
    //Insertion at given position
    /*
    auto it=A.begin()+2;
    A.insert(it,15);
    for(auto x:A){
        cout<<x<<" ";
    }
    */
    //Deleting  element from vector
    //A.pop_back();
    /*auto it1=A.begin();
    A.erase(it1);
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }*/
    
    //find- O(n)
    /*auto y=find(A.begin(),A.end(),20);
    if(y!=A.end())cout<<"yes\n";
    else cout<<"No\n";
    
    //binary search
    bool z=binary_search(A.begin(),A.end(),10);
    cout<<z<<"\n";*/
    
    //lower bound and upper bound
    //First sort the vector and then find lower_bound and upper_bound
    sort(A.begin(),A.end());
    auto lb=lower_bound(A.begin(),A.end(),20);
    auto ub=upper_bound(A.begin(),A.end(),20);
    cout<<(lb-A.begin()+1)<<" "<<(ub-A.begin()+1);
    return 0;
}
