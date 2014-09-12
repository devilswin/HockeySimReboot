//
//  main.cpp
//  HockeySimReboot
//
//  Created by GO on 9/12/14.
//  Copyright (c) 2014 GO. All rights reserved.
//

#include <iostream>
#include "Players.h"
#include <time.h>
#include <string>

int main()
{
    srand(time(NULL));
    string USER_IN;
    cout << "What do you want the name to be?" << endl;
    cin >> USER_IN;
    
    Players TestPlayer(USER_IN);
    return 0;
}

