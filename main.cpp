#include "lib.h"
using namespace std;

int main(){
	//variables
	bool run = true;
	string result;
	string text;

	print(" ______  _______   _______  _______");
	print("|  ____||  _    | |__   __||__   __|");
	print("| |____ | | |   |    | |      | |");
	print("|  ____|| | |   |    | |      | |");
	print("| |____ | |_|   |  __| |__    | |");
	print("|______||_______| |_______|   |_|");
	print("\n");
	while(run){
		text = input("Edit: ");
		result += text + "\n";
		if (text == "$save"){
			string filename = input("file name: ");
			createAndWrite(filename, result);
			print("File Saved");
			break;
		}
		else if(text == "$exit"){
			print("\n");
			print("Deleted Data!");
			print("\n");
			break;
		}
	}
	return 0;
}