#pragma once
#include <iostream>
#include <fstream>

class Loading{
private:
    std::ifstream fstream;
public:
    Loading(const char* _loadFilePath);
    ~Loading();

    int LoadInt();
    float LoadFloat();
    bool LoadBool();
    std::string LoadString();
};