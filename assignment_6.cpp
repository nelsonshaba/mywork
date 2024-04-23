#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype> 

using namespace std;


int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    
    for (char ch : str) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    
    return count;
}

int countWords(const string& str) {
    stringstream ss(str);
    string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    
    return count;
}


string Reverse(const string& str) {
    string reversedStr(str.rbegin(), str.rend());
    return reversedStr;
}


string capitalizeSecondLetter(const string& str) {
    stringstream ss(str);
    string word;
    string result;
    bool isFirst = true;
    
    while (ss >> word) {
        if (!isFirst) {
            if (word.length() > 1) {
                word[1] = toupper(word[1]);
            }
        }
        isFirst = false;
        result += word + " ";
    }
    
   
    if (!result.empty()) {
        result.pop_back();
    }
    
    return result;
}

int main() {
    
    ifstream inputFile("textfile.txt");

    if (!inputFile) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    string fileData;
    getline(inputFile, fileData);

    inputFile.close();

    cout << "File contents: " << fileData << endl;

    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    string reversedData = Reverse(fileData);
    cout << "Reversed statement: " << reversedData << endl;

    string capitalizedData = capitalizeSecondLetter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedData << endl;

    return 0;
}
