#include "roman.hpp"
#include <stdint.h>
#include <list>
using namespace std;

class RomanToken {
    public:
        RomanToken(string t, uint16_t v) {
            token = t;
            value = v;
        }
        string token;
        uint16_t value;
};

list<RomanToken> tokens;

void initRomanConverter() {
    tokens.push_back(RomanToken("IX", 9));
    tokens.push_back(RomanToken("V", 5));
    tokens.push_back(RomanToken("IV", 4));
    tokens.push_back(RomanToken("I", 1));
}

string toRoman(uint16_t n) {
    string result = "";
    list<RomanToken>::iterator it = tokens.begin();
    while(it != tokens.end()) {
        RomanToken t = *it;
        while(n >= t.value) {
            result.append(t.token);
            n -= t.value;
        }
        it++;
    }    

    return result;
}
