#include <iostream>

#include "Queen.h"
#include "Pawn.h"

// Constructor con referencias
void Move(const Piece& piece)
{
    std::cout << "Move " + piece.GetColor() << "\n";
}

// Constructor con punteros
void Move(Piece* piece)
{
    std::cout << "Move " + piece->GetColor() << "\n";
}

int main()
{

    Queen queen{};

    queen.SetColor("Black");
    std::cout << queen.GetColor() << "\n";


    Pawn pawn{};
    pawn.SetColor("White");
    std::cout << pawn.GetColor() << "\n";


    Piece *queen2 = new Queen();
    queen2->SetColor("White");
    Move(queen2);

    delete queen2;


    return 0;
}
