#include<bits/stdc++.h>
using namespace std;


void explainQueue(){
    //FIFO first in first out

    queue<int> q;
    q.push(1);
    q.push(2); 
    q.emplace(3);// { 1,2,3}



    q.back()+=5;


    cout<< q.back();// prints 9


    // q is {1,2 ,9}
    cout<< q.front();
    // prints 1

    q.pop(); // {2,9}
    cout << q.front(); // prints 2

    // size swap empty same as stack

}