#include<iostream>

using namespace std;

int checkodd(int ele){
  if(ele%2==0)return false;
  return -1;
}

int main(){
  unordered_map<int,int>m1;
  m1.insert({6,5});
  m1.insert({7,5});
  m1.insert({7,5});
  m1.insert({71,5});
  m1.insert({17,5});
  m1.insert({3,5});
  m1.insert({9,5});
  m1.insert({9,3});

  m1[9] = 3;
  for(auto p1: m1){
    cout<<p1.first<<" "<<p1.second<<endl;
  }
  
}