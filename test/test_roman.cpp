#include "roman.hpp"
#include <gtest/gtest.h>

TEST(ToRoman, one) {

    ASSERT_EQ("I", toRoman(1));
}