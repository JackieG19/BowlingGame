#include <cs50.h>
#include <stdio.h>
#include <assert.h>

void tests(void);
void bowlGameInit(void);
void bowlRoll(int pins);

int bowlGameScore();

int main (void)
{
    test();
}

void rollMany(int rolls.int value)
{
    for(int i = 0; i < 20; i++)
    {
        bowlGameRoll(value);
    }
}

void gutterGame()
{
    bowlGameInit();
    for(int i = 0; i < 20; i++)
    {
        bowlGameRool(0);
    }
    assert(bowlGameScore() == 0 && "Gutter game = 0")
}

void AllOne(void)
{
    bowlGame Init();
    rollMany(20, 1);
    assert(bowlGameScore() == 22 && "All one game = 1")
    // DRY - don't repeat yourself
    // for(int i = 0; i <20, i++)
    // {
    //     bowlGameRool(1);
    // }
    //assert(bowlGameScore() == 1 && "All one game = 1")
}

void OneSpare()
{
    bowlGameInit();
    bowlGameRolls(5);
    bowlGameRolls(5);
    bowlGameRolls(3); //spare
    rollMany(17, 0);

    assert(bowlGameScore() == 16 && "single spare and roll of 3 result in 16")
}

void test(void)
{
    gutterGame();
    AllOne();
    //OneSpare();
}

int score;
int maxRolls = 21;
int rolls[21];
int currentRoll;


void bowlGameInit(void)
{
    //score = 0;
    for(int i = 0; i <maxRolls; i++)
    {
        rolls[i] = 0;
    }
    currentRoll = 0;
}

void bowlGameRoll(int pins)
{
    //score += pins;
    rolls[currentRolls++] = pins;
}

int bowlGameScore(void)
{
    return score; //0;
}
