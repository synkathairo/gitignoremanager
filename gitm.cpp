#include <iostream>
#include <fstream>
using namespace std;

ofstream parseFile() {
	ofstream gitignorefile;
	gitignorefile.open(".gitignore");
	return gitignorefile;
}

void addEntry(string newEntry) {
	ofstream gitignorefile = parseFile();
	gitignorefile << newEntry<<"\n";
	gitignorefile.close();
}

int main(int argc, char const *argv[])
{
	for (int i = 0; i<argc; i++) {
		if(strcmp(argv[i],"add")==0) {
			if(argv[i+1]!=nullptr) {
				addEntry(argv[i+1]);
			}
		}
	}
	return 0;
}