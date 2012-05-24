#ifndef __HIGHSCORE_H__
#define __HIGHSCORE_H__

/***************************************************************************/
#define NUM_HIGHSCORES 10
/***************************************************************************/
struct Score {
	char Name[64];
        int Score;
        int Level;
};
/***************************************************************************/
class HighScore {
	public:
        	HighScore(int score, int level);
		HighScore();
		void Reset();
		~HighScore();
	protected:
        	void Open();
        	void Save();
                char *GetName();
		Score highscore[NUM_HIGHSCORES];
                FILE *fd;
};
/***************************************************************************/
#endif
