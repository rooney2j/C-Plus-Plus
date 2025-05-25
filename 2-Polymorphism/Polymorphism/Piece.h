#ifndef PIECE_H
#define PIECE_H

#include <iostream>

class Piece
{
protected:
    std::string Color{};
    unsigned ID{};

public:
    Piece() {};
    virtual ~Piece()
    {
        std::cout << "Piece destroyed\n";
    }

    virtual std::string GetColor() const = 0;
    virtual void SetColor(const std::string& color) = 0;
};

#endif // PIECE_H
