#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int solution(vector<int> &arr){

// N is an integer within the range [2..100,000];
// each element of array A is an integer within the range [−1,000..1,000].

    // for (int i = 0; i < arr.size(); i++) 
    //     cout << arr[i] << ' ';
    // cout << endl;

    // int numbers[] = {10,20,30,70,60,40};

    // cout << "using default accumulate: ";
    // cout << accumulate(numbers,numbers+2,0);
    // cout << '\n';

    // int array[arr.size()];
    // copy(arr.begin(), arr.end(), array);

    int result = 0; 
    vector<int> results;

    for(int i=0; i<arr.size(); i++){
   
        if(i > 0) {
            vector<int> split_lo(arr.begin(), arr.begin() + i);
            int first = accumulate(split_lo.begin(), split_lo.end(), 0);
            for (int i = 0; i < split_lo.size(); i++) 
                cout << split_lo[i] << ' ';
            cout << endl;

            vector<int> split_hi(arr.begin() + i, arr.end());
            int second = accumulate(split_hi.begin(), split_hi.end(), 0);
            for (int i = 0; i < split_hi.size(); i++) 
                cout << split_hi[i] << ' ';
            cout << endl;

            int diff = abs( first - second);
            cout << diff << endl;
            results.push_back(diff);     

        }
    }

    result = *min_element (results.begin(), results.end());
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

    int result = solution(ar);

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
