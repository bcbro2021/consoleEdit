#include <iostream>
#include <fstream>

void print(std::string text){
	std::cout << text << "\n";
}
std::string input(std::string text){
	std::string inputVal;
	std::cout << text;
	std::cin >> inputVal;
	return inputVal;
}

void createAndWrite(std::string filename,std::string text){
    //writing file
    std::ofstream myFile(filename);
    myFile << text << "\n";
    myFile.close();
}
void write(std::string filename,std::string text){
    //writing file
    std::ofstream writeFile;
    writeFile.open(filename, std::ios_base::app);
    writeFile << text << "\n";
    writeFile.close();
}