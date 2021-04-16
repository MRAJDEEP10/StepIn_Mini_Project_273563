/**
 * @file checkresult.c
 * @author Mihir Rajdeep
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "tictactoe.h" 

/**
 * @brief To Check Game Status(Whether A Player has won the Game, The Game ended in a draw or if the Game is still in progress.)
 * 
 * @param square 
 * @return int 
 */
int checkresult(char square[])
{
    if (square[0] == square[1] && square[1] == square[2])
        return 1;
        
    else if (square[3] == square[4] && square[4] == square[5])
        return 1;
        
    else if (square[6] == square[7] && square[7] == square[8])
        return 1;
        
    else if (square[0] == square[3] && square[3] == square[6])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[0] == square[4] && square[4] == square[8])
        return 1;
        
    else if (square[2] == square[4] && square[4] == square[6])
        return 1;
        
    else if (square[0] != '1' && square[1] != '2' && square[2] != '3' &&
        square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6] 
        != '7' && square[7] != '8' && square[8] != '9')

        return 0;
    else
        return  - 1;
}