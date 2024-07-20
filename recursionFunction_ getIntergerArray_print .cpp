#include <iostream>

void printArr(int arr[], int size);

void printArr(int arr[], int size) {
    if (size == 0) {
        return;
    }
    std::cout << arr[0] << "\n";
    printArr(arr + 1, size - 1);
}

int main() {
    const int maxSize = 100;
    int arr[maxSize] = {0};
    int size;
    
 
    std::cout << "Please enter the array size (up to " << maxSize << "): ";
    std::cin >> size;
    
  std::cout << "Please enter  elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Elements of the array:" << std::endl;
    printArr(arr, size);
    std::cout << std::endl;

    return 0;
}