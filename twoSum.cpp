class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t i = 0;
        unordered_map<int,size_t> hashMap;
        for (int x : nums){
            hashMap.insert({x,i});
            auto iter = hashMap.find((target - x));
            if(iter != hashMap.end() && iter->second != i){
                vector<int> vect;
                vect.push_back(i);
                vect.push_back(iter->second);
                return vect;
            }
            i++;
        }
        return nums;
    }
};
