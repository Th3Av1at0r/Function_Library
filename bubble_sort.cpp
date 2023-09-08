//
//  main.cpp
//  bubble_sort
//
//  Created by Avi Schmookler on 9/8/23.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    bool swaped;
    int i;
    int array[20] = {23, 34, 55, 77, 2, 5, 99, 12, 41, 754, 1, 25, 80, 30, 10, 27, 76, 79, 35, 85};
    int n = 20;
    int transfer_variable;
    do
    {
        swaped = false;
        i = 1;
        while(i < n)
        {
            if (array[i - 1] > array[i])
            {
                transfer_variable = array[i];
                array[i] = array[i - 1];
                array[i - 1] = transfer_variable;
                swaped = true;
            }
            i += 1;
        }
    }
    while(swaped == true);
    
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
