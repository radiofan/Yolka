// Yolka.cpp: ��।���� ��� �室� ��� ���᮫쭮�� �ਫ������.
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
      *********�***********      
     *****@*********@*******     
    **@*******G***********8**    
   *****�*************&*******   
  ************O****************  
 *****0********************O**** 
8******@*****G********@*********0
               ���               
               ���               

  ��ͻ ɻɻ��ͻ��ͻɻ  ɻ����ͻ  
  ��ͼ �����ɻ��ɻ���  ���ɻɻ�  
  ��   �ȼ������ȼ���ͻ��������  
  ��   �ɻ������ɻ��ɻ�����ȼ��  
  ��ͻ �����ȼ��ȼ��ȼ�����  ��  
  ��ͼ ȼȼ��ͼ��ͼ��ͼȼȼ  ȼ  
    ��ͻ��ͻ ���ͻ ��ͻ����ͻ    
    ��ͼ�ɻ� ��ͻ� �ɻ��ɻɻ�    
    ��  ���� ��ͼ� ����������    
    ��  ����ɼ�ͻȻ������ȼ��    
    ��  �ȼ��ɼ Ȼ��ȼ���  ��    
    ȼ  ��ͼȼ   ȼ��ͼȼ  ȼ    
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
        cout << "�";
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
        cout << "�";
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
        cout << "               ���               " << endl;
        cout << "               ���               " << endl;
        cout << endl;

        SetConsoleTextAttribute(cons, (WORD) ((11 << 4) | 0));
        cout << endl;
        cout << "  ��ͻ ɻɻ��ͻ��ͻɻ  ɻ����ͻ  " << endl;
        cout << "  ��ͼ �����ɻ��ɻ���  ���ɻɻ�  " << endl;
        cout << "  ��   �ȼ������ȼ���ͻ��������  " << endl;
        cout << "  ��   �ɻ������ɻ��ɻ�����ȼ��  " << endl;
        cout << "  ��ͻ �����ȼ��ȼ��ȼ�����  ��  " << endl;
        cout << "  ��ͼ ȼȼ��ͼ��ͼ��ͼȼȼ  ȼ  " << endl;
        cout << "    ��ͻ��ͻ ���ͻ ��ͻ����ͻ    " << endl;
        cout << "    ��ͼ�ɻ� ��ͻ� �ɻ��ɻɻ�    " << endl;
        cout << "    ��  ���� ��ͼ� ����������    " << endl;
        cout << "    ��  ����ɼ�ͻȻ������ȼ��    " << endl;
        cout << "    ��  �ȼ��ɼ Ȼ��ȼ���  ��    " << endl;
        cout << "    ȼ  ��ͼȼ   ȼ��ͼȼ  ȼ    " << endl;
        cout << endl;
        SetConsoleTextAttribute(cons, (WORD) ((0 << 4) | 2));
        cout << endl;

        Sleep(1000);
    }

	return 0;
}

