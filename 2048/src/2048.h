#ifndef GAME_2048_H
#define GAME_2048_H

/**
 * Клас Game_2048.
 * Този клас съдържа части от логиката на оригиналната игра 2048.
 * Програмата представлява същата игра, без ефектите.
 * Играе се в конзолата.
 */

class Game_2048 {
private:
    int player_board[4][4]; /**< Полетата в които са разположени числата от играта. */
    int copy_player_board[4][4]; /**< Копие на полетата нужно за проверки по време на играта. */
    int score; /**< Резултат достигнат до момента от играча. */
public:
    Game_2048(); /**< Създава полетата за игра. */
    void Start(); /**< Стартира играта. */
private:
    bool game_over(); /**< Проверява дали играта няма продължение. */
    bool copy_move(); /**< Проверява дали може играта да продължи. */
    void copy_board(); /**< Копира оригиналните полета в копието. */
    void print_board(); /**< Извежда в конзолата полетата на играта. */
    void move_up(); /**< Движение нагоре, активира се с "W". */
    void move_down(); /**< Движение надолу, активира се с "S". */
    void move_left(); /**< Движение наляво, активира се с "A". */
    void move_right(); /**< Движение надясно, активира се с "D". */
};

#endif