#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

vector<int> solution(vector<int> ar, int num) {

    for(int i=0; i<ar.size(); ++i)
      cout << ar[i] << ' ';
    cout << endl;

    // cout << ar.begin() << endl;
    // cout << ar.end() << endl;
    cout << ar.back() << endl;
    cout << ar.front() << endl;
    vector<int>::iterator it;
    for (int i=0; i<num; i++)
    {
      // it = ar.begin();
      ar.insert(ar.begin(), ar.back());
      ar.pop_back();
    }


  for(int i=0; i<ar.size(); ++i)
      cout << ar[i] << ' ';

    cout << endl;
    cout << "num: " << num << endl;
    return ar;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ar_count_temp;
    getline(cin, ar_count_temp);

    int times = stoi(ltrim(rtrim(ar_count_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<int> ar(ar_temp.size());

    for (int i = 0; i < ar_temp.size(); i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    vector<int> result = solution(ar, times);

    for(int i=0; i<result.size(); ++i)
      cout << result[i] << ' ';
    // fout << result << "\n";

    // fout.close();

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
