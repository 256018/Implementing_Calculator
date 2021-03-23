#ifndef __CALCULATOR__
#define __CALCULATOR__

typedef struct complex_number
{
    /* data */
    int real,img;
}complex_number;

typedef enum error_t
{
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;
/**
 * @brief Addition of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error_t sum(complex_number num1,complex_number num2,complex_number* complex_sum);

/**
 * @brief Subtraction of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error_t difference(complex_number num1,complex_number num2,complex_number* complex_diff);

/**
 * @brief Multiplication of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error_t multiply(complex_number num1,complex_number num2,complex_number* complex_mul);

/**
 * @brief Division of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error_t division(complex_number num1,complex_number num2,complex_number* complex_div);


#endif