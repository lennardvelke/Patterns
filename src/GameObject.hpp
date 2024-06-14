#pragma once

#include <string>
//#include "GameObjectFactory.hpp"

class GameObject{
    public:
        std::string name = "placeHolder";
        GameObject() {
            name = "GameObject ";
            // + std::to_string(gameobject::gameObjectList.size());
        };
        ~GameObject(){return;};

        virtual void init() = 0;
};