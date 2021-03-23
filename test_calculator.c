#include<stdio.h>
#include "unity/unity.h"
#include "header.h"

static complex_number test_num1;
static complex_number test_num2;
static complex_number expected_result={0,0};
/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_sum(void)
{
    /**
     * @brief Test Case 1
     * 
     */
    test_num1.real=3;
    test_num1.img=5;
    test_num2.real=2;
    test_num2.img=4;
    
    TEST_ASSERT_EQUAL(SUCCESS,sum(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(5,expected_result.real);
    TEST_ASSERT_EQUAL(9,expected_result.img);

    /**
     * @brief Test Case 2
     * 
     */
    test_num1.real=6;
    test_num1.img=4;
    test_num2.real=-1;
    test_num2.img=4;
    
    TEST_ASSERT_EQUAL(SUCCESS,sum(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(5,expected_result.real);
    TEST_ASSERT_EQUAL(8,expected_result.img);

}
void test_difference(void)
{
    /**
     * @brief Test Case 1
     * 
     */
    test_num1.real=3;
    test_num1.img=5;
    test_num2.real=2;
    test_num2.img=4;
    
    TEST_ASSERT_EQUAL(SUCCESS,difference(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(1,expected_result.real);
    TEST_ASSERT_EQUAL(1,expected_result.img);

    /**
     * @brief Test Case 2
     * 
     */
    test_num1.real=7;
    test_num1.img=1;
    test_num2.real=8;
    test_num2.img=4;
    
    TEST_ASSERT_EQUAL(SUCCESS,difference(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(-1,expected_result.real);
    TEST_ASSERT_EQUAL(-3,expected_result.img);
}
void test_multiply(void)
{
    /**
     * @brief Test Case 1
     * 
     */
    test_num1.real=3;
    test_num1.img=5;
    test_num2.real=2;
    test_num2.img=4;
    
    TEST_ASSERT_EQUAL(SUCCESS,multiply(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(-14,expected_result.real);
    TEST_ASSERT_EQUAL(22,expected_result.img);

    /**
     * @brief Test Case 2
     * 
     */
    test_num1.real=9;
    test_num1.img=3;
    test_num2.real=10;
    test_num2.img=12;
    
    TEST_ASSERT_EQUAL(SUCCESS,multiply(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(54,expected_result.real);
    TEST_ASSERT_EQUAL(138,expected_result.img);

}
void test_division(void)
{
    /**
     * @brief Test Case 1
     * 
     */
    test_num1.real=-6;
    test_num1.img=-6;
    test_num2.real=-6;
    test_num2.img=6;
    
    TEST_ASSERT_EQUAL(SUCCESS,division(test_num1,test_num2,&expected_result));
    TEST_ASSERT_EQUAL(0,expected_result.real);
    TEST_ASSERT_EQUAL(1,expected_result.img);

    /**
     * @brief Test Case 2
     * 
     */

    test_num1.real=0;
    test_num1.img=0;
    test_num2.real=0;
    test_num2.img=0;
    
    TEST_ASSERT_EQUAL(ERROR_DIV_BY_ZERO,division(test_num1,test_num2,&expected_result));
}

int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_sum);
    RUN_TEST(test_difference);
    RUN_TEST(test_multiply);
    RUN_TEST(test_division);
    /* Close the Unity Test Framework */
    return UNITY_END();
}