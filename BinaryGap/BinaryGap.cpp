#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solveMeFirst(int n) {
 // Hint: Type 
    vector<int> binaryNum(32); 
    // int binaryNum[32]; 
    if(n<1 || n>2147483647)
      return 0;

    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    reverse(binaryNum.begin(), binaryNum.end());

    vector<int>::iterator it = std::find(binaryNum.begin(), binaryNum.end(), 1);
    int index = distance(binaryNum.begin(), it);

    vector<int> distance;
    int first = index; 
    int second;
    for (int i=index+1; i < binaryNum.size(); i++) 
    {
      if(binaryNum[i] == 1)
      {
        second = i;
        distance.push_back(second-first);
        first = second;
      }
    }

    if (distance.size() == 0)
      return 0;

    for(int i=0; i<distance.size(); ++i)
      cout << distance[i] << ' ';
    cout << endl;


    double max = *max_element(distance.begin(), distance.end());

    return max-1;
}

int main() {
  int num1;
  int sum;
  cin>>num1;
  sum = solveMeFirst(num1);
  cout<<"Max value: "<< sum <<endl;
  // for(int i=0; i<sum.size(); ++i)
  //   cout << sum[i] << ' ';
  return 0;
}