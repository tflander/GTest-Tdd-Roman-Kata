#include "roman.hpp"
#include <gtest/gtest.h>

TEST(ToRoman, one) {
    initRomanConverter();
    ASSERT_EQ("I", toRoman(1));
}

TEST(ToRoman, two) {
    ASSERT_EQ("II", toRoman(2));
}

TEST(ToRoman, three) {
    ASSERT_EQ("III", toRoman(3));
}

TEST(ToRoman, four) {
    ASSERT_EQ("IV", toRoman(4));
}

TEST(ToRoman, five) {
    ASSERT_EQ("V", toRoman(5));
}

TEST(ToRoman, six) {
    ASSERT_EQ("VI", toRoman(6));
}

TEST(ToRoman, eight) {
    ASSERT_EQ("VIII", toRoman(8));
}

TEST(ToRoman, nine) {
    ASSERT_EQ("IX", toRoman(9));
}