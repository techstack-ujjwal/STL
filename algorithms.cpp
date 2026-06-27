#include<bits/stdc++.h>
using namespace std;


void algorithms(){
// a >> {1,5,3,2}
    sort(a,a+n); // to sort
    sort(a,a+4);// {1,2,3,5}
    sort(v.begin(),v.end());// for vector


    // to sort trim

sort(a+2, a+4);
// in descending order
sort(a,a+n,greater<int>);

// my way
//sort it according to second element
// if second elemnet is same , then sort it acc to first elemnet but in decending order


pair<int,int>a[] = {{1,2},{2,1},{4,1}};

sort(a, a+n, comp);// comp is aself wriiten comprater

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true
    if(p1.second>p2.second) return false
    if(p1.second==p2.second) {
        if(p1.first>p2.first) return true
        return false
    }
}

int num  = 7;
int cnt =  __builtin_popcount(); // return set bits

long long num = 12345678765432;
int cnt = __builtin_popcountll();



string s = "123";
do{
    cout<<s<<endl;
} while(next_permutation(s.begin(),s.end()));


int maxi = *max_element(a,a+n);
// there is also min_element








}
