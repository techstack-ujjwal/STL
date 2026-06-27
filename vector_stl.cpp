#include<bits/stdc++.h>
using namespace std;


void explainVector(){
    vector<int> v;// creates an empty container{}
    v.push_back(1);///  {1}
    v.emplace_back(2);//{1,2} emplace back does the same but is is faster

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(2,3);


    vector<int> v(5,100);// {100,100,100,100,100}
    vector<int>v(5);// size of 5


    vector<int> v2(v);// creates a copy of v1

    /// how access element of vector 
    // simliar as array v[0]= first value




    // iterator


    vector<int>::iterator ujjwal = v.begin();// points to memory adrees

    ujjwal++;
    
    cout <<*(ujjwal)<< " ";

    ujjwal = ujjwal +2;


    vector<int>::iterator ujjwal = v.end();

   // less used
   // vector<int>::iterator ujjwal = v.rend(); // reverse end

    //vector<int>::iterator ujjwal = v.rbegin();// reverse begin


    cout << v.back()<< " ";

    // printing  whole vector


    for (vector<int>::iterator ujjwal = v.begin(); ujjwal !=v.end(); ujjwal++){
        cout << *(ujjwal);
    };


    // easy shortcut way auto detectcets the data type auto matically
     for (auto ujjwal = v.begin(); ujjwal !=v.end(); ujjwal++){
        cout << *(ujjwal);
    }

    // for each loop

    for(auto ujjwal :v){
        cout << (ujjwal);
    }


    // {10,20,30,40}


    v.erase.(v.begin()+1);


    //{10,20,30,40,50}
    v.erase(v.begin()+2,begin()+4); // {10 20  50} 



    // insert function


    vector<int>u(2,100);//{100,100}
    u.insert(v.begin(),300);// {300,100,100}
    u.insert(v.begin()+1,300,2,10); //{ 300,10,10,100,100}


    vector<int> copy(2,50)//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout<< v.size(); // 2

    v.pop_back();
    //{10}

    // v1 { 12,33}
    // v2{23,22}
    v1.swap(v2);

    v.clear();// erases the eniter vector

    cout<< v.empty;// used to check whetehr vector is empty or not if it is empty it will say true else false



}