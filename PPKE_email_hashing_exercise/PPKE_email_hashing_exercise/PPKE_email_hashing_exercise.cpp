#include <iostream>
#include <fstream>
#include <list>
#include <set>
#include <string>
#include <map>
#include <iterator>

using namespace std;

class UserIOManager {
private:
    string message;
    string encryptedOutput;

public:
    
    string userIoMessage() {
        setMessage();
    }
    
    string getMessage() {
        return message;
    }

    void setMessage() {
        getline(cin, message);
    }

    string getEncryptedMessage() {
        return encryptedOutput;
    }

    void setEncryptedMessage(string messageHash) {
        encryptedOutput = messageHash;
    }

};


class EnigmaEncryptionEngine {
private:
    set<map<char, int>> alphaNumericalCypher;
    set<map<int, int>> numericalEncryptionCypher;
    set<map<int, int>> intermediateCypher;
    set<map<int, set<char>>> mainCypher;

public:
    set<map<char, int>> getAlphaNumericalCypher() {
        
    }

    void setAlphaNumericalCypher() {

    }

    set<map<int, int>> getNumericalEncryptionCypher(){

    }

    void encodeNumericalEncryptionCypher(){

    }

    set<map<int, set<char>>> getMainCypher() {

    }

    void setMainCypher() {

    }


};


class FileIOManager {
public:
    set<map<char, int>> getEncryptionCypherFromFile() {

        ifstream primaryCypher;
        primaryCypher.open("./CypherTables/alphanumericalCypherTable.csv");
        set<map<char, int>> primaryEncryptionCypher;

        while (primaryCypher.good()) {
            map<char, int> cypherPair;
            string cypherPairString;
            getline(primaryCypher, cypherPairString);

            try {
                char alphabeticalValue = cypherPairString[0];
                int numericalValue = stoi(cypherPairString.substr(2, 2));
                cypherPair.insert(pair<char, int>(alphabeticalValue, numericalValue));

            }
            catch (out_of_range) {
                cout << "Primary Encryption Cypher Successfully Loaded." << endl;
            }
            primaryEncryptionCypher.insert(cypherPair);
        }
        primaryCypher.close();

        return primaryEncryptionCypher;
    }


    set<map<int, char>> getDecryptionCypherFromFile() {

        ifstream primaryCypher;
        primaryCypher.open("./CypherTables/alphanumericalCypherTable.csv");
        set<map<int, char>> primaryDecryptionCypher;

        while (primaryCypher.good()) {
            map<int, char> cypherPair;
            string cypherPairString;
            getline(primaryCypher, cypherPairString);

            try {
                int numericalValue = stoi(cypherPairString.substr(2, 2));
                char alphabeticalValue = cypherPairString[0];
                cypherPair.insert(pair<int, char>(numericalValue, alphabeticalValue));

            }
            catch (out_of_range) {
                cout << "Primary Decryption Cypher Successfully Loaded." << endl;
            }
            primaryDecryptionCypher.insert(cypherPair);
        }
        primaryCypher.close();

        return primaryDecryptionCypher;
    }

};


class EnigmaProgramEngine {

};


int main(){
    return 0;
}