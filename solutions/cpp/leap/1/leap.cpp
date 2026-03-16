#include "leap.h"

namespace leap {

// TODO: add your solution here
    int is_leap_year(int year){
        if (year%100 == 0 ){
            if (year%400 == 0){
                 return true;   
            } else {
                return false;
            }
        } else if (year%4 == 0){
            return true;    
        }
        return false;
    }

}  // namespace leap
