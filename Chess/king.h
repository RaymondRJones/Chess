#ifndef KING_H
#define KING_H
class Piece: King{
public:
    //Moves like Queen, but only 1 square
    void move();
    //King moves 2 spaces toward rook, and rook moves on other side of king
    void castle();
    bool isChecked();
}
#endif // KING_H
