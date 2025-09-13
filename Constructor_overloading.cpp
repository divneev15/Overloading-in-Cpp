/*Divneev Singh
24070123043
ENTC A2
*/

#include <iostream>
using namespace std;

class Add {
    int intResult;
    float floatResult;
    
public:
    Add(int a, int b) {
        intResult = a + b;
        floatResult = 0.0f;
        cout << "Integer addition (2 numbers): " << a << " + " << b << " = " << intResult << endl;
    }

    Add(float a, float b) {
        floatResult = a + b;
        intResult = 0;
        cout << "Float addition (2 numbers): " << a << " + " << b << " = " << floatResult << endl;
    }
    
    Add(int a, int b, int c) {
        intResult = a + b + c;
        floatResult = 0.0f;
        cout << "Integer addition (3 numbers): " << a << " + " << b << " + " << c << " = " << intResult << endl;
    }
    
    void displayResults() {
        cout << "Stored results - Integer: " << intResult << ", Float: " << floatResult << endl;
    }
    
    int getIntResult() { return intResult; }
    float getFloatResult() { return floatResult; }
};

int main() {

    Add add1(5, 10);
    add1.displayResults();
    cout << endl;
    

    Add add2(3.5f, 2.7f);
    add2.displayResults();
    cout << endl;
    
    Add add3(1, 2, 3);
    add3.displayResults();
    cout << endl;
    
    return 0;
}

/*Output
Integer addition (2 numbers): 5 + 10 = 15
Stored results - Integer: 15, Float: 0

Float addition (2 numbers): 3.5 + 2.7 = 6.2
Stored results - Integer: 0, Float: 6.2

Integer addition (3 numbers): 1 + 2 + 3 = 6
Stored results - Integer: 6, Float: 0
*/

