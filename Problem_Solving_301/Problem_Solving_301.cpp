// Problem_Solving_301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Problem_Solving_301.h"
using namespace std;

void ReadUser(string& UserName, string& Password)
{
    cout << "Enter User Name Please : ";
    cin >> UserName;

    cout << "Enter Password Please : ";
    cin >> Password;
}
string CheckLoginUser(string USN, string PWS)
{
    return (USN == "Hakim" && PWS == "Ghanadi7704") ? "Welcome Sir " + USN
        : "Wrong UserName OR PassWord Try Again PLese \n";
}

int main()
{
    string USNData, PWSData;
    ReadUser(USNData, PWSData);
    cout << CheckLoginUser(USNData, PWSData) << endl;

    return 0;
}

