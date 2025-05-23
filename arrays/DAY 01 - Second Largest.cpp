/*GFG link : https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
Date : 25-03-2025

DAY 01 of My 160 Problem solving Challenge

Problem : Second Largest in array

I used two variables, largest and second, initialized to the minimum possible integer.

 Then, with just a single traversal of the array:

If the current number is greater than largest, update second = largest and largest = num.

If it lies between largest and second, update second = num.

return second after the traverse.

DONE !!*/

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int num;
        int largest=INT_MIN, second=INT_MIN;
        for(num : arr){
            if(num>largest){
                second=largest;
                largest=num;
            }
            else if(num<largest&&num>second){
                second=num;
            }
        }
        return (second==INT_MIN)?-1:second;
    }
};

