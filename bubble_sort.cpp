//
//  main.cpp
//  bubble_sort
//
//  Created by Avi Schmookler on 9/8/23.
//

#include <iostream>



int main(int argc, const char * argv[]) {
    bool swaped;
    int i;
    int array[10] = {7, 8, 9, 67, 4, 5, 23, 1, 99, 45};
    int n = 10;
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
    
    i = 0;
    
    while(i < n)
    {
        std::cout << array[i] << "\n";
        
        i += 1;
    }
}
