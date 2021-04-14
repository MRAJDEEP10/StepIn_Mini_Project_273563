#include "unity.h"
#include "tictactoe.h"


/* Modify these two lines according to the project */

#define PROJECT_NAME    "TICTACTOE"

void test_checkwin(void);




/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_checkwin);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_checkwin(void){
  TEST_ASSERT_EQUAL(1, checkwin('O','X','X','O','X','O','X','O','O'));
  TEST_ASSERT_EQUAL(0,test_checkwin('O','X','O','X','X','O','X','O','X'));

}

