#include "roman.hpp"
#include <gtest/gtest.h>

TEST(ToRoman, one) {

    ASSERT_EQ("I", toRoman(1));
}

TEST(ToRoman, two) {

    ASSERT_EQ("II", toRoman(2));
}

TEST(ToRoman, three) {

    ASSERT_EQ("III", toRoman(3));
}

TEST(ToRoman, four){

    ASSERT_EQ("IV", toRoman(4));
}

TEST(ToRoman, Five){

    ASSERT_EQ("V", toRoman(5));
}

TEST(ToRoman,Six){
    ASSERT_EQ("VI", toRoman(6));
}

TEST(ToRoman,Ten){
    ASSERT_EQ("X", toRoman(10));
}

TEST(ToRoman,twenty){
    ASSERT_EQ("XX", toRoman(20));
}