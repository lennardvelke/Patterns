#include "Observer.hpp"
class HealthBar : public Observer{
    public:
        int health = 0;
        void onNotify(int healthInc){
            
            
            health += healthInc;

            printf("Healtbar for GameObejct is on %i health \n", health);
        
        }
};