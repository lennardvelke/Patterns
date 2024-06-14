#include <algorithm>
#include <iostream>
#include <list>
#include "Observer.hpp"

class HealthSystem{
    private:
        std::list<Observer*> observerList = {};

    public:
        HealthSystem() = default;

        void addObserver(Observer* observer){
            observerList.push_back(observer);
        };
        void removeObserver(Observer* observer){
            observerList.remove(observer);
        };
        void notify(int health){
            for(Observer* observer : observerList){
                observer->onNotify(health);
            }
        };
};