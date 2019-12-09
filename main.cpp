#include <iostream>
#include <string>

class Observer {
    virtual void Update(std::string data) = 0;
};

class Subject {
public:
    virtual void RegisterObserver(Observer* observer) = 0;
    virtual void RemoveObserver(Observer* observer) = 0;
    virtual void NotifyObserver() = 0;
};

class Publisher : public Subject {
private:

};

int main(int argc, char* argv[]) {
    std::cout << "Publish-Subcribe Pattern" << std::endl;
    return 0;
}