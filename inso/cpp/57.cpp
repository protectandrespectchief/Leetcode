//
// Created by inso on 19-5-29.
//

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);

        sort(intervals.begin(), intervals.end());
        map<int, bool> ignoreMap;

        int len = intervals.size();

        for (int i = 1; i < len; i++) {
            if (intervals[i][0] <= intervals[i - 1][1]) {
                intervals[i][0] = min(intervals[i][0], intervals[i - 1][0]);
                intervals[i][1] = max(intervals[i][1], intervals[i-1][1]);
                ignoreMap[i - 1] = true;
            }
        }

        vector<vector<int>> res;

        for (int i = 0; i < len; i++) {
            if (!ignoreMap[i]) {
                res.push_back(intervals[i]);
            }
        }

        return res;
    }
};