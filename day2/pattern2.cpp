#include <iostream>

using namespace std;

int main(){
  string str;
  cin>>str;
  int num = 0;
  for(char ch:str){
    // ch will got initialized
    num = num*10 + (ch - '0');
  }
  cout<<num;
  return 0;
}