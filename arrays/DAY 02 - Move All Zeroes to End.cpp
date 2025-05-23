/*
link : https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751
date : 26-03-2025

DAY 02 of My 160 Problem Solving Challenge

Problem: Push All Zeros to End of Array

 Approach:

 Used the two-pointer technique with a single traversal.

 → If arr[i] != 0, swap arr[i] with arr[j] and increment j.

 This keeps all non-zero elements in front, pushing zeros to the end effortlessly!

DONE ✅*/


// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        int j =0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};
