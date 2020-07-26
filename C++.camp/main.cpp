//
//  main.cpp
//  C++.camp
//
//  Created by 柳川万結 on 2020/07/23.
//  Copyright © 2020 柳川万結. All rights reserved.
//

#include <iostream>
using namespace std ;
int main()
{
    // insert code here...
    cout << "Hello, World!\n" << "Good morning" << endl;
    int x = 3; //1
    char firstInitial = 'M';
    double hi = 0.70;
    bool isbool = true;
    string st = "Good afternoon";
    string question = "What is your name\n ";
    string st2 ;
    cout << question ;
    cin >> st2;
    cout << x << st2;
    if(hi >= 5)
    { cout << "high is grater than 5";
    }
    else if (hi >= 1)
    {cout << "high is between 1 and 4";
    }
    else
    {cout << "high is less than 1";
    }
    while(x >= 1){
        cout << "x is grater than 1";
        x--;
    }
    while(x<= 10){//2
        cout << " x is big";
        x++;//3
    }
    for(int i=0;i <= 10; i++){
        cout << i<< endl;
    }
    for(int m = 2; m<= 10; m++){
        cout << m << endl ;
    }
    return 0;
    
}


