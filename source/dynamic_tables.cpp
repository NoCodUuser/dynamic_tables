#include <iostream>
#include <dynamic_tables.h>

void create_and_zeroing_int_array(int** boss_array, int columns, int rows)
{
    for(int i = 0; i < columns; ++i)
    {
        boss_array[i] = new int[rows];

        for(int j = 0; j < rows; ++j)
        {
            boss_array[i][j] = 0;
        }
    }
}

void print_int_array(int** boss_array, int columns, int rows)
{
    for(int j = rows - 1; j > -1; --j)
    {
        for(int i = 0; i < columns; ++i)
        {
            std::cout << boss_array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

