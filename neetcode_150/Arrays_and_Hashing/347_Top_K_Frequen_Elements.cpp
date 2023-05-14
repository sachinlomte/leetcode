class Solution {
    static bool compare(pair<int, int> p1, pair<int, int> p2){
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second > p2.second;
    }
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
            mp[nums[i]] += 1;

        vector<pair<int, int> > f_arr(mp.begin(), mp.end());
        sort(f_arr.begin(), f_arr.end(), compare);

        for(int i = 0; i < k; i++){
            ans.push_back(f_arr[i].first);
        }

        return ans;
    }
};