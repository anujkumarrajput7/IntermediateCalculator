#include "complex_number_arithmetics.h"

template<typename T>
ComplexNumber<T, typename std::enable_if<std::is_floating_point<T>::value && std::is_signed<T>::value>::type>::
ComplexNumber(T real_1, T imaginary_1, T real_2, T imaginary_2)
    : real_1(real_1), imaginary_1(imaginary_1), real_2(real_2), imaginary_2(imaginary_2) {}

template<typename T>
std::vector<T> ComplexNumber<T, typename std::enable_if<std::is_floating_point<T>::value && std::is_signed<T>::value>::type>::
AddComplexNumber() {
    std::vector<T> result;
    result.push_back(real_1 + real_2);
    result.push_back(imaginary_1 + imaginary_2);
    return result;
}

template<typename T>
std::vector<T> ComplexNumber<T, typename std::enable_if<std::is_floating_point<T>::value && std::is_signed<T>::value>::type>::
SubtractComplexNumber() {
    std::vector<T> result;
    result.push_back(real_1 - real_2);
    result.push_back(imaginary_1 - imaginary_2);
    return result;
}

// Explicit instantiation for required types
template class ComplexNumber<double>;
template class ComplexNumber<float>;