
#include <string.h>
#include <gtest/gtest.h>


TEST(strcmp, eq) {
    EXPECT_EQ(0, strcmp("hello", "hello"));
}


TEST(strcmp, lessthan) {
    EXPECT_LT(0, strcmp("hello", "hell"));
}


TEST(strcmp, greaterthan) {
    EXPECT_GT(0, strcmp("hell", "hello"));
}


