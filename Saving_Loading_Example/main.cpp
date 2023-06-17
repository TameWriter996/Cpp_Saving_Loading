#include "Saving.h"
#include "Loading.h"

int main(){
    //Saves data to Save1.save
    Saving saving("Save1.save");
    saving.SaveInt(-100);
    saving.SaveFloat(10.5f);
    saving.SaveBool(true);
    saving.SaveString("Hi");
    saving.SaveCString("Hello");

    //Loads the data from Save1.save
    Loading loading("Save1.save");
    std::cout<<loading.LoadInt()<<std::endl;
    std::cout<<loading.LoadFloat()<<std::endl;
    std::cout<<loading.LoadBool()<<std::endl;
    std::cout<<loading.LoadString()<<std::endl;
    std::cout<<loading.LoadString()<<std::endl;
 
    return 0;
}