#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"

class Queen : public Piece
{
public:
    Queen() {};

    ~Queen()
    {
        std::cout << "Queen destroyed\n";
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

#endif // QUEEN_H
