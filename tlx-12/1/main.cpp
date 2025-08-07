#include <iostream>
#include <vector>
using namespace std;

void hello(){
    cout << "Hello" << endl;
}

int validateNumber(int input, int minRange, int maxRange){
    if (input >= minRange && input <= maxRange){
        return input;
    }
    throw "Error: invalid input";
}

vector<int> inputNumber(int count){
    vector<int> numbers;
    int number;

    for (int i = 0; i < count; i++)
    {
        cin >> number;
        validateNumber(number, -100000, 100000);
        numbers.push_back(number);
    }
    
    return numbers;
}

void printNumbers(vector<int> numbers){
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << "numbers " << i << ": " << numbers[i] << endl;
    }
}

int minNumber(vector<int> numbers){
    int x = numbers[0];

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < x)
        {
            x = numbers[i];
        }
    }
    
    return x;
}

int maxNumber(vector<int> numbers){
    int x = numbers[0];

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > x)
        {
            x = numbers[i];
        }
    }
    
    return x;
}


void displayMinMaxNumber(vector<int> numbers){
    int x = numbers[0];
    int y = numbers[0];

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > x)
        {
            x = numbers[i];
        }

         if (numbers[i] < y)
        {
            y = numbers[i];
        }
    }

    cout << x << " " << y << endl;
}


int main(){
    int N;
    vector<int> numbers;

    cin >> N ;
    validateNumber(N, 1, 100);

    numbers = inputNumber(N);


    displayMinMaxNumber(numbers);

    // int X = maxNumber(numbers);
    // int Y = minNumber(numbers);

    // cout << X << " " << Y << endl;

}