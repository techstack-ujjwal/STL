#include<bits/stdc++.h>
using namespace std;

void explianMap(){

    /// { key, value }
    map<int,int> mpp;
    map<int, pair<int,int>> mpp;
    map< pair<int,int>,int> mpp;

    mpp[1]= 2; /// on the key 1 store 2
    mpp.emplace({3,1});
    mpp.insert({2,3});
    // map stores unique key in sorted order

    mpp[{2,3}] = 10;


    for(auto it  :mpp){
        cout << it.first<< " "<< it.second << endl;

    }

    cout<< mpp[1];// 2
    cout<< mpp[5];// null or zero



    auto it = mpp.find(3);// { key , value}
    cout << *(it).second;// value

    // upper bound lower bound 
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    // erase , swap , size , empty , are same as above
// works in log n




///   multimap
// everything same as map , only it can store multipl keys
// only  mpp[key] cannot be used here


// unorderrd map 
// same as set and but unordered but store unique value

}