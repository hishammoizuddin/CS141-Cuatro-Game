// Author    : Mohammed Hisham Moizuddin - C141 - SUMMER 2020
// Program 2 : Cuatro

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw()
#include <cctype>     // for toupper()
using namespace std;  // so that we don't need to preface every cin and cout with std::

// Global variables to represent the 16 board pieces and C++ strings representing
// the pieces that have not yet been played.  Since these are global they don't
// need to be passed as parameters to functions, and are shared over the entire program.
// Normally global variables will not be allowed.
char p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16;
string upperRowPiecesToPlay = "OO/CC  II/ZZ";
string lowerRowPiecesToPlay = "oo/cc  ii/zz";

//-------------------------------------------------------------------------------------
void displayInstructions()
{
    cout << "Welcome to the game of Cuatro, where you try to complete a set      \n"
         << "of four pieces that are alike.  Players take turns making moves.    \n"
         << "On each move your OPPONENT chooses the piece, then YOU get to       \n"
         << "place it on the board.  If you create a set of four alike when      \n"
         << "you place your piece, then you win!       \n"
         << "\n"
         << "A set of four alike can be completed by using four all upper (or all\n"
         << "lower) case characters, four all vowels (or all consonants), or four\n"
         << "all curved (or all straight-lined). Curved letters are 'O' and 'C'\n"
         << "(upper or lower), and straight-line letters are 'I' and 'Z' (upper or\n"
         << "lower). Groups of four can be created in a row, column, diagonal, or\n"
         << "corner quadrant.\n"
         << "\n"
         << "When prompted for input you may also enter 'x' or 'X' to exit." << endl;
}// end of displayInstructions()


void displayBoard() {    //Displaying the board
    cout << "  ---------   Square # " <<'\n';
    cout << " | " <<setfill(' ')<< p1 << setw(2) << p2 << setw(2) << p3 << setw(2) << p4 << setw(1) <<""<<"|  1  2  3  4 " <<'\n';
    cout << " | " <<setfill(' ')<< p5 << setw(2) << p6 << setw(2) << p7 << setw(2) << p8 << setw(1) << "" <<"|  5  6  7  8 " <<'\n';
    cout << " | " <<setfill(' ')<< p9 << setw(2) << p10 << setw(2) << p11 << setw(2) << p12 << setw(1) << "" <<"|  9 10 11 12 " <<'\n';
    cout << " | " <<setfill(' ')<< p13 << setw(2) << p14 << setw(2) << p15 << setw(2) << p16 << setw(1) << "" <<"| 13 14 15 16 " <<'\n';
    cout << "  ---------  " <<'\n';
    cout << "   Pieces:     Curved Straight" <<'\n';
    cout << setw(8) << " " << " Upper: " << upperRowPiecesToPlay <<'\n';
    cout << setw(8) << " " << " Lower: " << lowerRowPiecesToPlay <<'\n';
    cout << setfill(' ')<<setw(16)<<" "<< "Vowel/Consonant" << '\n';
}


void erase_valid_piece(char validPiece) {          //Erases the entered piece from next output.

    int size_lower = lowerRowPiecesToPlay.size();


    for (int i=0; i<size_lower; i++)
    {
        if (lowerRowPiecesToPlay[i] == validPiece)
        {   lowerRowPiecesToPlay[i]=' ';           //Replacing the character with ' ' to erase.
            break;}

    }

    int size_upper = upperRowPiecesToPlay.size();


    for (int j=0; j<size_upper; j++)
    {
        if (upperRowPiecesToPlay[j] == validPiece)
        {  upperRowPiecesToPlay[j]=' ';              //Replacing the character with ' ' to erase.
            break;}

    }
}



void makeMove(int storage_Position, char inputPiece, bool & full_position, bool & inaccurate_position)  //Places the user input in position
{
    if ((!full_position) || (!inaccurate_position))
    {
        full_position = false;

        switch(storage_Position)
        {
            case 1: p1 = inputPiece;
                erase_valid_piece(p1);
                break;

            case 2: p2 = inputPiece;
                erase_valid_piece(p2);
                break;

            case 3: p3 = inputPiece;
                erase_valid_piece(p3);
                break;

            case 4: p4 = inputPiece;
                erase_valid_piece(p4);
                break;

            case 5: p5 = inputPiece;
                erase_valid_piece(p5);
                break;

            case 6: p6 = inputPiece;
                erase_valid_piece(p6);
                break;

            case 7: p7 = inputPiece;
                erase_valid_piece(p7);
                break;

            case 8: p8 = inputPiece;
                erase_valid_piece(p8);
                break;

            case 9: p9 = inputPiece;
                erase_valid_piece(p9);
                break;

            case 10: p10 = inputPiece;
                erase_valid_piece(p10);
                break;

            case 11: p11 = inputPiece;
                erase_valid_piece(p11);
                break;

            case 12: p12 = inputPiece;
                erase_valid_piece(p12);
                break;

            case 13: p13 = inputPiece;
                erase_valid_piece(p13);
                break;

            case 14: p14 = inputPiece;
                erase_valid_piece(p14);
                break;

            case 15: p15 = inputPiece;
                erase_valid_piece(p15);
                break;

            case 16: p16 = inputPiece;
                erase_valid_piece(p16);
                break;
        }



    }
}

void fill_check(int pos, bool & inaccurate_position, bool & full_position) {    //function to display message if the destination is full.

    if (pos != '.') {
        cout <<"*** Sorry, that destination is occupied.  Please retry." <<'\n';
        inaccurate_position = true;
        full_position = true;
    }

}


void posFillCheck(int storage_Position, bool & inaccurate_position, bool & full_position)  // function to check if the destination is already occupied or not

{

    if (storage_Position==1)
    {fill_check(p1,inaccurate_position,full_position);}

    if (storage_Position==2)
    {fill_check(p2,inaccurate_position,full_position);}

    if (storage_Position==3)
    {fill_check(p3,inaccurate_position,full_position);}

    if (storage_Position==4)
    {fill_check(p4,inaccurate_position,full_position);}

    if (storage_Position==5)
    {fill_check(p5,inaccurate_position,full_position);}

    if (storage_Position==6)
    {fill_check(p6,inaccurate_position,full_position);}

    if (storage_Position==7)
    {fill_check(p7,inaccurate_position,full_position);}

    if (storage_Position==8)
    {fill_check(p8,inaccurate_position,full_position);}

    if (storage_Position==9)
    {fill_check(p9,inaccurate_position,full_position);}

    if (storage_Position==10)
    {fill_check(p10,inaccurate_position,full_position);}

    if (storage_Position==11)
    {fill_check(p11,inaccurate_position,full_position);}

    if (storage_Position==12)
    {fill_check(p12,inaccurate_position,full_position);}

    if (storage_Position==13)
    {fill_check(p13,inaccurate_position,full_position);}

    if (storage_Position==14)
    {fill_check(p14,inaccurate_position,full_position);}

    if (storage_Position==15)
    {fill_check(p15,inaccurate_position,full_position);}

    if (storage_Position==16)
    {fill_check(p16,inaccurate_position,full_position);}


}

//Function to check if the characters are UpperCase.
int upper_check(char A, char B, char C, char D) {
    if (isupper(A) && isupper(B) && isupper(C) && isupper(D)) {
        return 1;
    } else {
        return 0;
    }
}

//Function to check if the characters are LowerCase.
int lower_check(char A, char B, char C, char D) {
    if (islower(A) && islower(B) && islower(C) && islower(D)) {
        return 1;
    } else {
        return 0;
    }
}

//Function to check if the characters are Consonants.
int cons_check(char A, char B, char C, char D) {
    if (((A == 'c' || A == 'C') || (A == 'z' || A == 'Z')) &&
        ((B == 'c' || B == 'C') || (B == 'z' || B == 'Z')) &&
        ((C == 'c' || C == 'C') || (C == 'z' || C == 'Z')) &&
        ((D == 'c' || D == 'C') || (D == 'z' || D == 'Z'))) {
        return 1;
    } else {
        return 0;
    }
}

//Function to check if the characters are Curved.
int curve_check(char A, char B, char C, char D) {
    if (((A == 'c' || A == 'C') || (A == 'o' || A == 'O')) &&
        ((B == 'c' || B == 'C') || (B == 'o' || B == 'O')) &&
        ((C == 'c' || C == 'C') || (C == 'o' || C == 'O')) &&
        ((D == 'c' || D == 'C') || (D == 'o' || D == 'O'))) {
        return 1;
    } else {
        return 0;
    }
}

//Function to check if the characters are Vowels.
int vowel_check(char A, char B, char C, char D) {
    if (((A == 'i' || A == 'I') || (A == 'o' || A == 'O')) &&((B == 'i' || B == 'I') || (B == 'o' || B == 'O')) &&
        ((C == 'i' || C == 'I') || (C == 'o' || C == 'O')) &&((D == 'i' || D == 'I') || (D == 'o' || D == 'O')))
    {return 1;}

    else
        return 0;

}

//Function to check if the characters are Straight.
int straight_check(char A, char B, char C, char D) {
    if (((A == 'i' || A == 'I') || (A == 'z' || A == 'Z')) &&((B == 'i' || B == 'I') || (B == 'z' || B == 'Z')) &&
        ((C == 'i' || C == 'I') || (C == 'z' || C == 'Z')) &&((D == 'i' || D == 'I') || (D == 'z' || D == 'Z')))
    {return 1;}

    else
        return 0;

}

// check if the set of characters are alike for each type of case
int similar_check(char A, char B, char C, char D, int & inputSimilar)
{

    inputSimilar = vowel_check(A, B, C, D);
    if (inputSimilar == 1) {
        return inputSimilar;
    }


    inputSimilar = lower_check(A, B, C, D);
    if (inputSimilar == 1) {
        return inputSimilar;
    }

    inputSimilar = cons_check(A, B, C, D);
    if (inputSimilar == 1) {
        return inputSimilar;
    }

    inputSimilar =upper_check(A, B, C, D);
    if (inputSimilar == 1) {
        return inputSimilar;
    }

    inputSimilar = curve_check(A, B, C, D);
    if (inputSimilar == 1) {
        return inputSimilar;
    }

    inputSimilar = straight_check(A, B, C, D);

    return inputSimilar; //returns the type of similarity.
}

//Function to check possibility of winning similarity.
int winCheck(int & W, int & inputSimilar)

{

    // quadrant check
    if(similar_check(p1,p2,p5,p6,inputSimilar))
    {W=1;}
    if(similar_check(p3,p4,p7,p8,inputSimilar))
    {W=1;}
    if(similar_check(p9,p10,p13,p14,inputSimilar))
    {W=1;}
    if(similar_check(p11,p12,p15,p16,inputSimilar))
    {W=1;}

    // diagonal check
    if(similar_check(p1,p6,p11,p16,inputSimilar))
    {W=1;}
    if(similar_check(p13,p10,p7,p4,inputSimilar))
    {W=1;}

    // row check
    if(similar_check(p1,p2,p3,p4,inputSimilar))
    {W=1;}
    if(similar_check(p5,p6,p7,p8,inputSimilar))
    {W=1;}
    if(similar_check(p9,p10,p11,p12,inputSimilar))
    {W=1;}
    if(similar_check(p13,p14,p15,p16,inputSimilar))
    {W=1;}

    // column check
    if(similar_check(p1,p5,p9,p13,inputSimilar))
    {W=1;;}
    if(similar_check(p2,p6,p10,p14,inputSimilar))
    {W=1;;}
    if(similar_check(p3,p7,p11,p15,inputSimilar))
    {W=1;;}
    if(similar_check(p4,p8,p12,p16,inputSimilar))
    {W=1;}

    return W; // returns WIN or LOSS.
}
/*-------------------------------------------------------------------------------------*/
int main() {

    p1=p2=p3=p4=p5=p6=p7=p8=p9=p10=p11=p12=p13=p14=p15=p16='.';
    int nextNumber=1;
    int chanceNumber = 1;
    int destNumber = 2;
    char inputPiece;
    int storage_Position;
    bool inaccurate_position = false;
    bool full_position = false;

    displayInstructions();
    displayBoard();


    int W = 0;
    int similarInput = 0;               //Checks for similar input set and tests.

    while (nextNumber <= 16){

        W = winCheck(W, similarInput);
        if (W == 1) {
            cout << "*** Player " << chanceNumber << " you won!";
            return 0; //exit the program
        }

        cout << nextNumber << ". Player " << chanceNumber << " enter piece, and Player " << destNumber << " enter destination:   ";
        cin >> inputPiece;

        if ((inputPiece == 'X') || (inputPiece == 'x')) {
            cout << "Exiting program...";           //Exit program if 'x'/'X' is entered
            exit(0);
        }
        cin >> storage_Position;

        posFillCheck(storage_Position, inaccurate_position, full_position);     //Checks if position is vacant

        if ((inputPiece == 'O') || (inputPiece == 'o') ||
            (inputPiece == 'C') || (inputPiece == 'c') ||
            (inputPiece == 'I') || (inputPiece == 'i') ||
            (inputPiece == 'Z') || (inputPiece == 'z')) {
            makeMove(storage_Position, inputPiece, full_position, inaccurate_position);
        } else {
            cout << "*** Sorry, that is an invalid piece.  Please retry." << endl;
            inaccurate_position = true;
            // continue;
        }

        if (!((storage_Position >= 1) && (storage_Position <= 16))) {
            cout << "*** Sorry, that destination is invalid.  Please retry." << endl;
            inaccurate_position = true;
        }

        
        
        displayBoard(); //displayBoard always

        if (inaccurate_position)
        {
            inaccurate_position = false;    //prevents increment if any inaccurate position is entered
            continue;
        }

        nextNumber++;
        
       if (chanceNumber == 2) {
            chanceNumber = 1;
            destNumber = 2;
       } else {
            chanceNumber = 2;
            destNumber = 1;
       }

    }


    return 0;
}
// end of main()





