
/*// If both numbers are the same, no permutation needed
    


    // If one or both students not found, return
   
    // Adjust pointers for first node
    if (precedent1 != NULL)
        precedent1->suivant = courant2;
    else
        *L = courant2;

    // Adjust pointers for second node
    if (precedent2 != NULL)
        precedent2->suivant = courant1;
    else
        *L = courant1;

    Cellule* temp = courant1->suivant;
    courant1->suivant = courant2->suivant;
    courant2->suivant = temp;*/
    