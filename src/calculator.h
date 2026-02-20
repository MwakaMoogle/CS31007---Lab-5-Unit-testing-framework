// If CALCULATOR is not defined, define it (start of header guard)
#ifndef CALCULATOR_H

// Define CALCULATOR_H to prevent multiple inclusions
#define CALCULATOR_H

// Function declarations (only the function names and parameters, not the logic)

class Calculator {
	private:
		double lastResult;   

	public:
		Calculator();

		double add(double a, double b);
		double sub(double a, double b);
		double mul(double a, double b);
		double div(double a, double b);

		void clear();
		double getLastResult() const;
};

#endif