/**
 * @file tictactoe.h
 * @author Mihir Rajdeep
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __TICTACTOE_H__
#define __TICTACTOE_H__

/**
 * @brief To Check Game Status(Whether A Player has won the Game, The Game ended in a draw or if the Game is still in progress.)
 * 
 * @param square 
 * @return int 
 */
int checkresult(char square[]);

/**
 * @brief To Display TicTacToe Board
 * 
 * @param square 
 */

void displayboard(char square[]);



#endif  