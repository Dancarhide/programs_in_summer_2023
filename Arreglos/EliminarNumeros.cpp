#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0; l
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = removeElement(nums, val);
    std::cout << "Cantidad de elementos diferentes a " << val << ": " << k << std::endl;
    std::cout << "Nuevo contenido de nums: ";
    for (int i = 0; i < k; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
