#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::vector<int>> findDistinctElements(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> set2(nums2.begin(), nums2.end());
    
    std::vector<int> diff1;
    std::vector<int> diff2;
    
    for (const auto& num : set1) {
        if (set2.find(num) == set2.end()) {
            diff1.push_back(num);
        }
    }
    
    for (const auto& num : set2) {
        if (set1.find(num) == set1.end()) {
            diff2.push_back(num);
        }
    }
    
    return {diff1, diff2};
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {4, 5, 6, 7, 8};
    
    std::vector<std::vector<int>> result = findDistinctElements(nums1, nums2);
    
    std::cout << "Distinct elements in nums1 not present in nums2: ";
    for (const auto& num : result[0]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Distinct elements in nums2 not present in nums1: ";
    for (const auto& num : result[1]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
