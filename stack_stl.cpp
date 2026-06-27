#include<bits/stdc++.h>
using namespace std;


void explainstack(){
    // it is LIFO LAST IN FIRST out

    stack<int>st;
    st.push(1);//{1}
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);// 
    st.emplace(6);//{6,5,4,3,2,1}

    cout<<st.top(); // print 5  st[2] is invalid indexing is noot allowed
    st.pop();// {5,4,3,2,1}
    cout<< st.top();//5
    // st.size()
    //st.empty()
    stack<int>st1, st2;
    st1.swap(st2);


}

