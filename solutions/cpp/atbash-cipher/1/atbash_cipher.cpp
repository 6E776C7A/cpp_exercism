#include "atbash_cipher.h"
#include <string>
#include <cctype>

namespace atbash_cipher {
    std::string Plain = "abcdefghijklmnopqrstuvwxyz";

    std::string encode(std::string text){
        std::string cipher = "";
        int count = 0;

        for (char c : text){
            char c_lower = std::tolower(c);
            auto index = Plain.find(c_lower);
            if (index != std::string::npos || std::isdigit(c_lower)) {
                
                if (count > 0 && count % 5 == 0) {
                    cipher += ' ';
                }

                if (index != std::string::npos) {
                    cipher += Plain[Plain.size() - 1 - index];
                } else {
                    cipher += c_lower;
                }
                
                count++;
            }
        }
        return cipher;
    }

    std::string decode(std::string cipher){
        std::string text = "";
        for (char c : cipher){
            if (c == ' '){
                continue;
            }
            auto index = Plain.find(c);
            if (index != std::string::npos){
                text += Plain[Plain.size() - 1 - index];
            } else {
                text += c;
            }
        }
        return text;
    }
}