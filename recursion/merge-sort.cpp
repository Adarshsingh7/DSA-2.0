#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int right, int mid) {
  vector <int> out;
  int i = left;
  int j = mid+1;
  while (i<=mid and j<=right) {
    if(arr[i] < arr[j]) {
      out.push_back(arr[i]);
      i++;
    } else {
      out.push_back(arr[j]);
      j++;
    }
  }
  
  while(i<=mid) {
    out.push_back(arr[i]);
    i++;
  }
  while(j<=right) {
    out.push_back(arr[j]);
    j++;
  }
  for(auto el:out) {
    arr[left++] = el;
  }
}

void mergeSort(vector<int>&arr, int left, int right) {
  if(left >= right) return;
  int mid = (left+right)/2;
  mergeSort(arr, left, mid);
  mergeSort(arr, mid+1, right);
  merge(arr, left, right, mid);
}

int main() 
{
  vector<int>arr={10,50,20,30,80,60};
  mergeSort(arr, 0, arr.size()-1);
  for(auto el:arr) {
    cout<<el<<" ";
  }
  cout<<endl;
  return 0;
}