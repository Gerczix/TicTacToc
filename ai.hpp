//
//  ai.hpp
//  Tic Tac Toc
//
//  Created by Gerard on 08/06/2019.
//  Copyright © 2019 Gerard. All rights reserved.
//

#ifndef ai_hpp
#define ai_hpp

#pragma once
#include "plansza.hpp"




struct AiMove
{
    AiMove();
    AiMove(int Score);
    int x;
    int y;
    int score;
    
};

class Ai
{
private:
    Gracz _aiPlayer;
    Gracz _humanPlayer;
public:
    AiMove getBestMove(Plansza& plansza,Gracz gracz);
    void init(char aiPlayer);
    void performMove(Plansza &plansza);
};




#endif /* ai_hpp */
