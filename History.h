#ifndef HISTORY_INCLUDES
#define HISTORY_INCLUDES

#include "globals.h"

class History
	{
	  public:
	    History(int nRows, int nCols);
	    bool record(int r, int c);
	    void display() const;
	private:
		int m_row;
		int m_col;
		int m_grid1[MAXROWS][MAXCOLS];
	    char m_grid[MAXROWS][MAXCOLS];
	};
#endif //HISTORY_INCLUDES