class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {};
          bool col[9][10] = {};
            bool box[9][10] = {};

        for(int i = 0; i<9;i++){
            for(int j = 0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                int val = board[i][j] -'0';
                int boxIndex = (i/3)*3+ (j/3);

                if(row[i][val] || col[j][val] || box[boxIndex][val]){
                    return false;
                }
                row[i][val]= true;
                col[j][val]= true;
                box[boxIndex][val]= true;
            }
        }
        return true;
    }
};