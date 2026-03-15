#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert(int number) {
        std::string raindrop;
        if (number % 3 == 0){
            raindrop += "Pling";
        }
        if (number % 5 == 0){
            raindrop += "Plang";
        }
        if (number % 7 == 0){
            raindrop += "Plong";
        }

        if (raindrop.empty()){
            return std::to_string(number);
        }
            
        return raindrop;
    }

}  // namespace raindrops
