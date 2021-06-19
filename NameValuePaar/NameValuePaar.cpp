#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int solution(vector<int> &arr) {

    for(int i=0; i<arr.size(); ++i)
      cout << arr[i] << ' ';
    cout << endl;

    vector<string> arr_string;
   
    for(int i=0; i<arr.size(); ++i)
    {
        arr_string.push_back(to_string(arr[i]));
    }
      

    map<int , int> countMap;
// Iterate over the vector and store the frequency of each element in map
    for (auto & elem : arr)
    {
        auto result = countMap.insert(pair<int , int>(elem, 1));
        if (result.second == false)
            result.first->second++;
    }

    int result;
    // Iterate over the map
    for (auto & elem : countMap)
    {
        // If frequency count is greater than 1 then its a duplicate element
        if (elem.second%2 == 1)
        {
            result = elem.first;
            cout << elem.first << " :: " << elem.second << endl;
        }
    }

    return result;
}

int main()
{
    
    /* Create a hash map - int as key and string as value */
    map<int, string> m;

    /* Insert some elements ( key value pair) in the hash map */

    m.insert ( pair<int,string>(1,"Peter") );
    m.insert ( pair<int,string>(2,"Lisa") );
    m.insert ( pair<int,string>(3,"Danish") );
    m.insert ( pair<int,string>(4,"Linda") );

    /* Print the elements from hash map */

    cout << "map Contains:\n"; 
    map<int,string>::iterator itr;

    for( itr = m.begin(); itr != m.end(); ++itr){

        cout << "Key => " << itr->first << ", Value => " << itr->second.c_str() << endl;      

    }  

    return 0;

}
