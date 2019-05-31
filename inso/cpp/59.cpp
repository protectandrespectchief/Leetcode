//
// Created by inso on 19-5-29.
//

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > res(n, vector<int>(n, 0));

        int rowB = 0;
        int rowE = n - 1;
        int colB = 0;
        int colE = n - 1;

        int m = 1;
        while (rowB <= rowE || colB <= colE) {
            if (rowB <= rowE) {
                for (int j = colB; j <= colE; j++) {
                    res[rowB][j] = m++;
                }
                rowB++;
            }

            if (colB <= colE) {
                for (int i = rowB; i <= rowE; i++) {
                    res[i][colE] = m++;
                }
                colE--;
            }

            if (rowB <= rowE) {
                for (int j = colE; j >= colB; j--) {
                    res[rowE][j] = m++;
                }
                rowE--;
            }

            if (colB <= colE) {
                for (int i = rowE; i >= rowB; i--) {
                    res[i][colB] = m++;
                }

                colB++;
            }
        }


        return res;
    }
};