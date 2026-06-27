#include<bits/stdc++.h>
using namespace std;


void explainPQ(){
   
    priority_queue<int>pq;
// keeeps largest value wehtehr strint har int on top

pq.push(5);
pq.push(2);
pq.push(3);
pq.push(9);
pq.emplace(10);// {10,8,5,2}

// p.top ()
// will print 10

pq.pop();// willl pop the top element




//size swap empty functions are same 

// this is also called max heap


// minimum heap
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(5);
pq.push(2);
pq.push(3);
pq.push(9);
pq.emplace(10);// {2,3,5,9,10}


// push >>> logn
// top>>>  0{1}
// pop >>> logn


}