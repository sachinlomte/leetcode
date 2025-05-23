class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1)return s;
        vector<string> t(numRows,"");
        string ans;
        int len = s.length(), flag = 1, i = -1, count = 0;
        
        while(len--){
            i+=flag;
            t[i].push_back(s[count++]);
            if(i==(numRows-1)){
                flag = - 1;
            }
            else if (i==0){
                flag = 1;
            }
        }
        
        for(int i = 0; i < numRows; i++){
            int n = t[i].length();
            ans+=t[i];
        }
        
        return ans;
    }
};
