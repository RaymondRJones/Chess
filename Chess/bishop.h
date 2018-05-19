#ifndef BISHOP_H
#define BISHOP_H
class Piece: Bishop{
public:
    //Moves only on Diagonals
    //Moves require movement of 1 row and 1 column at least
    void move();
}
#endif // BISHOP_H
