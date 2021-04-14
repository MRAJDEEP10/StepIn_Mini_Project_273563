/**
 * @file main.c
 * @author Mihir Rajdeep (you@domain.com)
 * @brief TicTacToe Game in C Language
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "tictactoe.h"

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };



int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        displayboard(square);
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  \n", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move \n Play your Turn Again\n\n\n\n");

            player--;
        }
        i = checkresult(square);

        player++;
    }while (i ==  - 1);
    
    displayboard(square);
    
    if (i == 1)
        printf("==>\aPlayer %d win \n\n\n\n", --player);
    else
        printf("==>\aGame draw\n\n\n\n");

    

    return 0;
}

