//
//  main.cpp
//  selection_sort
//
//  Created by Avi Schmookler on 9/8/23.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int i = 0;
    int j;
    int array[20] = {23, 34, 55, 77, 2, 5, 99, 12, 41, 754, 1, 25, 80, 30, 10, 27, 76, 79, 35, 85};
    int n = 20;
    int min_index;
    int transfer_variable;
    
    while (i < n - 1)
    {
        min_index = i;
        j = i + 1;
        while (j < n)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            };
            j += 1;
        };
        transfer_variable = array[i];
        array[i] = array[min_index];
        array[min_index] = transfer_variable;
        i += 1;
    };
    
    i = 1;
    
    while(i <= n)
    {
        if (i % 8 == 0)
        {
            std::cout << setw(10) << array[i] << "\n";
        }
        else
        {
            std::cout << setw(10) << array[i];
        };
        
        i += 1;
    }
}
