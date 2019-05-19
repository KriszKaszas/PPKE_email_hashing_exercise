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



//int main() {
    /*set<int> testSet = { 1,2,3,4,5,6,7,8,9,10 };
    set<int>::iterator i = testSet.begin();
    while (i != testSet.end()) {
        cout << (*i) << endl;
        i++;
    }
    return 0;*/

//    cout << endl << "map.." << endl;
//
//    map<string, int> m;
//
//    m["januar"] = 31;
//    m["februar"] = 29;
//    m["marcius"] = 31;
//
//    string kulcs = "januar";
//    map<string, int>::iterator mit = m.find(kulcs);
//    if (mit != m.end()) {
//        //        cout << "van: " << m.at(kulcs) << endl;
//        cout << "van: " << mit->first <<
//            "->" << mit->second;    
//    }
//
//    else {
//        cout << "nincs" << endl;
//    }
//    cout << endl;
//    cout << endl;
//    for (pair<string, int> p : m) {
//        cout << p.first << "->" << p.second << endl;
//    }
//
//    return 0;
//}



// Data structure generator result: felfoldi.anna@hallgato.ppke.hu: set<map<int, set<char> >  >