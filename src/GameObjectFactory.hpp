#pragma once

#include <list>
#include <string>

#include "GameObject.hpp"

namespace gameobject
{
#include "Enemy.hpp"
    
    static std::list<GameObject*> gameObjectList = {};

    static void createEnemy(){
        Enemy* enemy = new Enemy();
        gameObjectList.push_back(enemy);
    }

    static void init(){
        for (GameObject* gameObject : gameobject::gameObjectList){
            gameObject->init();
        }
    }
    
    
    
} // namespace instance

