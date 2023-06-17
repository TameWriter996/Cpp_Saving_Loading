#include "Saving.h"

Saving::Saving(const char* _saveFilePath){
    //Opens the save file given.
    fstream.open(_saveFilePath);

    //Checks to see if the file opened.
    if(!fstream){
        std::cout<<"Error: file could not be opened"<<std::endl;
    }
}

Saving::~Saving(){
    //Closes file on destruction *IMPORTANT*
    fstream.close();
}

//Saves a int.
void Saving::SaveInt(int _dataToSave){
    fstream<<_dataToSave<<std::endl;
}

//Saves a float.
void Saving::SaveFloat(float _dataToSave){
    fstream<<_dataToSave<<std::endl;
}

//Saves a bool.
void Saving::SaveBool(bool _dataToSave){
    fstream<<_dataToSave<<std::endl;
}

//Saves a string.
void Saving::SaveString(std::string _dataToSave){
    fstream<<_dataToSave<<std::endl;
}

//Saves the data at a string pointer.
void Saving::SaveCString(char* _dataToSave){
    fstream<<_dataToSave<<std::endl;
}