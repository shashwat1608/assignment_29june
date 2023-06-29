#include <iostream>
#include <vector>

std::vector<int> findCommonElements(const std::vector<int>& arr1, const std::vector<int>& arr2, const std::vector<int>& arr3) {
    std::vector<int> result;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            result.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr2[j] < arr3[k]) {
            j++;
        }
        else {
            k++;
        }
    }

    return result;
}

int main() {
    // Example usage
    std::vector<int> arr1 = { 1, 2, 3, 4, 5 };
    std::vector<int> arr2 = { 3, 4, 5, 6 };
    std::vector<int> arr3 = { 2, 3, 5 };

    std::vector<int> commonElements = findCommonElements(arr1, arr2, arr3);

    std::cout << "Common elements: ";
    for (int element : commonElements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
