#include <iostream>
#include <dynamic_tables.h>

int main()
{
    int** boss_array = nullptr;
    int** boss_array_2 = nullptr;

    int columns = 0;
    int rows = 0;
    int columns_2 = 0;
    int rows_2 = 0;

// первый массив
    std::cout << "create your firs array!" << std::endl;
    std::cout << "enter number of columns and rows separated by a space: ";
    std::cin >> columns >> rows;
    std::cout << std::endl;

    create_and_zeroing_int_array(boss_array, columns, rows);
    print_int_array(boss_array, columns, rows);

// второй массив
    std::cout  << std::endl << "create your second array!" << std::endl;
    std::cout << "enter number of columns and rows separated by a space: ";
    std::cin >> columns_2 >> rows_2;
    std::cout << std::endl;


    create_and_zeroing_int_array(boss_array_2, columns_2, rows_2);
    print_int_array(boss_array_2, columns_2, rows_2);


    while(true)
    {
        int coord_x = 0;
        int coord_y = 0;
        int entered_number = 0;
        int array_number = 0;

        std::cout << std::endl;
        std::cout << "enter number of array, coord x, coord y separated and number by a space: ";
        std::cin >> array_number >> coord_x >> coord_y >> entered_number;
        std::cout << std::endl;

        if(array_number == 1)
        {
            boss_array[coord_x][coord_y] = entered_number;
        }
        else if(array_number == 2)
        {
            boss_array_2[coord_x][coord_y] = entered_number;
        }

        print_int_array(boss_array, columns, rows);
        std::cout << std::endl;
        print_int_array(boss_array_2, columns_2, rows_2);

    }
// сделать функцию удаление массива
    for(int i = 0; i < columns; ++i)
    {
        delete[] boss_array[i];
    }
    for(int i = 0; i < columns_2; ++i)
    {
        delete[] boss_array_2[i];
    }
    delete[] boss_array;
    delete[] boss_array_2;
}
