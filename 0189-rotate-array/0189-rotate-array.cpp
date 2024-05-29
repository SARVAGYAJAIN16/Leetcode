// here done by right rotate and another platform left rotate.......................
#include<bits/stdc++.h>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
                       reverse(nums.begin(),nums.end());      // ****************Right rotate*****************************
                       reverse(nums.begin(),nums.begin()+k);
                       reverse(nums.begin()+k,nums.end());

        
                  //****************************** left rotate *****************************************************
                   //      reverse(nums.begin() , nums.begin() + k);
                  //       reverse( nums.begin() + k , nums.end());
                 //       reverse(nums.begin(),nums.end());
    } 
};


