#include <iostream>
#include <algorithm>
#include <vector>

bool containsDuplicate(std::vector<int>& nums) {
	// todo : nested loop time, complexity of O(n²)
	for (int i = 0; i < nums.size() - 1; i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] == nums[j])
				return true;
		}
	}
	return false;

	//todo : sort & search, time complexity O(n log n)
	std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] == nums[i + 1])
			return true;
	}
	return false;
}

int main() {
	std::vector<int> vec = { 1,2,3,4,5 };
	std::cout << containsDuplicate(vec);
 
}
