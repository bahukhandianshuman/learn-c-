/*You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.*/
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int a,b;
        int actualsum=0;
        int expectedsum=0;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 actualsum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                   

                    a=grid[i][j];
                    ans.push_back(a);
                    //no break to find actual sum
                }
                s.insert(grid[i][j]);
            }
        }
        expectedsum=(n*n)*(n*n+1)/2;
        b=expectedsum+a-actualsum;
        ans.push_back(b);
        return ans;
        
    }
};