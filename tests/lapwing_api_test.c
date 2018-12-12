#include "unity.h"
#include "lapwing/lapwing.h"

void setUp(void)
{

}

void tearDown(void)
{

}

void test_lw_placeholder(void)
{
	int x = 1;
	
	TEST_ASSERT_EQUAL(x, lw_placeholder(x));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_lw_placeholder);

	return UNITY_END();
}
