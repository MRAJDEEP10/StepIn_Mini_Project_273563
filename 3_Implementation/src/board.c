/**
 * @file board.c
 * @author Mihir Rajdeep
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "tictactoe.h"

/**
 * @brief To Display TicTacToe Board
 * 
 * @param square 
 */

void board(char square[])
{
    
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}