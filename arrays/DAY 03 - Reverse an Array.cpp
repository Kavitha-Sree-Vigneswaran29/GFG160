/*
link : https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array
date - 28-03-2025
DAY 03 of My 160 Problem Solving Challenge

Problem: Reverse an Array

I used a two-pointer approach with left starting from the beginning and right from the end of the array.

 In a single traversal, I swapped the elements at left and right, then moved the pointers inward (left++, right--) until they met.

This efficiently reverses the array in-place without using extra space.

 DONE ✅
*/
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left=0;
        int right=arr.size()-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
};
