#ifndef PLAYER_H
#define PLAYER_H
class Player{
public:
    int color;
    int turn;
    bool isTurn();
    void forfeit();
    void askDraw();
    void isChecked();
}
#endif // PLAYER_H
