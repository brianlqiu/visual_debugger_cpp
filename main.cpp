#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    // Usage check
    if (argc != 2) {
        std::cerr << "Usage: ./visual_debugger <cpp_file>" << std::endl;
        return 1;
    }

    // Opening input
    std::cout << "Attemping to open " << *(argv + 1) << "..." << std::endl;
    std::ifstream input(*(argv + 1), std::ios::in);
    if (!input.good()) {
        std::cerr << "Error: " << *(argv + 1) << " is not a valid file"
                  << std::endl;
        return 2;
    }
    std::cout << *(argv + 1) << " was opened successfully" << std::endl;

    // Creating output
}