class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            unordered_set<string> seen;
    
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    char num = board[i][j];
                    if (num == '.') continue;
    
                    string rowKey = "row" + to_string(i) + num;
                    string colKey = "col" + to_string(j) + num;
                    string boxKey = "box" + to_string(i / 3) + to_string(j / 3) + num;
    
                    if (seen.count(rowKey) || seen.count(colKey) || seen.count(boxKey))
                        return false; 
    
                    
                    seen.insert(rowKey);
                    seen.insert(colKey);
                    seen.insert(boxKey);
                }
            }
            return true;
        }
    };