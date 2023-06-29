#include <iostream>
#include <vector>

using namespace std;

vector<int> rearrangeArray(const vector<int>& nums) {
    int n = nums.size() / 2;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        result.push_back(nums[i]);
        result.push_back(nums[i + n]);
    }

    return result;
}

int main() {
    // Example usage
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> rearranged = rearrangeArray(nums);

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }

    cout << "\nRearranged array: ";
    for (int num : rearranged) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
