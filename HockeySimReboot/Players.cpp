//
//  Players.cpp
//  HockeySimReboot
//
//  Created by GO on 9/12/14.
//  Copyright (c) 2014 GO. All rights reserved.
//

#include "Players.h"
using namespace std;
Players::Players(string IN_PLYR_Name)
{
    
   
    PLYR_NAME = IN_PLYR_Name;
    
}
void Players::SET_PLYR_OVR() //all of the algorithms to determine the stats
{
    
    PLYR_DESTAT= rand()% (99-70) + 70;
    PLYR_OFSTAT = rand()% (99-70) + 70;
    PLYR_OVR= (PLYR_OFSTAT + PLYR_DESTAT) / 2;
    PLYR_OFSPS = PLYR_OFSTAT / 10.0f;
    PLYR_DESPS = (PLYR_DESTAT / 10.0f)/5;
    PLYR_OFSPG = (PLYR_OFSPS / 2) / 2.25;
    PLYR_DESPG= (PLYR_DESPS / 2) / 2.25;
}
void Players::OUT_PLYR_NAME()
{
    cout << PLYR_NAME << endl;
}