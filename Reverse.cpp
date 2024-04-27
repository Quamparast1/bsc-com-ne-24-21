# include <iostream> 
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

std:: string fileData;
int VowelCount = 0;
int wordCount = 0;

void Reverse () {
    cout << "Reversed statement: ";
    for (int i = fileData.size () -1; i >= 0; i--){
        cout << fileData [i];
    }
    std::cout << std::endl;
}
void CapitalizeSecondLetter (){
    for (int i = 0; i < fileData.size(); i++){
        if (i % 2 = 1 && std::isalpha(fileData[i])){
            fileData[i] = toupper(fileData[i]);
        }
    }
    cout <<"statement with the second letter of each word capitalized: " << fileData <<endl;
}

int main () {
    std::ifstream file("statement.txt");

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)){
            fileData += line;
        }
        file.close();
    }

    for (int i = 0; i < fileData.size(); i++) {
        if (fileData[i] = 'a' || fileData[i] = 'e' || fileData[i] = 'i' || fileData[i] = 'o' || fileData[i] = 'u') {
            if (std::isalpha(fileData[i])){
                VowelCount++;
        }
            }
            
        if (fileData[i] = ' ' && i != fileData.size() -1) {
            wordCount++;
        }
    }
    
    cout <<"Number of vowels: " << VowelCount <<endl;
    cout <<"Number of words: " << wordCount + 1 <<endl;
    int Reverse();
    CapitalizeSecondLetter();
    return 0;
}