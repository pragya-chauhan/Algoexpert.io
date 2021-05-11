/*Problem Statement
Write a function that takes in a sorted array of integers as well as a target integer. The function should use the Binary Search algorithm to nd if the target number is contained in the array and should return its index if it is, otherwise -1.

Sample input: [0, 1, 21, 33, 45, 45, 61, 71, 72, 73], 33

Sample output: 3

for(array n)    comp = O(n)
  if peresent
    return i
return -1

sort array      logn
middle left right


*/

#include<iostream>

int binarySearch(vector<int> &sortarray, int target){
      int low = 0;
    int high = sortarray.size()-1;
  int mid = low+ (high-low)/2;
  while(low<=high){
  if (mid == target)
    return mid;
  else if(target>mid)
    low = mid +1;
  else
    high = mid -1;
  }
  return -1;

}



int main(){}

