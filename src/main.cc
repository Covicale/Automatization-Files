#include "functions.h"

int main(){

    const int kDelay = 10000; //10000ms = 10s of refresh
    std::string str_path = "C:\\Users\\covicale\\Downloads";
    
    AutoSort folder1(str_path);
    folder1.PrintFiles();
        
}