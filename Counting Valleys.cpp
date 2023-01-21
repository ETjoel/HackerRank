#include <bits/stdc++.h>
#include <vector>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    vector<char> valley, mount;
    int size = path.length(), count = 0;
    if(path[0] == 'D') valley.push_back(path[0]);
    else mount.push_back(path[0]);
    for( int j = 1; j < size; j++){
        if(path[j] == 'D'){
            if(mount.empty()){
                valley.push_back(path[j]);
            }
            else mount.pop_back();
        }
        else {
            if(valley.empty()){
                mount.push_back(path[j]);
            }
            else {
                valley.pop_back();
                if(valley.empty()) count++;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
