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
#include "readPlayerName.h"
int main()
{
    srand(time(NULL));
    //mt19937 rand_engine(time(nullptr));
    vector<Players> TestPlayer;
    for (int i = 0; i < 18; i++)
    {
        string USER_IN;
        readPlayerName(USER_IN);
        Players ForPlayer(USER_IN);
        TestPlayer.push_back(USER_IN);
        TestPlayer[i].OUT_PLYR_NAME();
        cout << TestPlayer[i].PLYR_OVR << endl;
    }
    
    return 0;
}

