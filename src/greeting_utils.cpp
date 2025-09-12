#include "greeting_utils.h"

namespace GreetingUtils{
    std::string create_message(const std::string& name){
        std::string message = "Hello, ";
        message.append(name);
        message.append("!");
        return message;
    }

    char* format_as_c_string(const std::string& message){
        char* m = (char*)calloc(message.length() + 1, sizeof(char));
        for(int i = 0; i < message.length(); i++){
            m[i] = message[i];
        }
        m[message.length()] = '\0';
        return m;
    }
}