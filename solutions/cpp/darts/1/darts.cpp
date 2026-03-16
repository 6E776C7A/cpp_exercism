#include "darts.h"
#include <iostream>
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(double x, double y){
        
        double radius = sqrt(pow(x,2) + pow(y,2));
        
        if (radius <= 1){
            return 10;
        }
    
        if (radius <= 5){
            return 5;
        }
    
        if (radius <= 10){
            return 1;
        }
    
        return 0;
    }
}  // namespace darts
