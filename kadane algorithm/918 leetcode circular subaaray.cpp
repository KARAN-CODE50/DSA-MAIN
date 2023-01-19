// class Solution {
// public:


// int kadanesalgo(vector<int>&nums)
// {
//     int n = nums.size();
//     int csum =0 ;
//     int maxi = INT_MIN;
//     for(int i =0 ;i<n;i++)
//     {
//         csum += nums[i];
//         maxi = max(maxi , csum);
//         if(csum<0) csum =0 ;
//     }
//     return maxi;
// }


//     int maxSubarraySumCircular(vector<int>& nums) {
     
//      int x =kadanesalgo(nums);
//      int y = 0 ;
//      for(int i= 0; i<nums.size();i++)
//      {
//          y+=nums[i];
//          nums[i]*=-1;
//      }
//      int z = kadanesalgo(nums);
//      if(y+z==0) return x;
//      return max(x, y+z);

         


        
//     }
// };