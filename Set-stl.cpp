#include<bits/stdc++.h>
using namespace std;


void explainSet(){

    // stores in sorted and unique mannr
   
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);// no duplicated
    st.insert(3);
    st.insert(6);// {1,2,3,6}\


    // begin() end  rebign rend size empty and swap are same

    //{1,2,3,4,5}
    auto it = st.find(3); // iterator

    auto it = st.find(6);// st.end

    // st.erase(5) takes logrithmic time 

    int cnt = st.count(1);// if available the no else 0

    auto it = st.find(3);
    st.erase(it); /// it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);// after erase {1,4,5}


    // lower_bound and upper_bound works in same as vector

}

void explainMultiset(){
    // everything is same as set
    //only stores duplicate elements


    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);// {1,1,1,1}

    ms.erase(1); // all 1 ersed

    int cnt = ms.count(1);


    // one a single one erase
    ms.erase(ms.find(1));
    
}

void explainUset(){
    unordered_set<int> st;
    // time complexeity 0(n)
    // lower bound and upper bound doesnt work
    // rest all are same 
    //  it does note stores in any particyular order it has a better complexity than set in most of the cases
    
}

