#include <iostream>
#include <string>

int main(){
    int fav_num;
    std::string ans;
    
    
    std::cout << "Enter your favorite number between 1 and 10: ";
    
    std::cin >> fav_num;
    
    std::cout << "That's a good choice!" << std::endl;
    
    std::cout << "Your number was:" << fav_num << "." << std::endl; std::cout << "Am I right?" << std::endl;
    
    std::cin >> ans;
    
    if(ans == "Yes"){
        std::cout << "That's my favorite number too!" << std::endl;
    }else {
        std::cout << "Let's try again then..." << std::endl;
    }
    return 0;
}