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
  char square1[9] = {'O','X','X','X','O','O','X','O','O' };
  TEST_ASSERT_EQUAL(1,checkresult(square1));
  char square5[9] ={ 'X','O','X','O','X','O','X','7','8'};
  TEST_ASSERT_EQUAL(1,checkresult(square5));
  
}

void test_checkplayer2win(void){
  char square2[9] = {'X','O','O','O','X','X','O','X','X'};
  TEST_ASSERT_EQUAL(1,checkresult(square2));
  char square6[9] = {'O','X','O','X','O','X','O','7','8'};
  TEST_ASSERT_EQUAL(1,checkresult(square6));
}

void test_checkdraw(void){
  char square3[9] = {'X','O','X','X','O','O','O','X','X'};
  TEST_ASSERT_EQUAL(0,checkresult(square3));
  char square7[9]= {'X','O','X','O','O','X','X','X','O'};
  TEST_ASSERT_EQUAL(0,checkresult(square7));
}

void test_activegame(void){
  char square4[9]={'X','2','3','4','5','6','O','8','X'};
  TEST_ASSERT_EQUAL(-1,checkresult(square4));
  char square8[9]={'X','2','X','4','O','X','O','8','9'};
  TEST_ASSERT_EQUAL(-1,checkresult(square8));
}