//
//  readPlayerName.cpp
//  HockeySimReboot
//
//  Created by GO on 9/12/14.
//  Copyright (c) 2014 GO. All rights reserved.
//

#include "readPlayerName.h"
using namespace std;
void readPlayerName(string& USER_IN)//will read from a file of first and last names
{
    mt19937 rand_engine(time(nullptr));
    string line;
    vector<string> plFname;
    vector<string> plLname;
    
    ifstream fnameFile("PlayersFname.txt");
    
    if (fnameFile.is_open() )
    {
        while (getline(fnameFile,line))
            plFname.push_back(line);
        fnameFile.close();
    }
    ifstream lnameFile("PlayersLname.txt");
    if (lnameFile.is_open())
    {
        while (getline(lnameFile,line))
            plLname.push_back(line);
        lnameFile.close();
    }
    uniform_int_distribution<int> fname_rand(0, plFname.size());
    uniform_int_distribution<int> lname_rand(0, plLname.size());
  
         int fname = fname_rand(rand_engine);
         int lname = lname_rand(rand_engine);
    USER_IN =plFname[fname] + " " + plLname[lname];
    
}