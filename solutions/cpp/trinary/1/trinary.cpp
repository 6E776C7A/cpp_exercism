#include "trinary.h"
#include <string>
#include <cctype>
#include <cmath>

namespace trinary {

// TODO: add your solution here
    int to_decimal(std::string trinary){
        int result = 0;
        int i = 1;
        for (char c : trinary){
            if (isdigit(c)){
                result += (c - '0')*pow(3,trinary.size()-i);   
                i++;
            }
        }  
        return result;
    }

}  // namespace trinary
