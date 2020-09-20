#include <iostream>

using namespace std;


// establishing void function for sum calculating 1-500
void sum_calculator() {
// sum = (n/2)(2a+(n-1)d)
// n = number of integers added, a is the first number, d is the difference between subsequent integers
// n = (last - first + 1)

// declaring / initializing variables
    
    int first_num;
    cout << "Type the first number in the range: "; // Type a number and press enter
    cin >> first_num; // Get user input from the keyboard
    
    
    int difference_between = 1;
   
    int last_num;
    cout << "Type the last number in the range: "; // Type a number and press enter
    cin >> last_num; // Get user input from the keyboard
    
    int num_integers = last_num - first_num + 1;
    int sum = 0;

// calculating the sum of integers from 1 to 500
    sum = (num_integers / 2) * (2 * first_num + (num_integers - 1) * difference_between);

// outputting the result (1 to 500)
    cout << sum << " is the sum from " << first_num << " to " << last_num;
}

int main() {
    sum_calculator();

return 0;
}
