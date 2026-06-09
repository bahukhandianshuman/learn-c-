class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int a;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                a=nums[i];

            }
            s.insert(nums[i]);
        }
        return a;
        
    }
};