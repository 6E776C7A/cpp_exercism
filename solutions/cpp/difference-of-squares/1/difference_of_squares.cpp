#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int numbers){
        int result = 0;
        for (int i = 1; i <= numbers; i++){
            result += i;
        }
        result = result * result;
        return result;
    }
    int sum_of_squares(int numbers){
        int result = 0;
        for (int i = 1; i <= numbers; i++){
            result += (i * i);
        }
        return result;
    }
    int difference(int numbers){
        return square_of_sum(numbers) - sum_of_squares(numbers);
    }

}  // namespace difference_of_squares
