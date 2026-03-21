#include "rotational_cipher.h"
#include <string>
#include <cctype>

namespace rotational_cipher {

// TODO: add your solution here
    std::string rotate(std::string text, int rot){
        std::string cypher;
        for (char c : text){
            if (std::isalpha(c)){
                char base = std::isupper(c) ? 'A': 'a';
                cypher += (c + rot - base)%26 + base;   
            } else 
                cypher += c;
        }
        return cypher;
    }

}  // namespace rotational_cipher
