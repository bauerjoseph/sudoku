#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Global Variables
int SIZE = 9;

// Function Prototypes
void printPuzzle(int arr[SIZE][SIZE]);
void initializePuzzle(int arr[SIZE][SIZE]);
int  returnValidNumber(int arr[SIZE][SIZE], int x, int y);

int main()
{
        int puzzle[SIZE][SIZE];

        initializePuzzle(puzzle);

        for(int i = 0; i < SIZE; i++){
                for(int j = 0; j < SIZE; j++){
                        puzzle[i][j] =  returnValidNumber(puzzle, j, i);
                }
        }

        printPuzzle(puzzle);
}

// Function Definitions
void initializePuzzle(int puzzle[SIZE][SIZE])
{
        for(int i = 0; i < SIZE; i++){
                for(int j = 0; j < SIZE; j++){
                        puzzle[i][j] = 0;
                }
        }
}

void printPuzzle(int puzzle[SIZE][SIZE])
{
        for(int i = 0; i < SIZE; i++){
                for(int j = 0; j < SIZE; j++){
                        printf("%d ", puzzle[i][j]);
                }
                printf("\n");
        }
}

int returnValidNumber(int puzzle[SIZE][SIZE], int x, int y)
{
        int toReturn = -1;
        int index;
        int validNumbers[10] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

        // Numbers valid in current row
        for(int i = 0; i < SIZE; i++){
                index = puzzle[y][i];
                validNumbers[index] = 0;
        }

        bool found = false;

        for(int i = 0; i < 10; i++){
                if(!found && validNumbers[i] == 1){
                        toReturn = i;
                        found = true;
                }
        }

        return toReturn;
        //return rand() % (10 - 1) + 1;
}
