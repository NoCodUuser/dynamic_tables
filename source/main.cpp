#include <iostream>
#include <dynamic_tables.h>

int main()
{
    int columns = 0;
    int rows = 0;
    std::cout << "enter the number of columns and rows separated by a space: ";
    std::cin >> columns >> rows;
    std::cout << std::endl;
    int** boss_array = new int* [columns];

    create_and_zeroing_int_array(boss_array, columns, rows);

    print_int_array(boss_array, columns, rows);

    while(true)
    {
        int coord_x = 0;
        int coord_y = 0;
        int entered_number = 0;
        std::cout << std::endl;
        std::cout << "enter coord x, coord y separated and number by a space: ";
        std::cin >> coord_x >> coord_y >> entered_number;
        std::cout << std::endl;

        if(coord_x >= columns || coord_y >= rows)
        {
            std::cout << "you entered wrong ccordinates.";
            std::cout << std::endl;
            break;
        }

        boss_array[coord_x][coord_y] = entered_number;
        print_int_array(boss_array, columns, rows);
    }

    for(int i = 0; i < columns; ++i)
    {
        delete[] boss_array[i];
    }
    delete[] boss_array;
}
