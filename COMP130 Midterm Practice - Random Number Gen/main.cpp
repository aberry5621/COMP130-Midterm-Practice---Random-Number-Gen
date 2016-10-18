//
//  main.cpp
//  COMP130 Midterm Practice - Random Number Gen
//
//  Created by ax on 10/17/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#define prog 2

#if (prog==2)

#include<iostream>
#include<ctime>
using namespace std;

int main() {
    
    cout << "Less Random but Still So. \n";
    
    // generate random numbers between 10 and 100
    
    // random seed
    srand(time(0));
    
    // boundaries
    int l_bound = 10;
    int u_bound = 100;
    
    cout << "Loop attempt at 10 random numbers between 10 and 100: " << endl;
    
    for (int i = 0; i < 100; i++) {
        
        // lb + r % (ub-lb+1)
        int rand_num_btwn_10_100 = l_bound + rand() % (u_bound - l_bound + 1);
        
        cout << "time: " << time(0) << " rand: " << rand_num_btwn_10_100 << endl;
    }
    
    return 0;
}







































#elif (prog==1)

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    cout << "So Random!\n";
    
    // seed
    srand(time(0));
    
    int rand_1 = rand();
    
    cout << rand_1 << endl;
    
    cout << rand_1 << endl;
    
    cout << rand_1 << endl;
    
    cout << rand_1 << endl;
    
    
    
    
    
    
    
    return 0;
}


#endif

