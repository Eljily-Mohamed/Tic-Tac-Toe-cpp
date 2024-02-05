#ifndef TIC_TAC_TOE_HPP
#define TIC_TAC_TOE_HPP 

class TicTacToe{
    private:
        char table[3][3]
        char currentPlayer
    public:
        TicTacToe()
        void InitGame()
        void initBoard()
        void printBoard()
        // ou place de separe col et ligne La fonction makeMove prend les coordonnées (ligne, colonne) dans un tableau.
        // Cela permet de regrouper les informations de manière compacte et cohérente.
        // Utilisation : makeMove(int coords[2], playerSymbol)
        void makeMove(int col, int ligne, char playerSymbol)
        void DisplayPlace(int col , int ligne) // Affiche l'emplacement de la case pour aider le joueur 
        void isGameOver()
        void restartGame(); 
        void getWinner()
}

#endif