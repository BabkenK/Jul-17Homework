#include <iostream>

int greatcomdiv(int a, int b);

int greatcomdiv(int a, int b){
    
    if(b == 0){
        return a;
    }else{
        return greatcomdiv(b, a % b);
    }
}

int main (){
    int num1;
    int num2;
    
    std::cout << "enter two numbers: ";
    std::cin >> num1 >> num2;
    
    int result = greatcomdiv(num1, num2);
    
    std::cout << "The great common divion of two numbers = " << result << std::endl;
    
    return 0;
}
