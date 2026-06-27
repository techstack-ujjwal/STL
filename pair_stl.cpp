#include<bits/stdc++.h>
using namespace std;



// pair


void explainPair(){
    pair<int,int> p1 = {1,3};
    cout << p1.first << p1.second;


    // nested pair 
    pair<int,pair<int,int>> p2 = {1,{3,4}};
    cout << p2.first << " "<< p2.second.second;

    pair<int,int> arr[]= {{1,2},{3,4},{6,7}};
    cout<<arr[1].second;

    
}