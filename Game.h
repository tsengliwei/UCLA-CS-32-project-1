#ifndef GAME_INCLUDES
#define GAME_INCLUDES

#include <string>
using namespace std;
class Arena;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nZombies);
    ~Game();

      // Mutators
    void play();

  private:
    Arena* m_arena;

      // Helper functions
    string takePlayerTurn();
};
#endif //GAME_INCLUDES