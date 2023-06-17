#pragma once
#include <iostream>
#include <fstream>

class Saving{
private:
    std::ofstream fstream;
public:
    Saving(const char* _saveFilePath);
    ~Saving();

    void SaveInt(int _dataToSave);
    void SaveFloat(float _dataToSave);
    void SaveBool(bool _dataToSave);
    void SaveString(std::string _dataToSave);
    void SaveCString(char* _dataToSave);
};