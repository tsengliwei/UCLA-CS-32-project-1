#ifndef PLAYER_INCLUDES
#define PLAYER_INCLUDES

#include<string>
using namespace std;

class Arena;

class Player
{
  public:
      // Constructor
    Player(Arena *ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    string dropBrain();
    string move(int dir);
    void   setDead();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    bool   m_dead;
};
#endif //PLAYER_INCLUDES