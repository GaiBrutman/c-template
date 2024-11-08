#include <mymath/add.h>
#include <unity.h>

void test_add_sanity(void) {
    TEST_ASSERT_EQUAL_UINT32(3, add(1, 2));
}

void test_add_big_number(void) {
    TEST_ASSERT_EQUAL_UINT32(1, add(0xffffffff, 2));
}

void setUp(void) {}
void tearDown(void) {}

int main(void) {
    UnityBegin(__FILE__);

    RUN_TEST(test_add_sanity);
    RUN_TEST(test_add_big_number);

    return (UnityEnd());
}
