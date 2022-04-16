// https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<(nums.size()-1);i++)
        {
            for(int j=1;j<nums.size();j++)
            {
                
                if((nums.at(i)!=nums.at(j))&&(nums.at(i)+nums.at(j)==target))
                {   
                    ans.push_back(i);
                    ans.push_back(j);  
                    
                }
                
            }
        }
    return ans;
    } 
};