
#include "unity.h"
#include "unity_internals.h"
#include "game.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_game(void)
{
 TEST_PASS_MESSAGE("PASS");
}
void test_game2(void)
{
  TEST_PASS_MESSAGE("PASS");
}
void test_game3(void)
{
  TEST_PASS_MESSAGE("PASS");
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
 UNITY_BEGIN();
{

RUN_TEST(test_game);
RUN_TEST(test_game2);
RUN_TEST(test_game3);
}
  /* Close the Unity Test Framework */
  return UNITY_END();
}
