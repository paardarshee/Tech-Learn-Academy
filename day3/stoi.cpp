/*
In this snippet, we are converting a string representation of a number into an integer and then incrementing it by 1 before printing the result.
*/
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
  cout<<"your number is "<<(num + 1);
  return 0;
}