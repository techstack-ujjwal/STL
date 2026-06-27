#include<bits/stdc++.h>
using namespace std;


void explaindeque(){
    deque<int> dq;

    dq.push_back(2);// {2}
    dq.emplace_back(4);//{2,4}
    dq.push_front(5); //{5,2,4}// very cheap in term of time complextity with respect tovector
    dq.emplace_front();
}

/// rest function are same as vector