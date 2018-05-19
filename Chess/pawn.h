#ifndef PAWN_H
#define PAWN_H
class Piece: Pawn{
public:
    bool hasFirstMove();
    //Can move 2 spaces if on first move
    void move();
    //Promotes to any piece if at the end of board
    void promote();
    //Capture on diagonal (1 row/column)
    void capture();
    //Can capture if beside pawn that has taken a first move
    void enPassant();
}
#endif // PAWN_H
