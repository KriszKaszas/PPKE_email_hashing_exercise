#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>
#include <map>

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

int main()
    return 0;
}