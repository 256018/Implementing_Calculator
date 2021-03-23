#include "header.h"
/**
 * @brief Addition of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @param complex_sum 
 * @return error_t 
 */
error_t sum(complex_number num1,complex_number num2,complex_number* complex_sum)
{
    complex_sum->real=num1.real+num2.real;
    complex_sum->img=num1.img+num2.img;
    return SUCCESS;
}

/**
 * @brief Defination of difference function.
 * 
 * @param num1 
 * @param num2 
 * @param complex_diff
 * @return error_t 
 */
error_t difference(complex_number num1,complex_number num2,complex_number* complex_diff)
{
    complex_diff->real=num1.real-num2.real;
    complex_diff->img=num1.img-num2.img;
    return SUCCESS;
}

/**
 * @brief Defination of multiply function
 * 
 * @param num1 
 * @param num2 
 * @param complex_mul
 * @return error_t
 */
error_t multiply(complex_number num1,complex_number num2,complex_number* complex_mul)
{
    complex_mul->real = num1.real*num2.real - num1.img*num2.img;
    complex_mul->img = num1.img*num2.real + num1.real*num2.img;
    return SUCCESS;
}

/**
 * @brief Defination of division function.
 * 
 * @param num1 
 * @param num2 
 * @param complex_div
 * @return error_t 
 */
error_t division(complex_number num1,complex_number num2,complex_number* complex_div)
{
    /**
     * @brief Checking for Divide by zero condition.
     * 
     */
    if(num2.real==0 || num2.img==0)
    {
        return ERROR_DIV_BY_ZERO;
    }
    int x = num1.real*num2.real + num1.img*num2.img;
    int y = num1.img*num2.real - num1.real*num2.img;
    int z = num2.real*num2.real + num2.img*num2.img;
    complex_div->real=x/z;
    complex_div->img=y/z;
    return SUCCESS;
}
