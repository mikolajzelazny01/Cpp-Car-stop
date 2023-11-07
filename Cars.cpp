#include <iostream>

using namespace std;

class Vehicle {
    public:
        virtual void stop() = 0; 
};

class VW : public Vehicle {
    public:
        void stop() {
            cout << "VW stops!" << endl;
        }
};

class Ford : public Vehicle {
    public:
        void stop() {
            cout << "Ford stops!" << endl;
        }
};

class Ferrari : public Vehicle {
    public:
        void stop() {
            cout << "Ferrari stops!" << endl;
        }
};
int main() {

    VW golf;
    Ford focus;
    Ferrari california;
    
    Vehicle* vehicles[3];
    vehicles[0] = &golf;
    vehicles[1] = &focus;
    vehicles[2] = &california;
    
    for(int i = 0; i < 3; i++) {
        vehicles[i]->stop();
    }
    
    return 0;
}
