#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 == 0) {
            double m = (nums1[nums1.size() / 2] + nums1[(nums1.size() / 2) - 1]) / 2.0;
            return m;
        } else {
            double m = nums1[nums1.size() / 2];
            return m;
        }
    }
};

int main() {
    Solution sol;
    std::vector<int> num1, num2;
    int n1, n2;

    std::cout << "Enter Size of List1: ";
    std::cin >> n1;
    for (int i = 0; i < n1; ++i) {
        int r;
        std::cout << "Enter Element[" << i << "]: ";
        std::cin >> r;
        num1.push_back(r);
    }
    std::cout << "List1: ";
    for (int num : num1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter Size of List2 (Greater than " << n1 << "): ";
    std::cin >> n2;
    for (int j = 0; j < n2; ++j) {
        int s;
        std::cout << "Enter Element[" << j << "]: ";
        std::cin >> s;
        num2.push_back(s);
    }
    std::cout << "List2: ";
    for (int num : num2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    double Res = sol.findMedianSortedArrays(num1, num2);
    std::cout << "Median: " << Res << std::endl;

    return 0;
}
