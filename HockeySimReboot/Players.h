//
//  Players.h
//  HockeySimReboot
//
//  Created by GO on 9/12/14.
//  Copyright (c) 2014 GO. All rights reserved.
//

#ifndef __HockeySimReboot__Players__
#define __HockeySimReboot__Players__

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <random>
#include <unistd.h>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;
class Players
{
private:
    string PLYR_NAME;
public:
    string PLYR_POS;
    int PLYR_DESTAT;
    int PLYR_OFSTAT;
    int PLYR_OVR;
    float PLYR_DESPS, PLYR_DESPG, PLYR_OFSPS, PLYR_OFSPG;
    Players(string IN_PLYR_NAME);
    void SET_PLYR_OVR();
    void OUT_PLYR_NAME();
};

#endif /* defined(__HockeySimReboot__Players__) */
