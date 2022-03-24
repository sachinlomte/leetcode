class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> vis(n+1, 0), ans;
        
        for(int i = 0; i < n; i++){
            vis[nums[i]] = 1;
        }
        
        for(int i = 1; i <= n; i++){
            if(vis[i] == 0)
                ans.push_back(i);
        }
        
        return ans;
    }
};
