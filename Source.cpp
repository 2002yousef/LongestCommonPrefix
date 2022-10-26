#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string* arr = new string;
        for (int i = 0; i < strs.size(); i++)
        {
            arr[i] = strs[i];
        }
        string result = CheckCommon(arr, strs.size());
        return result;
    }
    
};


string CheckUntil(string s1, string s2) {
    string result = "";
    int len = min(s1.length(), s2.length());
    
    for (int i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
        {
            break;
        }
        else
        {
            result += s1[i];
        }
    }
    return result;
}

string CheckCommon(string str[], int n) {
    string prefix = str[0];
    for (int i = 1; i < n; i++)
    {
        prefix = CheckUntil(prefix, str[i]);
    }
    return prefix;
}
