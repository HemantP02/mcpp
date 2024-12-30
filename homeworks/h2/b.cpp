#include <iostream>
#include <string>
#include <cstdlib>
#include <regex>

int main(int argc, char* argv[]){
    // program name
    std::cout << "task_2" << std::endl;

    // check if exactly 2 arguments are provided
    if (argc != 3){
        std::cerr << "Error: Exactly two arguments are required." << std::endl;
        return 1;
    }
    // regular expression to validate the filename format "<INT>.<EXT>"
    std::regex filename_regex(R"((\d+)\.(\w+))");
    std::smatch match1, match2;

    std::string file1 = argv[1];
    std::string file2 = argv[2];

    //validate the filenames
    if (!std::regex_match(file1, match1, filename_regex) || !std::regex_match(file2, match2, filename_regex)){
        std::cerr << "Error: Invalid filename format." << std::endl;
        return 1;
    }
    // extract values from filename
    int num1 = std::stoi(match1[1]);
    int num2 = std::stoi(match2[1]);
    std::string ext1 = match1[2];
    std::string ext2 = match2[2];

    // process based on extension
    if (ext1 == "txt" && ext2 == "txt"){
        double mean = (num1 + num2)/2.0;
        std::cout << "Mean value: " << mean << std::endl;
    } else if (ext1 == "png" && ext2 =="png"){
        int sum = num1 + num2;
        std::cout << "Sum: " << sum << std::endl;
    } else if (ext1 == "txt" && ext2 == "png"){
        if (num2 == 0){
            std::cerr << "Error: Division by zero." << std::endl;
            return 1;
        }
        int modulo = num1 % num2;
        std::cout << "Modulo: " << modulo << std::endl;

    } else {
        std::cerr << "Error: Unsupported file extension." << std::endl;
        return 1;
    }
    
        
    return 0;
    



}
