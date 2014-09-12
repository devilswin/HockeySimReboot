//
//  GM.h
//  HockeySimReboot
//
//  Created by GO on 9/12/14.
//  Copyright (c) 2014 GO. All rights reserved.
//

#ifndef __HockeySimReboot__GM__
#define __HockeySimReboot__GM__

#include <iostream>
#include "Teams.h"
#include <string>
#pragma once
using namespace std;
class GM:Teams
{
private:
    string GM_NAME;
public:
    GM(string USER_GM_NAME);
};
#endif /* defined(__HockeySimReboot__GM__) */
