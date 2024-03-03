/************************
 * Name: Manan Sheth
 * Description : Hang man
 * ***********************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void hangman(int n);
int len;
int len1;
char word[20];
char guessed[20];
char selections[][20] = {
    "zipper",
    "mobile",
    "volcano",
    "headphones",
    "valentine",
    "circus",
    "battleground",
    "laptop",
    "artificial",
    "robotics"
};


int wrong=0;
/**************************
 * function welcome;
 * description: greets user
 * 
*/
void welcome()
{
    printf("\nwelcome to Hang man game\n\n\n Please allow me to acknowledge you with the rules");
    printf("\n1.I am your host and i will randomly select the word and give you number of letters in the word");
    printf("\n2.For every wrong word one element of the hang man will be drawn");
    printf("\n3.when the word is gussed before the whole man is hanged you will win the game");
}
/*****************
 * function name fullman;
 * draws a full HANG MAN ;
*/
void fullman()
{
    printf("\n_________________________|"
           "\n          |              |"
           "\n          |              |"
           "\n         ***             |"
           "\n       *     *           |"
           "\n       *     *           |"
           "\n         ***             |"
           "\n          |              |"
           "\n         /|\\             |"
           "\n        / | \\            |"
           "\n       /  |  \\           |"
           "\n      /   |   \\          |"
           "\n         /|\\             |"
           "\n        /   \\            |"
           "\n       /     \\           |"
           "\n      /       \\          |"
           "\n                         |"
           "\n                         |"
           "\n                         |"
           "\n                         |"
           );
}
void pickword()
{
    int num=rand()%10;
    strcpy(word,selections[num]);
    printf("\n%d",num);
    printf("Word has been selected");
    
    len=strlen(word);
    printf("\n");
    for(int i=0;i<len;i++)
        {
            printf("___ ");
            guessed[i]='_';
        };
    
}

void run()
{   
    len1=len;
    while (len>0 && wrong<7)
    {
        char guess;
        int correct=0;
        printf("\n\nEnter guess  ");
        scanf(" %c",&guess);
        // why this for loop cant execute!!!!
        for(int q=0;q<=len1;q++)
        {
            if (guess==word[q])
            {
                int index=q;
                len--;
                printf("\n\n");
                correct=1;
                
                guessed[index]=guess;
                
                
                for(int j=0;j<len1;j++)
                {
                    printf("%c ",guessed[j]);
                }

                
                
                
                
                
                
            }
        }    
        if(!correct)
        {
            wrong++;
            hangman(wrong);    
        }
        
    }
    if(wrong>=7 || len==0)
    {
        if(len==0)
        {
            printf("\n\n Gongratulations you won");
        }
        else{
            printf("\n\n\nGame over");
        }
    }
}

void hangman(int n)
{
    switch(n)
    {
        case(1):
        {
            printf("\n_________________________|"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            );
            break;
        }
        case(2):
        {
            printf("\n_________________________|"
            "\n          |              |"
            "\n          |              |"
            "\n         ***             |"
            "\n       *     *           |"
            "\n       *     *           |"
            "\n         ***             |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
             );
             break;
        }
        case(3):
        {
            printf("\n_________________________|"
            "\n          |              |"
            "\n          |              |"
            "\n         ***             |"
            "\n       *     *           |"
            "\n       *     *           |"
            "\n         ***             |"
            "\n          |              |"
            "\n          |              |"
            "\n          |              |"
            "\n          |              |"
            "\n          |              |"
            "\n          |              |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
           );
           break;
        }
        case(4):
        {
            printf("\n_________________________|"
            "\n          |              |"
            "\n          |              |"
            "\n         ***             |"
            "\n       *     *           |"
            "\n       *     *           |"
            "\n         ***             |"
            "\n          |              |"
            "\n          |\\            |"
            "\n          | \\           |"
            "\n          |  \\          |"
            "\n          |   \\         |"
            "\n          |              |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
           );
           break;
       }
       case(5):
       {
        printf("\n_________________________|"
            "\n          |              |"
            "\n          |              |"
            "\n         ***             |"
            "\n       *     *           |"
            "\n       *     *           |"
            "\n         ***             |"
            "\n          |              |"
            "\n         /|\\            |"
            "\n        / | \\           |"
            "\n       /  |  \\          |"
            "\n      /   |   \\         |"
            "\n          |              |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            );
            break;
        }
        case(6):
        {
            printf("\n_________________________|"
            "\n          |              |"
            "\n          |              |"
            "\n         ***             |"
            "\n       *     *           |"
            "\n       *     *           |"
            "\n         ***             |"
            "\n          |              |"
            "\n         /|\\            |"
            "\n        / | \\           |"
            "\n       /  |  \\          |"
            "\n      /   |   \\         |"
            "\n          |\\            |"
            "\n            \\           |"
            "\n             \\          |"
            "\n              \\         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            "\n                         |"
            );
            break;
        }
        case(7):
        {fullman();
        break;
        }
        default:
        {

        }
       };
        }
int main()
{
    fullman();
    printf("\n\n\n");
    welcome();
    printf("\n\n\n");
    pickword();
    run();    
    end:
    printf("\n\n\nGame finished");
    return 0;    
}
    
                   
        
    
