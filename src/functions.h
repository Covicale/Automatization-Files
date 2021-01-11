#ifndef AUTOMATIZED_FILES
#define AUTOMATIZED_FILES

#include <string>     // std::string
#include <chrono>     // // std::chrono::seconds
#include <thread>     // std::this_thread::sleep_for
#include <vector>     // std::vector
#include <filesystem> // std::fs
#include <iostream>

namespace fs = std::filesystem;

class AutoSort{

  private:
    // VARIABLES
    std::vector<fs::path> files_ = {};
    fs::path folder_path_;
    const int kRefresh_delay_ = 10000;

    // FUNCTIONS
    std::vector<fs::path> GetFiles(); // Get all files and sort them -> 1. Directories 2. Files

  public:
    AutoSort() = default;
    AutoSort(std::string folder_path) {
      folder_path_ = fs::path(folder_path);
      files_ = GetFiles();
    };

    void PrintFiles() {
       for(auto& file: files_){
         std::cout << file << std::endl;
       }
    }

};

// The folder name is reserved in [0], other items are the file types that will go into the folder
const std::vector<std::string> kDoc_folder = {"Documentos", ".pdf", ".docx", ".txt"};         // Docs
const std::vector<std::string> kImages_folder = {"Imagenes", ".jpg", ".jpeg", ".png"};        // Images
const std::vector<std::string> kCompressed_folder = {"Archivos Comprimidos", ".zip", ".rar"}; // Compressed Files
const std::vector<std::string> kExe_folder = {"Ejecutables", ".exe"};                         // Executables

void Automatically_Sort(fs::path path, const int delay);

#endif