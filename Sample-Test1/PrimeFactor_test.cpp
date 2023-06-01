#include "pch.h"
#include "../TDD_1/PrimeFactor.cpp"

using namespace std;

TEST(PrimeFactors, PrimeTest)
{
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
