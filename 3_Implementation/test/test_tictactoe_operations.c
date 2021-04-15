#include "unity.h"
#include "tictactoe.h"


/* Modify these two lines according to the project */

#define PROJECT_NAME    "TICTACTOE"

void test_checkplayer1win(void);  //To test cases for Player1 Win
void test_checkplayer2win(void);  //To test cases for Player2 Win
void test_checkdraw(void);        //To test cases for draw
void test_activegame(void);       // To test cases for game which are in progress.




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
  RUN_TEST(test_checkplayer1win);
  RUN_TEST(test_checkplayer2win);
  RUN_TEST(test_checkdraw);
  RUN_TEST(test_activegame);
  
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}


/**
 * @brief To check the Test cases
 * 
 */
void test_checkplayer1win(void){
  char square1[10] = {'0','O','X','X','X','O','O','X','O','O' };
  TEST_ASSERT_EQUAL(1,checkresult(square1));
  
}

void test_checkplayer2win(void){
  char square2[10] = {'0','X','O','O','O','X','X','O','X','X'};
  TEST_ASSERT_EQUAL(1,checkresult(square2));
}

void test_checkdraw(void){
  char square3[10] = {'0','X','O','X','X','O','O','O','X','X'};
  TEST_ASSERT_EQUAL(0,checkresult(square3));
}

void test_activegame(void){
  char square4[10]={'0','X','2','3','4','5','6','O','8','X'};
  TEST_ASSERT_EQUAL(-1,checkresult(square4));
}