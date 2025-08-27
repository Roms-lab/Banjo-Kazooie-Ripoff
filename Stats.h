// Stats.h
#ifndef STATS_H
#define STATS_H

class Stats {
public:
    bool Falling = false;
    int Gravity = 0;
    int Lives = 3;
    int Health = 8;
    int Jiggies = 0;
    int Notes = 0;

    bool DoubleJump = false;
    bool BeakSlam = false;
    bool TreeClimb = false;
    bool JumpPad = false;
    bool FlyPad = false;
    bool HighJump = false;
    bool AirAttack = false;
    bool NormalAttack = false;
    bool RollAttack = false;
    bool InvincibleFeather = false;
    bool BirdRun = false;
};

#endif