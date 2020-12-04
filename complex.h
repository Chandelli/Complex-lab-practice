#ifndef COMPLEX_H
#define COMPLEX_H
#define PI 3.14159265358979323846
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    double real;
    double imag;
} ComplexNumber;


/** 
 * @param Exponential  abs * e^(i * arg)
 * @param Polar   abs * (cos(arg) + isin(arg))
 * @param Default   (real, imag)
 * */
typedef enum  {
    Exponential,
    Polar, 
    Default 
} Format;


/**
 * @brief Создаёт форматированный вид комплексного числа.
 * @param number комплексное число.
 * @param format формат вывода number, принимает значения: Exponential, Polar, Default.
 * @return Возвращает указатель на форматированную строку.
*/
char* complexToString(const ComplexNumber number, Format format);


/**
 * @param number комплексное число.
 * @return Возвращает абсолютную величину number.
*/
double getAbs(const ComplexNumber number);


/**
 * @param number комплексное число.
 * @return Возвращает аргумент number в радианах,
 *         лежащий в полуинтервале (-pi; pi].
*/
double getArg(const ComplexNumber number);


/**
 * @param number  комплексное число.
 * @return Возвращает норму number.
*/
double getNorm(const ComplexNumber number);


/**
 * @param number комплексное число.
 * @return Возвращает сопряженное для number.
*/
ComplexNumber conjugate(const ComplexNumber number);


/**
 * @brief Возводит комплексное число в целую степень.
 * @param basis возводимое в степень число.
 * @param exponent степень.
 * @return Возвращает результат возведения в степень.
*/
ComplexNumber complexPow(const ComplexNumber basis, int exponent);



/**
 * @param number комплексное число.
 * @param n степень корня.
 * @return Возвращает массив корней n-степени из number.
*/
ComplexNumber* complexRoot(const ComplexNumber number, const size_t n);


/**
 * @param n1 комплексное число.
 * @param n2 комплексное число.
 * @return Возвращает сумму n1 и n2.
*/
ComplexNumber sum(const ComplexNumber n1, const ComplexNumber n2);


/**
 * @param minuend комплексное число.
 * @param subtrahend комплексное число.
 * @return Возвращает разность minuend и subtrahend.
*/
ComplexNumber subtract(const ComplexNumber minuend, const ComplexNumber subtrahend);


/**
 * @param n1 комплексное число.
 * @param n2 комплексное число.
 * @return Возвращает произведение n1 и n2.
*/
ComplexNumber mult(const ComplexNumber n1, const ComplexNumber n2);


/**
 * @param dividend комплексное число.
 * @param divisor комплексное число.
 * @return Возвращает частное dividend и divisor.
*/
ComplexNumber divide(const ComplexNumber dividend, const ComplexNumber divisor);


/**
 * @param n1 комплексное число.
 * @param n2 комплексное число.
 * @return Возвращает true, если n1 и n2 равны, иначе false.
*/
bool complexCmp(const ComplexNumber n1, const ComplexNumber n2);

#endif
