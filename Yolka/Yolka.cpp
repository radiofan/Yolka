// Yolka.cpp: ÆØ‡•§•´Ô•‚ ‚ÆÁ™„ ¢ÂÆ§† §´Ô ™Æ≠·Æ´Ï≠Æ£Æ Ø‡®´Æ¶•≠®Ô.
//

#include "stdafx.h"

void init();
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
/*
                *                
               ***               
              **Q**              
             *******             
            ***&**$**            
           ***********           
          **O****8*****          
         ***Q***********         
        ********Q***@****        
       ****0***********0**       
      *********î***********      
     *****@*********@*******     
    **@*******G***********8**    
   *****î*************&*******   
  ************O****************  
 *****0********************O**** 
8******@*****G********@*********0
               €€€               
               €€€               

  …ÕÕª …ª…ª…ÕÕª…ÕÕª…ª  …ª…ÕÕÕÕª  
  ∫…Õº ∫∫∫∫∫…ª∫∫…ª∫∫∫  ∫∫∫…ª…ª∫  
  ∫∫   ∫»º∫∫∫∫∫∫»º∫∫»Õª∫∫∫∫∫∫∫∫  
  ∫∫   ∫…ª∫∫∫∫∫∫…ª∫∫…ª∫∫∫∫∫»º∫∫  
  ∫»Õª ∫∫∫∫∫»º∫∫»º∫∫»º∫∫∫∫∫  ∫∫  
  »ÕÕº »º»º»ÕÕº»ÕÕº»ÕÕº»º»º  »º  
    …ÕÕª…ÕÕª …ÕÕÕª …ÕÕª…ÕÕÕÕª    
    ∫…Õº∫…ª∫ ∫…Õª∫ ∫…ª∫∫…ª…ª∫    
    ∫∫  ∫∫∫∫ ∫»Õº∫ ∫∫∫∫∫∫∫∫∫∫    
    ∫∫  ∫∫∫∫…º…Õª»ª∫∫∫∫∫∫»º∫∫    
    ∫∫  ∫»º∫∫…º »ª∫∫»º∫∫∫  ∫∫    
    »º  »ÕÕº»º   »º»ÕÕº»º  »º    
*/

    system("color 02");
    SetConsoleCP(866);
	SetConsoleOutputCP(866);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> color(9, 14);
    HANDLE cons = GetStdHandle(STD_OUTPUT_HANDLE);
    
    while(true){
        system("cls");
        init();
        cout << "                *                " << endl;
        cout << "               ***               " << endl;

        cout << "              **";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "Q";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "**              " << endl;

        cout << "             *******             " << endl;

        cout << "            ***";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "&";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "**";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "$";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "**            " << endl;

        cout << "           ***********           " << endl;

        cout << "          **";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "O";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "****";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "8";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*****          " << endl;

        cout << "         ***";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "Q";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "***********         " << endl;

        cout << "        ********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "Q";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "***";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "@";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "****        " << endl;

        cout << "       ****";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "0";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "***********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "0";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "**       " << endl;

        cout << "      *********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "î";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "***********      " << endl;

        cout << "     *****";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "@";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "@";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*******     " << endl;

        cout << "    **";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "@";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*******";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "G";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "***********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "8";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "**    " << endl;

        cout << "   *****";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "î";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*************";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "&";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*******   " << endl;

        cout << "  ************";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "O";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "****************  " << endl;

        cout << " *****";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "0";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "********************";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "O";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "**** " << endl;

        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "8";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "******";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "@";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*****";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "G";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "@";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << "*********";
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | color(gen)));
        cout << "0" << endl;

        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 4));
        cout << "               €€€               " << endl;
        cout << "               €€€               " << endl;
        cout << endl;

        SetConsoleTextAttribute(cons, (WORD) ((11 << 4) | 0));
        cout << endl;
        cout << "  …ÕÕª …ª…ª…ÕÕª…ÕÕª…ª  …ª…ÕÕÕÕª  " << endl;
        cout << "  ∫…Õº ∫∫∫∫∫…ª∫∫…ª∫∫∫  ∫∫∫…ª…ª∫  " << endl;
        cout << "  ∫∫   ∫»º∫∫∫∫∫∫»º∫∫»Õª∫∫∫∫∫∫∫∫  " << endl;
        cout << "  ∫∫   ∫…ª∫∫∫∫∫∫…ª∫∫…ª∫∫∫∫∫»º∫∫  " << endl;
        cout << "  ∫»Õª ∫∫∫∫∫»º∫∫»º∫∫»º∫∫∫∫∫  ∫∫  " << endl;
        cout << "  »ÕÕº »º»º»ÕÕº»ÕÕº»ÕÕº»º»º  »º  " << endl;
        cout << "    …ÕÕª…ÕÕª …ÕÕÕª …ÕÕª…ÕÕÕÕª    " << endl;
        cout << "    ∫…Õº∫…ª∫ ∫…Õª∫ ∫…ª∫∫…ª…ª∫    " << endl;
        cout << "    ∫∫  ∫∫∫∫ ∫»Õº∫ ∫∫∫∫∫∫∫∫∫∫    " << endl;
        cout << "    ∫∫  ∫∫∫∫…º…Õª»ª∫∫∫∫∫∫»º∫∫    " << endl;
        cout << "    ∫∫  ∫»º∫∫…º »ª∫∫»º∫∫∫  ∫∫    " << endl;
        cout << "    »º  »ÕÕº»º   »º»ÕÕº»º  »º    " << endl;
        cout << endl;
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << endl;

        Sleep(1000);
    }

	return 0;
}

