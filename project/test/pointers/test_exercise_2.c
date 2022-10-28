#include "stdbool.h"
#include "exercise_2.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_sanity(void){
    TEST_ASSERT(true);
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sanity);
    return UNITY_END();
}