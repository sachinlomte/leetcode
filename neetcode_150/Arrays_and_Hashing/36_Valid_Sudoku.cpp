class Solution {
public:
    bool checkblock(vector<vector<char>>& board, int x, int y){
        int s[9];
        for(int i = 0; i < 9; i++)
            s[i] = 0;
        
        for(int i = 0; i < 3; i++){
            for(int j  = 0; j < 3; j++){
                //cout << ' f ' << (board[0][0]) << endl;
                if(board[x+i][y+j]=='.')continue;
                if(s[(board[x+i][y+j])-49])
                    return 1;
                else
                    s[(board[x+i][y+j])-49] = 1;    
            }
        }
        
        return 0;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int x[3] = {0,3,6};
        int y[3] = {0,3,6};
        
        for(int i = 0; i < 3; i++){
            for(int j  = 0; j < 3; j++){
                bool flag1 = checkblock(board, x[i], y[j]);
                if(flag1) return false;
            }
        }
        
        int s[9];
        for(int i = 0; i < 9; i++)
            s[i] = 0;
        
        for(int i = 0; i < 9; i++){
            for(int j  = 0; j < 9; j++){
                if(board[i][j]=='.')continue;
                if(s[(board[i][j])-49])
                    return false;
                else
                    s[(board[i][j])-49] = 1;    
            }
            for(int k = 0; k < 9; k++)
                s[k] = 0;
        }
        
       
        for(int i = 0; i < 9; i++)
            s[i] = 0;
        
        for(int i = 0; i < 9; i++){
            for(int j  = 0; j < 9; j++){
                if(board[j][i]=='.')continue;
                if(s[(board[j][i])-49])
                    return false;
                else
                    s[(board[j][i])-49] = 1;    
            }
            for(int k = 0; k < 9; k++)
                s[k] = 0;
        }
        return true;    
    }
};