class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> frequencyMap;
            
            for (int n : nums) {
                frequencyMap[n]++;
            }
    
            vector<int> res;
            
            for (int i = 0; i < k; i++) {
                int maxVal = -1;
                int keyOfMaxVal;
                
                for (const auto& [key, value] : frequencyMap) {
                    if (value > maxVal) {
                        maxVal = value;
                        keyOfMaxVal = key;
                    }
                }
    
                res.push_back(keyOfMaxVal);
                frequencyMap.erase(keyOfMaxVal);
            }
            
            return res;
        }
    };
    