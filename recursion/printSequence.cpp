#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printSequence(vector<int>&arr, vector<int>&out, int index) {
  if(index == arr.size()) {
    for(auto el:out) cout<<el<<" ";
    cout<<endl;
    return;
  };
  
  out.push_back(arr[index]);
  printSequence(arr, out, index+1);
  
  out.pop_back();
  printSequence(arr, out, index+1);
}

int main() {
  vector<int>arr={3,1,2};
  vector<int>out;
  int index = 0;
  printSequence(arr, out, index);
  return 0;
}