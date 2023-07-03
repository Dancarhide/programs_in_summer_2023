#include <iostream>
#include <vector>
#include <algorithm>
int contador(const std::vector<int>& nums) {
    int maxConsecutivos = 0;
    int consecutivosActuales = 0;
    for (int num : nums) {
        if (num == 1) {
            consecutivosActuales++;
            maxConsecutivos = std::max(maxConsecutivos, consecutivosActuales);
        } else {
            consecutivosActuales = 0;
        }
    }
    return maxConsecutivos;
}
int main() {
    std::vector<int> arreglo = {1, 1, 0, 1, 1, 1};
    int maxConsecutivos = contador(arreglo);
    std::cout << "Número máximo de consecutivos 1: " << maxConsecutivos << std::endl;
    return 0;
}