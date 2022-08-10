#include <gtest/gtest.h>
#include "../src/test.h"

TEST(TestTest, ReturnValue)
{
    EXPECT_EQ(ReturnValue(0), 0);
    EXPECT_EQ(ReturnValue(1), 1);
    EXPECT_NE(ReturnValue(1), 2);
}
