#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece
{
public:
    Pawn() {};

    ~Pawn()
    {
        std::cout << "Pawn destroyed\n";
    }

    std::string GetColor() const
    {
        return Color;
    }

    void SetColor(const std::string& color)
    {
        Color = color;
    }
};

#endif // PAWN_H
