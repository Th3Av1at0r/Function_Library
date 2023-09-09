//
//  main.cpp
//  discount
//
//  Created by Avi Schmookler on 9/8/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double total;
    
    cout << "What is the total?\n";
    
    cin >> total;
    
    if (total < 50)
    {
        total = total * .95;
    }
    else if (total < 100 && total > 50)
    {
        total = total * .90;
    }
    else if (total >= 100)
    {
        total = total * .85;
    };
    
    cout << "\nYour discounted total is: " << total;
}
