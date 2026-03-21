#include "luhn.h"
#include <string>
#include <cctype>

namespace luhn {

// TODO: add your solution here
    bool valid(std::string number){
        int result = 0;
        int counter = 0;
        for(int i = 1; i <= (int)number.size(); i++){
            char c = number[number.size() - i];
            int value = c - '0';
            if(isdigit(c)){
                if (counter % 2 == 1){
                    if ((value*2) > 9){
                        result += value*2 - 9;
                    } else {
                        result += value*2;
                    }
                } else{
                    result += value; 
                }
                counter++;
            }
            else if(c != ' '){
                return false;
            }
        }
        return (counter > 1 && result % 10 == 0);
    }

}  // namespace luhn
