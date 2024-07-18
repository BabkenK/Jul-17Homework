#include <iostream>
int toBinary(int N);

 int toBinary(int N) {
    if (N == 0) {
        return 0;  
    } else {
        return (N % 2) + 10 * toBinary(N / 2);
         
    }
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int binaryRepresentation = toBinary(number);

    std::cout << "Binary representation of " << number << " is: " << binaryRepresentation << std::endl;

    return 0;
}

 
// with void
 void toBinary(int N);
 
 void toBinary(int N){
 
 if(N > 0){
     toBinary(N / 2);
     std::cout << N % 2;
    }
 }
int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Binary representation is = " << std::endl;
    if(number == 0){
        std::cout << "There is no whay to show it in binary whay: ";
    }else{
        toBinary(number);
    }

    return 0;
}