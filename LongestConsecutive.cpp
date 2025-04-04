class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> numSet(nums.begin(), nums.end());
    
            int longStreak = 0;
    
            for(int num : numSet) {
                if(!numSet.count(num-1)) {
                    int currNum = num;
                    int Streak = 1;
    
                    while(numSet.count(currNum+1)) {
                        currNum = currNum + 1;
                        Streak = Streak + 1;
                    }
    
                    longStreak = max(longStreak, Streak);
                }
            }
    
            return longStreak;
        }
    };