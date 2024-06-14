#pragma once

#include "GameObject.hpp"

class Observer{
    public:
        Observer() = default;
        virtual ~Observer(){ };
        //virtual void onNotify() = 0;
        virtual void onNotify(int health) = 0;

};
