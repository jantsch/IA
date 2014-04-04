
#include <windows.h>
#include <iostream>
#include <stdio.h>
using namespace std;

class BitBoard
{
    bool draw;
    COORD enpassant;
    int who_moves; //  -1 pretas ou 1 brancas
    bool bad_move;
    int white_infractions;
    int black_infractions;
    int winner; // 1 ,0 ou -1
    bool fiftyMoves;

    //Definir tipo da Matriz ou bitboard


    public:
        BitBoard();
        virtual ~BitBoard();
        void ConverteFormatoServBit(string msgServ);
        void GeraPossiveisJogadas();

    private:
        void setWho_moves(string msgServ);
        void setBad_move(string msgServ);
        void setWhite_infractions(string msgServ);
        void setBlack_infractions(string msgServ);
        void setWinner(string msgServ); // 1 ,0 ou -1
        void setFiftyMoves(string msgServ);

};



