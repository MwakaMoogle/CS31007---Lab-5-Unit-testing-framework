#include "calculator.h"
#include <limits>

Calculator::Calculator() : lastResult(0.0) {}

double Calculator::add(double a, double b) {
    lastResult = a + b;
    return lastResult;
}

double Calculator::sub(double a, double b) {
    lastResult = a - b;
    return lastResult;
}

double Calculator::mul(double a, double b) {
    lastResult = a * b;
    return lastResult;
}

double Calculator::div(double a, double b) {
    if (b == 0.0) {
        lastResult = std::numeric_limits<double>::quiet_NaN();
        return lastResult;
    }
    lastResult = a / b;
    return lastResult;
}

void Calculator::clear() {
    lastResult = 0.0;
}

double Calculator::getLastResult() const {
    return lastResult;
}