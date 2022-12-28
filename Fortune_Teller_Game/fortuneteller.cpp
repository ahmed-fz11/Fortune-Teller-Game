#include <iostream>
#include <string.h>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <fstream>

using namespace std;

struct dob{
    int year;
    int month;
    int day;
    string star;
    int starnum;
}b;

struct login_info{
    string name;
    char gender;
    int yr,mn,dy;
}a;
COORD coord = {0, 0}; // sets coordinates to 0,0
void gotocoor (int x, int y)
{
    COORD coordinates;     // coordinates is declared as COORD
    coordinates.X = x;     // defining x-axis
    coordinates.Y = y;     //defining  y-axis
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
}

void aboutYourself(int bday,int bmonth,int byear,string hstar,int hnum)
{
    int arraynum = (bday+hnum); 
    {
        arraynum = bday;
        string abouturself[100] = {"You tend to be very patient, practical and dedicated.",
                     "You are usually very cautious when dealing with people, life and money.",
                     "You have a curious power of dominating others, even when not conscious of trying to do so.",
                     "You are extremely faithful, with a strong need for security and a settled routine.",
                     "You are very earthy. You can also be highly romantic and sensitive when it comes to love.",
                     "You have great power of endurance, both physical and mental, and can pass through enormous strains of fatigue as long as the excitement or determination lasts.",
                     "You make wonderful hosts and hostesses.",
                     "You have great taste about food.",
                     "In the management of your houses you can make much out of little.",
                     "You always fight in the open, for you hate trickiness, double-dealing, or deceit.",
                     "You are easily influenced by your surroundings, and become morbid and morose when trying to live under uncongenial conditions.",
                     "You are also too easily misled by your emotions, sensations, or affections.",
                     "You are jealous in your disposition.Your jealousy often drives you into acts of violence or sudden exhibition of temper, which you bitterly regret when the storm is over.",
                     "You at your best are typically strong and silent",
                     "You often appear ignorant and willfully obstinate to others.",
                     "You have an innate sense of harmony, rhythm and color, and often are very successful in music, poetry and art.",
                     "You have an ability to become the most faithful, loyal friends.",
                     "You also make good, patient nurses and healers, and almost all have a keen love of gardening and flowers.",
                     "You are warm, gentle, passionate and friendly person, though you never show it.",
                     "You perfectly know what you want and persistently work to achieve this purpose.",
                     "It is difficult for you to understand other people.",
                     "You are usually friendly, though sometimes and is slightly boring because of the restraint and reticence.",
                     "You make long relationships with other zodiacs",
                     "You are endowed with a splendid constitution",
                     "You suffer with all things that affect the throat, nasal cavities",
                     "You suffer from dieseas related to upper part of the lungs.",
                     "Most favorable colors for you are all shades of blue.",
                     "Red is an exciting color for you, and you should use it as little as possible.",
                     "The birth stones for you are emeralds, turquoises, and lapis lazuli",
                     "You often become excellent director, have good business intuition.",
                     "You are generally considered richer than you really are, as you always dress well and look well.",
                     "You are governed by your sensations and by your loving nature, but affection has a greater hold on you than passion.",
                     "You are warm and sensual, with an appreciation of the fine things in life.",
                     "You are motivated by a need for security; this sign is good for business matters and can be trusted to carry things through with absolute care.",
                     "You are very strong-willed and often quite creative.",
                     "The Moon is exalted in Taurus, giving success with matters to do with the public and, combined with the influence of Venus, a passionate nature endowed with a strong sense of loyalty and fidelity."
                     "You are kind and generous with friends, with whom you develop an unspoken rapport.",
                     "If you are in love, you are generous to the last degree, and will consider no sacrifice too great for the person you care for.",
                     "If you are enemy, you will fight with the most determined obstinacy.","\n*  You are widely known for your dual personalities and ability to change mood from moment to moment.",
                     "Although you hate to be tied down, you make lively, entertaining and romantic partners, even if you can be rather fickle if bored or unhappy.",
                     "The twin sides of your nature are perpetually pulling in opposite directions.",
                     "Your brains are subtle and brilliant but you usually \"lack continuity of purpose\".",
                     "Of all people you are the most difficult to understand, in temperament you are hot and cold almost at the same moment.",
                     "Once you are attracted to people, you have to ensure that you are not dull or mundane.",
                     "You will no doubt spend ages chatting to anyone about every subject under the sun, just to keep feeding your ever active and inquisitive mind.",
                     "If taken as you are, in your own moods, you are the most delightful people imaginable.",
                     "You believe you are truthful, constant, faithful, and so you may be at the moment, but every moment to you has a separate existence.",
                     "You have an ability to see quickly the weak points in those you meet, and can reduce all to nothing by wit, sarcasm, or mimicry.",
                     "You are great talker and usually very much in demand socially because you are so entertaining."

                     };
                     gotocoor(1,10); cout<<"-------------------------------------------------------------";
                     gotocoor(1,20); cout<<"-------------------------------------------------------------";
                     gotocoor(1,12); cout<< "This is what you are: " <<endl;
                     gotocoor(1,14); cout << abouturself[arraynum] <<endl;
                     gotocoor(1,16); cout << abouturself[arraynum-1] <<endl;
    }

}

void detailsdisp(string n, char sex, int year)
{
    cout << "Name: " << a.name << endl;
    cout << "Gender: " << a.gender <<endl;
    int age = 2021 - b.year;
    cout << "Age: " << age <<endl;
}

void horoscope_sign_display(string hstar)
{
    
    if(hstar=="pisces")
    {
        gotocoor(3,2);
        cout<<"Your horoscope sign is Pisces-The Fishes";
        gotocoor(5,3);
        cout<<"`-.    .-'";
        gotocoor(8,4);
        cout<<":  :";
        gotocoor(6,5);
        cout<<"--:--:--";
        gotocoor(8,6);
        cout<<":  :";
        gotocoor(5,7);
        cout<<".-`    `-.\n\n";
    }
    else if(hstar=="aries")
    {
        gotocoor(3,2);
        cout<<"Your horoscope sign is Aries-The Ram";
        gotocoor(6,3);
        cout<<".-.   .-.";
        gotocoor(5,4);
        cout<<"(_  \\ /  _)";
        gotocoor(10,5);
        cout<<"|";
        gotocoor(10,6);
        cout<<"|\n\n";
    }
    else if(hstar=="taurus")
    {
        gotocoor(3,2);
        cout<<"Your horoscope sign is Taurus-The Bull";
        gotocoor(6,3);
        cout<<".     .";
        gotocoor(6,4);
        cout<<"'.___.'";
        gotocoor(6,5);
        cout<<".'   `.";
        gotocoor(5,6);
        cout<<":       :";
        gotocoor(5,7);
        cout<<":       :";
        gotocoor(6,8);
        cout<<"`.___.'\n\n";
    }
    else if(hstar=="gemini")
    {
        gotocoor(3,2);
        cout<<"Your horoscope sign is Gemini-The Twins";
        gotocoor(5,3);
        cout<<"._____.";
        gotocoor(7,4);
        cout<<"| |";
        gotocoor(7,5);
        cout<<"| |";
        gotocoor(7,6);
        cout<<"| |";
        gotocoor(6,7);
        cout<<"_|_|_";
        gotocoor(5,8);
        cout<<"'     `\n\n";
    }
    else if(hstar=="cancer")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Cancer-The Crab";
        gotocoor(8,3);cout<<".--.";
        gotocoor(7,4);cout<<"/   _`.";
        gotocoor(6,5);cout<<"(_) ( )";
        gotocoor(5,6);cout<<"'.    /";
        gotocoor(5,7);cout<<"  `--'\n\n";
    }
    else if(hstar=="leo")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Leo-The Lion";
        gotocoor(7,3);cout<<".--.";
        gotocoor(6,4);cout<<"(    )";
        gotocoor(5,5);cout<<"(_)  /";
        gotocoor(9,6);cout<<"(_,\n\n";
    }
    else if(hstar=="virgo")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Virgo-The Virgin";
        gotocoor(6,3);cout<<"_";
        gotocoor(5,4);cout<<"' `:--.--.";
        gotocoor(8,5);cout<<"|  |  |_";
        gotocoor(8,6);cout<<"|  |  | )";
        gotocoor(8,7);cout<<"|  |  |/";
        gotocoor(13,8);cout<<"(J\n\n";
    }
    else if(hstar=="libra")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Libra-The Balance";
        gotocoor(10,3);cout<<"__";
        gotocoor(5,4);cout<<"___.'  '.___";
        gotocoor(5,5);cout<<"____________\n\n";
    }
    else if(hstar=="scorpio")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Scorpius-The Scorpion";
        gotocoor(6,3);cout<<"_";
        gotocoor(5,4);cout<<"' `:--.--.";
        gotocoor(8,5);cout<<"|  |  |";
        gotocoor(8,6);cout<<"|  |  |";
        gotocoor(8,7);cout<<"|  |  |  ..,";
        gotocoor(14,8);cout<<"`---':";
    }
    else if(hstar=="saggitarius")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Sagittarius-  The Archer";
        gotocoor(11,3);cout<<"...";
        gotocoor(11,4);cout<<".':";
        gotocoor(9,5);cout<<".'";
        gotocoor(5,6);cout<<"`..'";
        gotocoor(5,7);cout<<".'`.\n\n";
    }
    else if(hstar=="capricorn")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Capricorn-  The Goat";
        gotocoor(13,3);cout<<"_";
        gotocoor(5,4);cout<<"\\      /_)";
        gotocoor(6,5);cout<<"\\    /`.";
        gotocoor(7,6);cout<<"\\  /   ;";
        gotocoor(8,7);cout<<"\\/ __.'\n\n";
    }
    else if(hstar=="aquarius")
    {
        gotocoor(3,2);cout<<"Your horoscope sign is Aquarius-The Water Bearer";
        gotocoor(5,3);cout<<"..-\"-._.-\"-._.-";
        gotocoor(5,4);cout<<"..-\"-._.-\"-._.-\n\n";
    }
}

void fortunes()
{
    string fort[] = {
                        "YOUR TALENTS WIL BE RECOGNIZED AND SUITABLY REWARDED.",
                        "YOU ARE GOING TO HAVE SOME NEW CLOTHES.",
                        "DO NOT MISTAKE TEMPTATION FOR OPPORTUNITY.",
                        "FLATTERY WILL GO FAR TONIGHT.",
                        "THE GREATEST DANGER COULD BE YOUR STUPIDITY.",
                        "A SECRET ADMIRER WILL SOON SEND YOU A SIGN OF AFFECTION.",
                        "NONE OF THE SECRETS OF SUCCESS WILL WORK UNLESS YOU DO.",
                        "TRUST YOUR INTUITION.",
                        "IF YOU WANT THE RAINBOW, YOU MUST TO PUT UP WITH THE RAIN.",
                        "AND NOW THE TIME FOR SOMETHING COMPLETELY DIFFERENT."
                        "THE HARD TIMES WILL BEGIN TO FADE, JOY WILL TAKE THEIR PLACE.",
                        "LIES TODAY.",
                        "SMALL ONES CAN BE JUST AS EFFECTIVE.",
                        "IT'S ALL IN YOUR HEAD.",
                        "DO NOT HESITATE TOO LONG.",
                        "STAY AWAY FROM CARS TODAY.",
                        "ALL YOUR HARD WORK WILL SOON PAY OFF.",
                        "A GOOD TIME TO FINISH UP OLD TASKS.",
                        "YOU DONT REALLY BELIEVE IN FORTUNES.",
                        "YOU'LL BE SURPRISED.",
                        "YOUR CRUSH WILL MEET TO YOU TODAY.",
                        "YOU NEED SOME FUN IN LIFE.",
                        "A FRIEND ASKS ONLY FOR YOUR TIME, NOT YOUR MONEY.",
                        "NEVER TROUBLE TROUBLE UNTIL TROUBLE TROUBLES YOU.",
                        "MISUNDERSTANDING WILL BREAK YOUR FRIENDSHIP SOON.",
                        "YOU HAVE THE CAPACITY TO LEARN FROM MISTAKES.",
                        "YOU'LL LEARN A LOT TODAY."
                        "THERE IS NO MISTAKE SO GREAT AS THAT OF BEING ALWAYS RIGHT.",
                        "SOMEONE THINKS YOU ARE WONDERFULLY MYSTERIOUS",
                        "YOU WILL MAKE A GREAT LAWYER.",
                        "A ROLLING STONE GATHERS NO MOSS.",
                        "SING AND REJOICE, FORTUNE IS SMILING ON YOU.",
                        "YOU HAVE THE RARE ABILITY TO RECOGNIZE ABILITY IN OTHERS.",
                        "LIFE TO YOU IS A DASHING AND BOLD ADVENTURE.",
                        "THE TIME IS RIGHT TO MAKE NEW FRIENDS.",
                        "YOU WILL MAKE A SUDDEN RISE IN LIFE.",
                        "SOMEONE FROM YOUR PAST HAS RETURNED TO STEAL YOUR HEART.",
                        "YOU DISPLAY THE WONDERFUL TRAITS OF CHARM AND COURTESY.",
                        "HAPPINESS ALWAYS ACCOMPANIES WITH YOU.",
                        "YOUR HEART IS PURE, AND YOUR MIND IS CLEAR.",
                        "WHEN WINTER COMES HEAVEN WILL RAIN SUCCESS ON YOU.",
                        "YOU WILL HAVE A FINE CAPACITY FOR THE ENJOYMENT OF LIFE.",
                        "YOU WILL ENJOY GOOD HEALTH.",
                        "ACCEPT THE NEXT PROPOSITION YOU HEAR.",
                        "YOU SHOULD BE ABLE TO UNDERTAKE AND COMPLETE ANYTHING.",
                        "YOU WILL ALWAYS BE SUCCESSFUL IN YOUR PROFESSIONAL CAREER.",
                        "THERE IS NO WISDOM GREATER THAN KINDNESS.",
                        "YOUR MIND IS CREATIVE, ORIGINAL AND ALERT.",
                        "YOUR PRESENT PLANS ARE GOING TO SUCCEED.",
                        "A PLEASANT SURPRISE IS WAITING FOR YOU.",
                        "A VISIT TO A MUSEUM WILL BRING YOU A NEW SENSE OF APPRECIATION.",
                        "YOUR GOOD DEEDS ARE NEVER FORGOTTEN.",
                        "IT'S TIME YOU ASKED THAT SPECIAL SOMEONE OUT ON A DATE.",
                        "WISH YOU A LONG LIFE.",
                        "YOU WILL HAVE A LONG AND HEALTHY LIFE.",
                        "HAPPINESS IS FOUND WHEN ONE IS NOT LOOKING.",
                        "SOMEONE HAS COMPLEMENTED YOU TODAY IN YOUR ABSENCE.",
                        "YOU WILL BECOME BETTER ACQUAINTED WITH A CO-WORKER."
                    };
        // initializing random seed
        srand(time(NULL));
        gotocoor(10,10); cout<<"-------------------------------------------------------------";
        gotocoor(10,16); cout<<"-------------------------------------------------------------";
        gotocoor(10,12); cout << "YOUR FORTUNE FOR TODAY: ";
        gotocoor(10,14); cout << fort[ rand() % 57 ] << endl;
}

void Love_compatibility(int starnum)
{
    string love_array[12] = {
                                "Passion and fiery heat is your love operating style. You like to go for the gusto, taking bold action on your feelings. You are courageous and upfront in relationships and let others know exactly where you stand. Find out if your relationship will go all the way.",
                                "Slow and sensual, you know exactly who and what you want. Your love is comforting and grounding for all who encounter its soothing touch. You are loyal and patient in love and want a partner who appreciates this. Find out if your relationship will go all the way.",
                                "A meeting of the minds is your highest value in love. For you, a stimulating and interesting debate is the best aphrodisiac, as you appreciate intelligence and wit above just about anything else. Find out if your relationship will go all the way.",
                                "Dreamy and intuitive, more than anything you want to be able to share your feelings with your partner and feel a sense of connection and understanding. You are nurturing and supportive in relationships and love to take care of the one you love. Find out if your relationship will go all the way.",
                                "Creative and playful, Leo needs passion in love. You want to entertain and be entertained in relationships, as boredom is the kiss of death. Your nature demands that you be the center of attention for your romantic partner or you will soon lose interest. Find out if your relationship will go all the way.",
                                "Your analytical, thoughtful, and sometimes moody mentality demands that your mate show you just how much he or she loves you. You want regular verbal reminders that you are appreciated, and tokens of affection really lift your spirits. Receiving also makes you a generous giver. Find out if your relationship will go all the way.",
                                "Romantic and social, you are always thinking of thoughtful ways to please your partner. It's important that conflicts are minimal in your relationships as they disrupt your sense of balance and harmony, so you prefer a relationship where diplomacy rules. Find out if your relationship will go all the way.",
                                "Your emotionally intense nature demands a deep and powerful connection with your love interest. Superficiality is a turn-off to you, as you want to dive beneath the surface and explore your partner's more mysterious side. Find out if your relationship will go all the way.",
                                "Diversity and adventure are a must for you in love. You are enthusiastic and expansive in expressing your affections, but you do best in a relationship where you can have plenty of space to roam free and explore unknown territories. Find out if your relationship will go all the way.",
                                "You are a committed and pragmatic lover and express your affection through actions more than emotions or words. You like to make your partner feel provided for, as if he or she has everything needed to feel comfortable in life. Find out if your relationship will go all the way.",
                                "Freedom and individuality are crucial to your experience of love. You are an inventive and stimulating partner who always has something new and interesting to offer to your relationship, just as long as you have the space to be yourself. Find out if your relationship will go all the way.",
                                "Your sensitive and compassionate style of loving comes from your deeply spiritual nature. You have a lot of love to give and appreciate a relationship that allows you to safely open your heart without fear that you will be taken advantage of. Find out if your relationship will go all the way."
                            };
    string l_compat;

    l_compat = love_array[starnum];
    gotocoor(1,10); cout<<"-------------------------------------------------------------";
    gotocoor(1,20); cout<<"-------------------------------------------------------------";
    gotocoor(1,6); cout << "About your Love Life ";
    gotocoor(1,15); cout<< l_compat;
}

void luckyNumber(int bday,int bmonth,int byear,string hstar,int hnum)
{
    horoscope_sign_display(hstar); 
    //calculating lucky numbers
    gotocoor(1,10);
    cout << "--------------------------------------------------------------------------------------------";
    gotocoor(1,15);
    cout << "Your lucky numbers are: " << (hnum+byear)-1900 << "  "<< (bmonth*hnum)<<"  " << hnum+bday;
    gotocoor(1,20);
    cout<<  "--------------------------------------------------------------------------------------------";
}

int main()
{
    int i=1;
    system("cls");
    struct dob bdate;
    ofstream outfile;
    outfile.open("gamedata.txt", ios::out | ios::app);
    while(i==1)
    {
        system("cls");
        gotocoor(30,15);
        cout<<"Enter your Date of Birth"<<endl;
        gotocoor(30,16);
        cout<<"Year: ";
        cin>> bdate.year;
        gotocoor(30,17);
        cout<<"Month: ";
        cin>> bdate.month;
        gotocoor(30,18);
        cout<<"Day: ";
        cin>> bdate.day;
        fflush(stdin); //The fflush() function in C++ flushes any buffered data to the respective device. Buffered data is the temporary or application specific data stored in the physical memory of the computer until a certain time.
        if((bdate.month>12)||(bdate.month==2&&bdate.day>=30)||(bdate.month==1,3,5,7,8,10,12&&bdate.day>31)||(bdate.month==2,4,6,9,11&&bdate.day>30)||(2010-bdate.year>100)||(bdate.year>2010))
        {
            system("cls");
            gotocoor(1,10);
            cout << "-------------------------------------------------------------------------";
            gotocoor(1,20);
            cout << "-------------------------------------------------------------------------";
            gotocoor(10,12);
            cout<<"THE ENTRY YOU MADE WAS WRONG....." << endl;
            gotocoor(10,14);
            cout<<"PLEASE ENTER CORRECT DATE OF BIRTH ACCORDING TO GREGORIAN CALENDAR"<<endl;
            gotocoor(10,16);
            system("pause");
        }
        else
        {
            i=0;
        }
    }
    struct login_info regdetails;
    system("cls");
    gotocoor(10,10);
    cout<<"Registry Details";
    gotocoor(10,11);
    cout<<"-----------------------------------------------------";
    gotocoor(10,18);
    cout<<"-----------------------------------------------------";
    gotocoor(10,12);
    cout<<"Enter full Name: ";
    cin.unget();
    cin.ignore();
    getline(cin,regdetails.name);
    outfile << regdetails.name << "\t";
    regdetails.gender = 'g';
    gotocoor(10,13);
    cout << "Press   M --> Male || F --> Female";
    gotocoor(10,15);
    cout << "Enter Gender: ";
    cin>> regdetails.gender;
    outfile << regdetails.gender << "\t";
    gotocoor(10,20);
    system("pause");


    //star sign decision
    if((bdate.month==3&&bdate.day>=21)||(bdate.month==4&&bdate.day<=19))
    {
        bdate.star = "aries";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 1;
    }
    else if((bdate.month==4&&bdate.day>=20)||(bdate.month==5&&bdate.day<=20))
    {
        bdate.star = "taurus";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 2;
    }
    else if((bdate.month==5&&bdate.day>=21)||(bdate.month==6&&bdate.day<=20))
    {
        bdate.star = "gemini";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 3;
    }
    else if((bdate.month==6&&bdate.day>=21)||(bdate.month==7&&bdate.day<=22))
    {
        bdate.star = "cancer";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 4;
    }
    else if((bdate.month==7&&bdate.day>=23)||(bdate.month==8&&bdate.day<=22))
    {
        bdate.star = "leo";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 5;
    }
    else if((bdate.month==8&&bdate.day>=23)||(bdate.month==9&&bdate.day<=22))
    {
        bdate.star = "virgo";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 6;
    }
    else if((bdate.month==9&&bdate.day>=23)||(bdate.month==10&&bdate.day<=22))
    {
        bdate.star = "libra";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 7;
    }
    else if((bdate.month==10&&bdate.day>=23)||(bdate.month==11&&bdate.day<=21))
    {
        bdate.star = "scorpio";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 8;
    } 
    else if((bdate.month==11&&bdate.day>=22)||(bdate.month==12&&bdate.day<=21))
    {
        bdate.star = "saggitarius";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 9;
    }
    else if((bdate.month==12&&bdate.day>=22)||(bdate.month==1&&bdate.day<=19))
    {
        bdate.star = "capricorn";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 10;
    }
    else if((bdate.month==1&&bdate.day>=20)||(bdate.month==2&&bdate.day<=18))
    {
        bdate.star = "aquarius";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 11;
    }
    else if((bdate.month==2&&bdate.day>=19)||(bdate.month==3&&bdate.day<=20))
    {
        bdate.star = "pisces";
        outfile << bdate.star <<endl;
        outfile.close();
        bdate.starnum = 12;
    }
    system("cls");
    int choice = 0;
    while(choice!=6)
    {
        system("cls");
        //display main menu
        system("Color F1");
        gotocoor(40,1);
        horoscope_sign_display(bdate.star);
        gotocoor(5,1);
        gotocoor(1,10);
        cout<<"----------------------------------------------------------------------------------------";
        gotocoor(1,20);
        cout<<"----------------------------------------------------------------------------------------";
        gotocoor(15,12);
        cout<<"1.About Yourself                         2.Fortunes" <<endl;
        gotocoor(15,13);
        cout<<"3.Lucky Numbers                          4.Love" << endl;
        gotocoor(15,14);
        cout <<"5.Administrator Tools                    6.Exit" << endl;
        cout<<"\n Enter your choice: ";
        cin>>choice;
        if(choice==1)
        {
            system("cls");
            system("Color F2");
            aboutYourself(bdate.day, bdate.month, bdate.year, bdate.star, bdate.starnum);
            gotocoor(1,18);
            system("pause");
        }
        else if(choice==2)
        {
            system("cls");
            system("Color F5");
            fortunes();
            gotocoor(10,18);
            system("pause");
        }
        else if(choice==3)
        {
            system("cls");
            system("Color F3");
            luckyNumber(bdate.day, bdate.month, bdate.year, bdate.star, bdate.starnum);
            gotocoor(1,22);
            system("pause");
        }
        else if(choice==4)
        {
            system("cls");
            system("Color F2");
            Love_compatibility(bdate.starnum);
            gotocoor(1,22);
            system("pause");
        }
        else if(choice==5)
        {
            system("cls");
            cout << "Enter the password to have access to game data: ";
            string c_password = "CS100"; string password;
            cin.ignore();
            getline(cin, password);
            if (password == c_password)
            {
                ifstream infile;
                infile.open("gamedata.txt");
                cout << "Name\t\tGender\tHoroscope Sign" <<endl;
                string data;
                while (!infile.eof())
                {
                    getline(infile, data);
                    cout << data << endl;
                }
                infile.close();
            }
            else
            {
                cout << "Wrong password!!" <<endl;
            }
            system("pause");
        }
        else if(choice == 6)
        {
            cout << "Ending Game\nGoodbye!!";
            system("pause");
        }
    }

    return 0;
}