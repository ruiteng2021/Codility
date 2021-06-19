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

int solution(vector<int> &arr) {

    int result;

    if (arr.size()==0)
        return 1;

    if (arr.size() == 1) { 
        if ( arr[0] == 1 ) {
            return arr[0] + 1;  
        } 
        else {
            return arr[0] - 1;   
        } 
    }


    sort (arr.begin(), arr.end());  

    for(int i=0; i<arr.size(); ++i)
      cout << arr[i] << ' ';
    cout << endl;


    int temp = arr[0]; 
    for (int i=1; i<arr.size(); i++)
    {
        if (arr[i] == temp){
            continue;
        }
        if ((arr[i]-temp)%2 == 1)
        {
            temp = arr[i];
            if(i==(arr.size()-1))
            {
                return arr[arr.size()-1] + 1;
            }
            continue;
        }           
        else
        {
            result = (arr[i]+temp)/2;
            break;
        }

       
        
    } 

    return result;




//    int result;

//     sort (arr.begin(), arr.end());   
//     // for(int i=0; i<arr.size(); ++i)
//     //   cout << arr[i] << ' ';
//     // cout << endl;
//     int temp = arr[0]; 

//     for (int i=1; i<arr.size(); i++)
//     {
//         if ((arr[i]-temp)%2 == 1)
//         {
//             temp = arr[i];
//             continue;
//         }           
//         else
//         {
//             result = (arr[i]+temp)/2;
//             break;
//         }
        
//     } 

//     return result;
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
