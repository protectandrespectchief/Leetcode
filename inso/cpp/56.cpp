//
// Created by inso on 19-5-29.
//

#include <iostream>
#include <vector>
#include <algorithm>
#import <map>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        int len = intervals.size();
        if (len <= 1) {
            return intervals;
        }

        sort(intervals.begin(), intervals.end());

        map<int, bool> trueMap;

        for (int i = 1; i <len; i++) {
            if ((intervals[i][0] - intervals[i- 1][1]) <= 0) {
                intervals[i][0] = min(intervals[i- 1][0], intervals[i][0]);
                intervals[i][1] = max(intervals[i- 1][1], intervals[i][1]);
                trueMap[i - 1] = true;
            }
        }

        vector<vector<int>> res;
        for (int i = 0; i < len; i++) {
            if (!trueMap[i]) {
                res.push_back(intervals[i]);
            }
        }

        return res;
    }
};

int main() {
    vector<vector<int> > vec;
    vec.push_back({1, 4});
    vec.push_back({0, 2});
    vec.push_back({3, 5});
    Solution sol;
    sol.merge(vec);
    return 0;
}

