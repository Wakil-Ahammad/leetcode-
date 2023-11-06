class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int,int>mp;
        vector<int>v;
        for(int i = 0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0){v.push_back(nums[i]);mp[nums[i]]++;}
        }

        for(int i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }

        return v.size();
    }
};
