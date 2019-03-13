#include <stdio.h>

int main()
{
        int SIZE = 9;

        int puzzle[SIZE][SIZE];

        for(int i = 0; i < SIZE; i++){
                for(int j = 0; j < SIZE; j++){
                        puzzle[i][j] = rand() % 10;                        
                }
        }

        for(int i = 0; i < SIZE; i++){
                for(int j = 0; j < SIZE; j++){
                        printf("%d ", puzzle[i][j]);
                }
                printf("\n");
        }
}

