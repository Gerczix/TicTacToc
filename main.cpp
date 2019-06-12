//
//  main.cpp
//  Tic Tac Toc
//
//  Created by Gerard on 08/06/2019.
//  Copyright © 2019 Gerard. All rights reserved.
//

#include "plansza.hpp"
#include "gra.hpp"
#include "ai.hpp"
#include <iostream>
using namespace std;

int main()
{
    //Plansza nowa_gra(4);
    
    
    /*
     nowa_gra.setVal(0, 0, O_VAL);
     nowa_gra.setVal(0, 1, NIC);
     nowa_gra.setVal(0, 2, O_VAL);
     nowa_gra.setVal(1, 0, X_VAL);
     nowa_gra.setVal(1, 1, O_VAL);
     nowa_gra.setVal(1, 2, X_VAL);
     nowa_gra.setVal(1, 3, X_VAL);
     nowa_gra.setVal(2, 2, O_VAL);
     nowa_gra.setVal(2, 0, O_VAL);
     nowa_gra.setVal(2, 1, NIC);
     nowa_gra.setVal(2, 2, X_VAL);
     nowa_gra.setVal(3, 3, O_VAL);
     nowa_gra.print();
     
     cout<<"\n\n"<<nowa_gra.czyWygrana();
     */
    
    Gra nowa_gra(menuRozmiar(), menuDowygrania());
    /*
     nowa_gra._plansza.setVal(0, 0, X_VAL);
     nowa_gra._plansza.setVal(0, 1, O_VAL);
     nowa_gra._plansza.setVal(1, 0, X_VAL);
     nowa_gra._plansza.setVal(1, 1, X_VAL);
     nowa_gra._plansza.setVal(2, 0, O_VAL);
     nowa_gra._plansza.setVal(2, 1, O_VAL);
     nowa_gra._plansza.setVal(1, 3, X_VAL);
     nowa_gra._plansza.setVal(3, 0, O_VAL);
     nowa_gra._plansza.setVal(2, 2, O_VAL);
     */
    nowa_gra.start_gry();
    nowa_gra.run();
    
    
    
    return 0;
}
