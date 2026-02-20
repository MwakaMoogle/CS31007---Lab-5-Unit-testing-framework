#include <iostream>
#include "calculator.h"

int main() {
	Calculator calc;

    // Test the calculator functions
	std::cout << "2 + 3 = " << calc.add(2.0, 3.0) << "\n";
	std::cout << "10 - 4 = " << calc.sub(10.0, 4.0) << "\n";
	std::cout << "6 * 7 = " << calc.mul(6.0, 7.0) << "\n";
	std::cout << "8 / 2 = " << calc.div(8.0, 2.0) << "\n";
	std::cout << "8 / 0 = " << calc.div(8.0, 0.0) << "\n";

    // Display the last result and then clear it
	std::cout << "Last result = " << calc.getLastResult() << "\n";
	calc.clear();
	std::cout << "After clear = " << calc.getLastResult() << "\n";

	return 0;
}
