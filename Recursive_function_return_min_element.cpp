#include <iostream>

 int minArray(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int minRest = minArray(arr + 1, size - 1);
        return (arr[0] < minRest) ? arr[0] : minRest;
    }
}

int main() {
    const int maxSize = 100;  
    int arr[maxSize];  

    int size;
    std::cout << "Please enter the array size : ";
    std::cin >> size;

    std::cout << "Please enter " << size << " elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int min = minArray(arr, size);

    std::cout << "The minimum element of the array is: " << min << std::endl;

    return 0;
}
