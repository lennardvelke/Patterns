#pragma once

#include "HealthBar.hpp"
#include "HealthEntity.hpp"
#include "HealthSystem.hpp"
#include "GameObject.hpp"

#include "GameObjectFactory.hpp"
class Enemy : public GameObject
{
public:
    
    void init(){
        healthSystem->addObserver(healthBar);
        healthSystem->addObserver(healthEntity);
        healthSystem->notify(100);

    };
   
    void health(int health){
        healthSystem->notify(health);
    }

private:
    /* data */
    HealthSystem* healthSystem = new HealthSystem();
    HealthBar* healthBar = new HealthBar();
    HealthEntity* healthEntity = new HealthEntity();
};

