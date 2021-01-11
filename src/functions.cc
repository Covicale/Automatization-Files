#include "functions.h"

std::vector<fs::path> AutoSort::GetFiles(){

    std::vector<fs::path> only_folders = {};
    std::vector<fs::path> only_files = {};


    for (auto& file: fs::directory_iterator(folder_path_)){
        if (fs::is_directory(file)){
            only_folders.emplace_back(file);
        }else{
            only_files.emplace_back(file);
        }
    }

    only_folders.insert(only_folders.end(), only_files.begin(), only_files.end());

    return only_folders;
}


void Automatically_Sort(fs::path path, const int delay){

    //ORDENARLO POR EXTENSION 1. SIN EXTENSION -> 2. CON EXTENSION

    for (auto& file: fs::directory_iterator(path)){
        std::cout << fs::path(file) << " + " << fs::path(file).extension() << std::endl;
    }

}