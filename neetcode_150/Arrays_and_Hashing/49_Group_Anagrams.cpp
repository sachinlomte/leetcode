class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<str, vector<str>> mp;

        for(auto s: strs){
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }

        for(auto v: mp)
            ans.push_back(v.second);

        return ans;
    }
};