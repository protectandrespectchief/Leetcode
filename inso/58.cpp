//
// Created by inso on 19-5-29.
//
#import <iostream>
// 看错题意， 求得是string中最长word长度
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;

        int i = 0;
        int j = 0;


        while (j < s.length()) {
            while (j < s.length() && s[j] != ' ') {
                j++;
            }
            int tmp = j - i;
            res = max(tmp , res);
            j++;
            i = j;
        }
        s.substr()

        return res;

    }
};


//58 题解

class Solution {
public:
    int lengthOfLastWord(string s) {


        while (s[s.length() - 1] == ' '){
            s = s.substr(0, s.length() - 1);
        }
        int len = s.length();
        int i = len - 1;
        int j = len - 1;


        while (j >= 0) {
            while (j >= 0 && s[j] != ' ') {
                j--;
            }
            return i - j;
        }

        return 0;

    }
};

int main() {
    string s = "hello world";
    Solution sol;
    sol.lengthOfLastWord(s);
    return 0;
}

