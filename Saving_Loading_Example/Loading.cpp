#include "Loading.h"

Loading::Loading(const char* _loadFilePath){
    //Opens the save file given.
    fstream.open(_loadFilePath);

    //Checks to see if the file opened.
    if(!fstream){
        std::cout<<"Could not open file."<<std::endl;
    }
}

Loading::~Loading(){
    //Closes file on destruction *IMPORTANT*
    fstream.close();
}

//Loads an int.
int Loading::LoadInt(){
    char* line;
    fstream>>line;
    return std::stoi(line);
}

//Loads a float.
float Loading::LoadFloat(){
    char* line;
    fstream>>line;
    return std::stof(line);
}

//Loads a bool.
bool Loading::LoadBool(){
    char line[255];
    fstream>>line;
    //Checks to see if the value is 1 ie true or 0 ie false.
    if(line[0] == '1'){
        return true;
    }
    else{
        return false;
    }
}

//Loads a string NOTE* can not load a string with spaces.
std::string Loading::LoadString(){
    char* line;
    fstream>>line;
    return line;
}