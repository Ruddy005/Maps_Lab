class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char,int>mapp;
            for(char c : s)mapp[c]++;
            for(int i=0;i<s.length();i++)
               if(mapp[s[i]]==1) return i;
            return -1;
            
        }
    };