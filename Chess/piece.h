#ifndef PIECE_H
#define PIECE_H
class Piece{
public:
    int color;
    void capture();
    void move();
    void giveCheck();
}
#endif // PIECE_H
