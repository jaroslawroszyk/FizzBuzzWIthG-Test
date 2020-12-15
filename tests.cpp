#include "main.cpp"
#include <gtest/gtest.h>

TEST(fizz, returnTrueFfItIsDivisibleByThree)
{
    ASSERT_TRUE(fizzbuzz(9));
};

TEST(fizz, returnTrueFfItIsDivisibleByThreeasd)
{
    ASSERT_TRUE(fizzbuzz(9));
};

TEST(fizz, returnFalseFfItIsDivisibleByThree)
{
    ASSERT_FALSE(fizzbuzz(7));
};

TEST(fizz,returnTrueFfItIsDivisibleByFive)
{
    ASSERT_TRUE(fizzbuzz(10));
};

TEST(fizz,returnFalseFfItIsDivisibleByFive)
{
    ASSERT_FALSE(fizzbuzz(11));
};

TEST(f,returnTrueFfItIsDivisibleByThreeAnDFIVE)
{
    ASSERT_TRUE(fizzbuzz(30));
};

TEST(f,returnFalseFfItIsDivisibleByThreeAnDFIVE)
{
    ASSERT_FALSE(fizzbuzz(31));
};

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}