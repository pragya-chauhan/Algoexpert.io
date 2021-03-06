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



class Solution {
public:
    int search(vector<int>& nums, int target) {
         int start = 0;
  int end =nums.size() - 1;
  
  while(start<=end){
    int mid = start+ (end - start)/2;
    
    if(nums[mid] == target)
      return mid;
     if(target < nums[mid])
      end = mid -1;
      else
        start = mid +1;
  
  
  }
  return -1;

}
};
