#include <iostream>
#include <dynamic_tables.h>
#include <string>

int main()
{
    int** boss_array = nullptr;
    int** boss_array_2 = nullptr;
    int** intersection_array = nullptr;

    int columns = 0;
    int rows = 0;
    int columns_2 = 0;
    int rows_2 = 0;
    int final_columns = 0;
    int final_rows = 0;

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

    final_columns = size_of_intersection_array(columns, columns_2);
    final_rows = size_of_intersection_array(rows, rows_2);

    create_and_zeroing_int_array(boss_array_2, columns_2, rows_2);
    print_int_array(boss_array_2, columns_2, rows_2);

    while(true)
    {
        int coord_x = 0;
        int coord_y = 0;
        int entered_number = 0;
        std::string array_number_str;

        std::cout << std::endl;
        std::cout << "enter number of array, coord x, coord y separated and number by a space: ";
        std::cin >> array_number_str;

        if(array_number_str == "summ")
        {
            break;
        }

        std::cin >> coord_x >> coord_y >> entered_number;
        std::cout << std::endl;

        int array_number = std::stoi(array_number_str);

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

    create_and_zeroing_int_array(intersection_array, final_columns, final_rows);

    int summ = 0;

    for(int i = 0; i < final_columns; ++i)
    {
        for(int j = 0; j < final_rows; ++j)
        {
            intersection_array[i][j] = boss_array[i][j] + boss_array_2[i][j];
            summ += intersection_array[i][j];
        }
    }
    std::cout << std::endl;
    print_int_array(intersection_array, final_columns, final_rows);
    std::cout << std::endl << summ;

    delete_array(boss_array, columns);
    delete_array(boss_array_2, columns_2);
    delete_array(intersection_array, final_columns);
}


