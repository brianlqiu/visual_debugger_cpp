#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./visual_debugger <cpp_file>" << std::endl;
        return 1;
    }

    std::cout << "Attemping to open " << *(argv + 1) << std::endl;
    std::ifstream input;
    input.open(*(argv + 1), std::ios::in);
    if (!input.good()) {
        std::cerr << "Error: " << *(argv + 1) << " is not a valid file" << std::endl;
        return 2;
    }
}