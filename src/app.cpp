#include <cmath>
#include "calculator.h"
#include "gtest/gtest.h"

TEST(CalculatorTest, AddReturnsCorrectValueAndUpdatesLastResult) {
	Calculator calc;
	EXPECT_DOUBLE_EQ(calc.add(10.0, 5.0), 15.0);
	EXPECT_DOUBLE_EQ(calc.getLastResult(), 15.0);
}

TEST(CalculatorTest, SubReturnsCorrectValueAndUpdatesLastResult) {
	Calculator calc;
	EXPECT_DOUBLE_EQ(calc.sub(10.0, 5.0), 5.0);
	EXPECT_DOUBLE_EQ(calc.getLastResult(), 5.0);
}

TEST(CalculatorTest, MulReturnsCorrectValueAndUpdatesLastResult) {
	Calculator calc;
	EXPECT_DOUBLE_EQ(calc.mul(4.0, 2.5), 10.0);
	EXPECT_DOUBLE_EQ(calc.getLastResult(), 10.0);
}

TEST(CalculatorTest, DivReturnsCorrectValueAndUpdatesLastResult) {
	Calculator calc;
	EXPECT_DOUBLE_EQ(calc.div(20.0, 4.0), 5.0);
	EXPECT_DOUBLE_EQ(calc.getLastResult(), 5.0);
}

TEST(CalculatorTest, DivByZeroReturnsNaNAndUpdatesLastResult) {
	Calculator calc;
	double result = calc.div(10.0, 0.0);
	EXPECT_TRUE(std::isnan(result));
	EXPECT_TRUE(std::isnan(calc.getLastResult()));
}

TEST(CalculatorTest, ClearResetsLastResultToZero) {
	Calculator calc;
	calc.add(2.0, 3.0);
	calc.clear();
	EXPECT_DOUBLE_EQ(calc.getLastResult(), 0.0);
}

TEST(CalculatorTest, FloatingPointAdditionUsesNearComparison) {
	Calculator calc;
	double result = calc.add(0.1, 0.2);
	EXPECT_NEAR(result, 0.3, 1e-9);
}

TEST(CalculatorTest, LastResultTracksMostRecentOperation) {
	Calculator calc;
	calc.add(1.0, 1.0);
	calc.mul(3.0, 4.0);
	EXPECT_DOUBLE_EQ(calc.getLastResult(), 12.0);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
