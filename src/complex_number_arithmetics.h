#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>
#include <type_traits>
#include <vector>

template<typename T, typename Enable = void>
class ComplexNumber;

template<typename T>
class ComplexNumber<T, typename std::enable_if<std::is_floating_point<T>::value && std::is_signed<T>::value>::type> {
private:
    T real_1;
    T real_2;
    T imaginary_1;
    T imaginary_2;

public:
    ComplexNumber(T real_1, T imaginary_1, T real_2, T imaginary_2)
        : real_1(real_1), imaginary_1(imaginary_1), real_2(real_2), imaginary_2(imaginary_2) {}

    std::vector<T> AddComplexNumber() {
        std::vector<T> result;
        result.push_back(real_1 + real_2);
        result.push_back(imaginary_1 + imaginary_2);
        return result;
    }

    std::vector<T> SubtractComplexNumber() {
        std::vector<T> result;
        result.push_back(real_1 - real_2);
        result.push_back(imaginary_1 - imaginary_2);
        return result;
    }
};

#endif // COMPLEXNUMBER_H