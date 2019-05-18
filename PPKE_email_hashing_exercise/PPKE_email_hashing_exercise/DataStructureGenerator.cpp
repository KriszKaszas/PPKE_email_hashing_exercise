#include <iostream>
#include <string>
using namespace std;

string kont[4] = { "vector","list","map", "set" };
string kulcst[3] = { "int","char","string" };
string ertekt[5] = { "int","char","string","float","bool" };

string generate_from_hash(unsigned int h, int n)
{
    if (n > 0)
    {
        int z = h % 4;
        if (z < 2)
        {
            return kont[z] + "<" + generate_from_hash(h / 3, n - 1) + " > ";
        }
        else if (z == 2)
        {
            int k = (h % 5) % 3;
            return kont[z] + "<" + kulcst[k] + ", "
                + generate_from_hash(h / 3, n - 1) + " > ";
        }
        else {
            int k = (h % 5) % 3;
            if (n == 1) {
                return kont[z] + "<" + kulcst[k] + ">";
            }
            return kont[z] + "<" + generate_from_hash(h / 3, n - 1) + " > ";

        }
    }
    else
    {
        int z = h % 5;
        return ertekt[z];
    };
}

string generate(string s)
{
    string res = "";
    unsigned int hash = 1;
    for (int i = 0; i < s.length(); i++) hash = 17 * hash + s[i];

    res = generate_from_hash(hash, 3);
    return res;
}

int later_main()
{
    string s = "";
    do
    {
        getline(cin, s);
        if (cin.good()) cout << s << ": " << generate(s) << endl;
    } while (cin.good());
}