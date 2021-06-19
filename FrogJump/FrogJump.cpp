#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int solution(int X, int Y, int D){

    int result;
    // cout << X << ' ' << Y << ' ' << D << endl;
    result = (int)ceil((Y-X)/(D*1.0));
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    // string ar_count_temp;
    // getline(cin, ar_count_temp);

    // int times = stoi(ltrim(rtrim(ar_count_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<int> ar(ar_temp.size());

    for (int i = 0; i < ar_temp.size(); i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = solution(ar[0], ar[1], ar[2]);

    // for(int i=0; i<result.size(); ++i)
    //   cout << result[i] << ' ';

    cout << result << "\n";
    cout << endl;

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
