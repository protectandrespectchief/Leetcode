class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) {
            return vector<int>();
        }
        
        int rowBegin = 0;
        int rowEnd = matrix.size() - 1;
        
        int colBegin = 0;
        int colEnd = matrix[0].size() - 1;
        
        vector<int> res;
        
        while (rowBegin <= rowEnd || colBegin <= colEnd) {
            
            if (rowBegin <= rowEnd) {
                for (int j = colBegin; j <= colEnd; j++) {
                    res.push_back(matrix[rowBegin][j]);
                }

                rowBegin++;
            }
            
            if (colBegin <= colEnd) {
                for (int i = rowBegin; i <= rowEnd; i++) {
                res.push_back(matrix[i][colEnd]);
                }

                colEnd--;
            }
            

            if (rowBegin <= rowEnd) {
                for (int j = colEnd; j >= colBegin; j--) {
                    res.push_back(matrix[rowEnd][j]);
                }
                rowEnd--;
            }

            if (colBegin <= colEnd) {
                for (int i = rowEnd; i >= rowBegin; i--) {
                    res.push_back(matrix[i][colBegin]);
                }
                colBegin++;
            }
            
        }
        
        
        return res;
        
    }
};