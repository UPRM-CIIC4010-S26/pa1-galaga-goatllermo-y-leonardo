#pragma once
#include "Enemy.hpp"

class DyEnemy : public Enemy {
    private: 
        float angle = 135;
        float aimAngle = 225;
        bool loop = false;
        Rectangle texture;

    public:
        DyEnemy(float x, float y) : Enemy(x, y) { 
            this->cooldown = GetRandomValue(90, 300);
<<<<<<< HEAD
            this->health = 1;
        }
=======
            this->health = 1; 
            this->scoreIncrement = 75;
>>>>>>> 5faa39bcc5270ed0a8ec9d12af2b51e27f96d674

        }
        int getScoreIncrement(){return this->scoreIncrement;}
        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};