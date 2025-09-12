#include <iostream>
#include "greeting_utils.h"

int main(){
    std::cout << "Enter your name: \n";
    std::string name;
    std::getline(std::cin, name);
    const std::string greeting = GreetingUtils::create_message(name);
    char* c_string_greeting = GreetingUtils::format_as_c_string(greeting);
    std::cout << c_string_greeting;

    delete c_string_greeting;
    return 0;

}