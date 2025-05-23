class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        vector<vector<int>> dir{{0,1},{1,0},{0,-1},{-1,0}};
        int nr = matrix.size(); if(nr==0) return ans;
        int nc = matrix[0].size(); if(nc==0) return ans;
        
        vector<int> axis{nc, nr-1};
        int count = 0;
        int i = 0, j = -1;
        while(axis[count%2]){
            for(int k = 0; k < axis[count%2]; k++){
                i +=dir[count][0];
                j +=dir[count][1];
                ans.push_back(matrix[i][j]);
            }
            axis[count%2]--;
            count = (count+1) % 4;
        }
        
        return ans;
    }
};
