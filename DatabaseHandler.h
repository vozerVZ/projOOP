#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

using namespace std;
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

class DatabaseHandler
{
    public:
        int getWorkdays(int month);
        int getDaysCount(int month);
        int getOtherMontlyCosts(int month, const string& city,int age);
        int getWorkdayCost(const string& city, const string& homeAddress, const string& institute);
        int getWeekandCost(const string& city, const string& cinema, const string& coffee);
    private:
        void readcsv(const string& filename, vector<vector<string>>& arr);
        int getHomeFoodCost(const string& _Get_const_void_pointer_type);
        int getCinemaCost(const string& city, const string& cinema);
        int getCoffeeCost(const string& city, const string& coffee);
        int getInstituteDinnerCost(const string& city, const string& institute);
        int getTransportCost(const string& city, const string& homeAddress,const string& institute);
};

#endif
