#include <iostream>
#include "Observer.hpp"

class HealthEntity : public Observer {
    public:
        int health = 0;
        void onNotify(int healthInc){
            health += healthInc;
            if(health <= 0){
                printf("GameObject died!\n");
            }else{
                printf("GameObject has %i \n", health);
            }
        }
};