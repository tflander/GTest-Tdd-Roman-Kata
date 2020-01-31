#include "roman.hpp"

string toRoman(uint16_t n) {
   
   string result = "";

   while (n >= 10) {
       result.append("X");
       n -= 10;
   }

   while(n >= 5) {
       result.append("V");
       n -= 5;
   }

    while ( n >=4){
        result.append("IV");
        n-=4;
    }

   while (n >= 1) {
       result.append("I");
       n -= 1;
   }

    return result;
}