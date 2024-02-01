#include <iostream>
using namespace std;

class ExceptionHandler {
public:
    void handleException() {
        try {
        	throw   "Exception caught: " ;
   
        } catch (...) {
            cout << "Unknown exception caught!" << endl;
        }
    }
};

int main() {
    ExceptionHandler handler;
    handler.handleException();

    return 0;
}
