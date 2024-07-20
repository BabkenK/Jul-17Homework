#include <iostream>

void printArr(int arr[], int size);

void printArr(int arr[], int size){
    if(size == 0){
        return;
    }
    std::cout << arr[size - 1] << "\n";  
    printArr(arr, size - 1); 
}

int main(){
    const int maxsize = 100;
    int arr[maxsize] = {};
    int size;
    
    std::cout << "Enter the array size: ";
    std::cin >> size;
    
    std::cout << "Enter array elements: ";
    for(int i = 0; i < size; ++i){
        std::cin >> arr[i];
    }
    
    std::cout << "Elements printed in reverse order:\n";
    printArr(arr, size);
    std::cout << std::endl;

    return 0;
}
