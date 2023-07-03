#include <iostream>
#include <vector>

void moverParesAlPrincipio(std::vector<int>& nums) {
    int i = 0;
    int j = nums.size() - 1;
    
    while (i < j) {
        if (nums[i] % 2 == 0) {
            i++;
        } else if (nums[j] % 2 == 1) {
            j--;
        } else {
            std::swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
}

int main() {
    std::vector<int> nums = {0};
    
    moverParesAlPrincipio(nums);
    

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}