#ifndef ZOMBIE_INCLUDES
#define ZOMBIE_INCLUDES
class Arena;

class Zombie
{
  public:
      // Constructor
    Zombie(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;


      // Mutators
    void move();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};
#endif //ZOMBIE_INCLUDES