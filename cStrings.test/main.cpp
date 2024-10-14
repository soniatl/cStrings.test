//
//  main.cpp
//  cStrings.test
//
//  Created by Sonia Lopchan on 10/13/24.
//

#include <iostream>
//#include <cctype>

using namespace std;

//char letter = 'a';

int main(){
    
   /* int num; //initialize num to allocate elements
    cout <<"Enter the number of elements in an array" <<endl;
    cin >>num;
    
    int* arr = new int[num]; //dynamically allocate an array of integers
    
    cout << "Enter " << num << " elements: "; //ask user to enter the elements
    
    int i=0;
    while (i<num) { //loop iterates until i < num
        cin >> arr[i];//input elements i
        i++;
    }
    
    int sum = 0; //initialize sum to zero
    i=0;
    while (i<num) { //loop continues until i < num
        sum += arr[i]; //add the current value of elements and store in sum variable
        i++;
    }
    
    cout << "Sum of array elements: " << sum << endl;
    delete[] arr;
    */
  
    auto numbers = make_unique<int[]>(5);
    
    
    
    
    
    
    
    
    
    
    // if (isupper(letter))
     //   cout << "Letter is uppercase.\n";
    //else
      //  cout << "Letter is lowercase.\n";
    
    
  //  string str = "Hello World";
  //  string sub = str.substr(0, 5);
 //   cout <<sub<<endl;

    
 //   string str = "Hello";
 //   size_t len = str.length(); // len = 5
 //   cout <<sizeof(str)<<"\n"; // each letter stored in 4 bytes plus \0 null terminator = 5*4 + 1*4 = 24
 //   cout <<len<<endl; //5
    
  //  string str = "Hello";
  //  char firstChar = str[0];    // 'H'
  //  char secondChar = str.at(2); // 'e'
  // cout << firstChar <<" "<< secondChar<<"\n";

    
    return 0;
}
