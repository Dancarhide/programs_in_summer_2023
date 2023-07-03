#include <iostream>
#include <vector>
bool esMatrizMontana(const std::vector<int>& arr) {
    int n = arr.size();
    if (n < 3) {
        return false;
    }
    int i = 1;
    while (i < n && arr[i] > arr[i - 1]) {
        i++;
    }
    if (i == 1 || i == n) {
        return false;
    }
    while (i < n && arr[i] < arr[i - 1]) {
        i++;
    }
    return i == n;
}
int main() {
    std::vector<int> arr = {2,1};
    
    if (esMatrizMontana(arr)) {
        std::cout << "El arreglo es un arreglo de montaña válida." << std::endl;
    } else {
        std::cout << "El arreglo es un arreglo montaña válida." << std::endl;
    }
    
    return 0;
}