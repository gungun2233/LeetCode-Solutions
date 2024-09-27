#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; // To store the number and its index
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i]; // Calculate the required number
            
            // Check if the required number is already in the map
            if (num_map.find(diff) != num_map.end()) {
                return {num_map[diff], i}; // Return indices if found
            }
            
            // Otherwise, add the current number and its index to the map
            num_map[nums[i]] = i;
        }
        
        return {}; // Return empty if no solution found (though per problem statement, a solution is guaranteed)
    }
};

