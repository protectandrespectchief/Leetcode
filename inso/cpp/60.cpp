//
// Created by inso on 19-5-30.
//

#import <iostream>
#import <vector>
#import <algorithm>

using namespace std;

// 结果是对的 leetcode 竟然limit out, 看来不让用递归
class Solution {
public:
    string getPermutation(int n, int k) {
        string str = "";
        for (int i = 1; i <= n; i++) {
            str += i + '0';
        }

        vector<string> strVec;
        int idx = 0;
        dfs(str, idx,strVec);

        sort(strVec.begin(), strVec.end());
        cout << strVec[k - 1];
        return strVec[k - 1];

    }

    void dfs(string &str, int idx,vector<string> &strVec) {
        if (idx >= str.length()) {
            strVec.push_back(str);
            return;
        }

        for (int i = idx; i < str.length(); i++) {
            swap(str[i], str[idx]);
            dfs(str, idx + 1, strVec);
            swap(str[i], str[idx]);
        }
    }
};

int main() {
    Solution sol;
    sol.getPermutation(9, 2678);
    return 0;
}