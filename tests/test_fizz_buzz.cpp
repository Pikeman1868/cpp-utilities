#include <gtest/gtest.h>

#include "fizzbuzz.hpp"
// Demonstrate some basic assertions.
TEST(FizzBuzz, test_fizzbuzz_returns_string_from_int) {

	auto actual = play(1);
	ASSERT_EQ(actual, "1");

}

TEST(FizzBuzz, test_fizzbuzz_returns_fizz_if_modulus_of_3)
{
	auto actual = play(6);
	ASSERT_EQ(actual, "Fizz");
}
