#include <iostream>

 char firstUpperCase(const char *str) {
    if (*str == '\0') {
        return '\0'; 
    }
    if (*str >= 'A' && *str <= 'Z') {
        return *str; 
    }
    return firstUpperCase(str + 1);  

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];

    std::cout << "Enter a string: ";
    
     std::cin >> str;

    char firstUpper = firstUpperCase(str);

    if (firstUpper != '\0') {
        std::cout << "First uppercase letter found: " << firstUpper << std::endl;
    } else {
        std::cout << "No uppercase letter found in the string." << std::endl;
    }

    return 0;
}
