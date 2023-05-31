#include <iostream> // for std::cout and std::endl
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &)

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if(n>1 and n<9){
        std::cout << words[n-1] <<endl;
    }
    else if(n==1 or n==9){
        std::cout << words[n-1] <<endl;
    }
    else{
        std::cout << "Greater than 9";
    }

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

// int my_variable_name; // correct (separated by underscores/snake_case)
// int my_function_name(); // correct (separated by underscores/snake_case)

// int myVariableName; // correct (intercapped/CamelCase)
// int myFunctionName(); // correct (intercapped/CamelCase)

// int my variable name; // invalid (whitespace not allowed)
// int my function name(); // invalid (whitespace not allowed)

// int MyVariableName; // valid but incorrect (should start with lower case letter)
// int MyFunctionName(); // valid but incorrect (should start with lower case letter)

// std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line of the console
// std::cout << "My name is Wireshark." << std::endl;

// std::cout << "Enter a number: "; // ask user for a number

// int x{ }; // define variable x to hold user input (and zero-initialize it)
// int y{ }; // define variable y to hold user input (and zero-initialize it)
// std::cin >> x >> y; // get two numbers and store in variable x and y respectively

// std::cout << "You entered " << x << " and " << y << '\n';

    