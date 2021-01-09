#include <iostream>
#include <chrono>  // // std::chrono::seconds
#include <thread> // std::this_thread::sleep_for
#include <fstream>

int main(){
    
    const int kDelay = 10000; //10000ms = 10s of refresh

    while(true){
        
        std::cout << "ola" << std::endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
        
        // bool new_file_detected = CheckNewFiles(path, delay); // if there's new file it will return true
    }
    
}