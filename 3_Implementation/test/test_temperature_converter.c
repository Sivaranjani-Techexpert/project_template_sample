#include "unity.h"
#include "temperature_converter.h"

void setUp(void) {
    // Set up before each test case (optional)
}

void tearDown(void) {
    // Clean up after each test case (optional)
}

void test_celsius_to_fahrenheit(void) {
    TEST_ASSERT_EQUAL_FLOAT(77.0, celsius_to_fahrenheit(25.0));
    TEST_ASSERT_EQUAL_FLOAT(32.0, celsius_to_fahrenheit(0.0));
}

void test_fahrenheit_to_celsius(void) {
    TEST_ASSERT_EQUAL_FLOAT(25.0, fahrenheit_to_celsius(77.0));
    TEST_ASSERT_EQUAL_FLOAT(0.0, fahrenheit_to_celsius(32.0));
}

int main(void) {
    UNITY_BEGIN();
    
    RUN_TEST(test_celsius_to_fahrenheit);
    RUN_TEST(test_fahrenheit_to_celsius);
    
    return UNITY_END();
}

