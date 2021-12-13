#include <bits/stdc++.h>
using namespace std;

vector<string> string_split(const string &str)
{
    vector<string> result;
    istringstream iss(str);
    for (string s; iss >> s;)
        result.push_back(s);
    return result;
}
int main()
{
    ifstream myfile;
    myfile.open("input2.txt");
    string myline;
    vector<string> s;
    int forward = 0;
    int up = 0;
    int depth = 0;
    int aim = 0;

    if (myfile.is_open())
    {
        while (!myfile.eof())
        {
            getline(myfile, myline);
            //cout << myline << ": " << myfile.tellg() << '\n';
            s = string_split(myline);
            if (s[0] == "forward")
            {
                forward += stoi(s[1]);
                if (aim != 0)
                {
                    depth += stoi(s[1]) * aim;
                }
            }
            if (s[0] == "down")
            {
                aim += stoi(s[1]);
            }
            if (s[0] == "up")
            {
                aim -= stoi(s[1]);
            }
        }
    }
    cout << forward * depth << endl;
}
