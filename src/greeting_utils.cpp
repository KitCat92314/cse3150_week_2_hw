#include "greeting_utils.h"
#include <cstdlib>

namespace GreetingUtils{
    std::string create_message(const std::string& name){
        std::string message = "Hello, ";
        message.append(name);
        message.append("!");
        return message;
    }

    char* format_as_c_string(const std::string& message){
        int size = message.size();
        char *m = new char[size+1];
        
        for(int i = 0; i < size; i++){
            m[i] = message[i];
        }
        m[size] = '\0';
        return m;
    }
}