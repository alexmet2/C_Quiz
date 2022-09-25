#include <stdio.h>
int abceidiko(int vat1,int vat2,int vat3,int vat4,int vat5,int vat6,int vat7,int vat8,int vat9,int vat10);
int abcgeniko(int vat11,int vat22,int vat33,int vat44,int vat55,int vat66,int vat77,int vat88,int vat99,int vat1010);
int main()
{
    int m,arxikierotisi;
    int x1,y1,z1,a1,b1,c1,x2,y2,z2,a2;
    int x3,y3,z3,a3,b3,c3,x4,y4,z4,a4;
    int vat1=0,vat2=0,vat3=0,vat4=0,vat5=0,vat6=0,vat7=0,vat8=0,vat9=0,vat10=0;
    int vat11=0,vat22=0,vat33=0,vat44=0,vat55=0,vat66=0,vat77=0,vat88=0,vat99=0,vat1010=0;
    int sumgen,sumeid;
    
    printf("Kalosorises\n");
    arxi:
    printf("Dialeje ti eidos erotiseis 8es na kaneis\n");
    printf("Epeleje 1 gia erotiseis eidikou periexomenou\n");
    printf("Epeleje 2 gia erotiseis genikou periexomenou\n");
    scanf("%d",&arxikierotisi);
    switch(arxikierotisi){
        case 1:{
            printf("Dialejes eidikou periexomenou\n");
            epa1:
            m=2;
            ero1:
            if(m==0){
                goto epa2;
                    }
            printf("Erotisi 1\n");
            printf("Poia einai i proigoumeni nota apo tin nto\n");
            printf("(1) Sol\n");
            printf("(2) Re\n");
            printf("(3) Si\n");
            scanf("%d",&x1);
            switch(x1){
                case 1:{
                    printf("La8os apantisi\n");
                    vat1=vat1-1;
                    x1:
                    if(m==0){
                        goto epa2;
                    }
                    printf("Erotisi 1\n");
                    printf("Poia einai i proigoumeni nota apo tin nto\n");
                    printf("(2) Re\n");
                    printf("(3) Si\n");
                    scanf("%d",&x1);
                    switch(x1){
                        case 2:{
                            printf("La8os apantisi\n");
                            vat1=vat1+1;
                            goto epa2;
                            break;
                        }
                        case 3:{
                            printf("Sosti apantisi\n");
                            printf("Pires 1 ponto\n");
                            vat1=vat1+2;
                            goto epa2;
                            break;
                        }
                        default:{
                            printf("Exases 1 ponto\n");
                            printf("Epanaliji erotisis\n");
                            m--;
                            vat1=vat1-1;
                            goto x1;
                            break;
                        }
                    }
                    break;
                }
                case 2:{
                    printf("La8os apantisi\n");
                    vat1=vat1-1;
                    x11:
                    if(m==0){
                        goto epa2;
                    }
                    printf("Erotisi 1\n");
                    printf("Poia einai i proigoumeni nota apo tin nto\n");
                    printf("(1) Sol\n");
                    printf("(3) Si\n");
                    scanf("%d",&x1);
                    switch(x1){
                        case 1:{
                            printf("La8os apantisi\n");
                            vat1=vat1+1;
                            goto epa2;
                            break;
                        }
                        case 3:{
                            printf("Sosti apantisi\n");
                            printf("Pires 1 ponto\n");
                            vat1=vat1+2;
                            goto epa2;
                            break;
                        }
                        default:{
                            printf("Exases 1 ponto\n");
                            printf("Epanaliji erotisis\n");
                            m--;
                            vat1=vat1-1;
                            goto x11;
                            break;
                        }
                    }
                    break;
                }
                case 3:{
                    printf("Sosti apantisi\n");
                    printf("Pires 2 pontous\n");
                    vat1=vat1+2;
                    goto epa2;
                    break;
                }
                default:{
                    printf("Epanaliji erotisis\n");
                    printf("Exases 1 ponto\n");
                    vat1=vat1-1;
                    m--;
                    goto ero1;
                    break;
                }
            }
            epa2:
            m=2;
            ero2:
            if(m==0){
                goto epa3;
                    }
            printf("Erotisi 2\n");
            printf("Poia xronia bgike to Lose Yourself tou Eminem\n");
            printf("(1) 2003\n");
            printf("(2) 2002\n");
            printf("(3) 2001\n");
            scanf("%d",&y1);
            switch(y1){
                case 1:{
                    printf("La8os apantisi\n");
                    vat2=vat2-1;
                    y1:
                    if(m==0){
                    goto epa3;
                    }
                    printf("Erotisi 2\n");
                    printf("Poia xronia bgike to Lose Yourself tou Eminem\n");
                    printf("(2) 2002\n");
                    printf("(3) 2001\n");
                    scanf("%d",&y1);
                    switch(y1){
                        case 2:{
                            printf("Sosti apantisi\n");
                            printf("Pires 1 ponto\n");
                            vat2=vat2+2;
                            goto epa3;
                            break;
                        }
                        case 3:{
                            printf("La8os apantisi\n");
                            vat2=vat2+1;
                            goto epa3;
                            break;
                        }
                        default:{
                            printf("Exases 1 ponto\n");
                            printf("Epanaliji erotisis\n");
                            vat2=vat2-1;
                            m--;
                            goto y1;
                            break;
                        }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pire 2 pontous\n");
                vat2=vat2+2;
                goto epa3;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat2=vat2-1;
                y11:
                if(m==0){
                goto epa3;
                    }
                printf("Erotisi 2\n");
                printf("Poia xronia bgike to Lose Yourself tou Eminem\n");
                printf("(1) 2003\n");
                printf("(2) 2002\n");
                scanf("%d",&y1);
                switch(y1){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat2=vat2+1;
                        goto epa3;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat2=vat2+2;
                        goto epa3;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat2=vat2-1;
                        m--;
                        goto y11;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat2=vat2-1;
                m--;
                goto ero2;
                break;
            }
        }
        epa3:
        m=2;
        ero3:
        if(m==0){
        goto epa4;
        }
        printf("Erotisi 3\n");
        printf("Poia xronia dolofoni8ike o Tupac\n");
        printf("(1) 1999\n");
        printf("(2) 1995\n");
        printf("(3) 1996\n");
        scanf("%d",&z1);
        switch(z1){
            case 1:{
                printf("La8os apantisi\n");
                vat3=vat3-1;
                z1:
                if(m==0){
                goto epa4;
                    }
                printf("Erotisi 3\n");
                printf("Poia xronia dolofoni8ike o Tupac\n");
                printf("(2) 1995\n");
                printf("(3) 1996\n");
                scanf("%d",&z1);
                switch(z1){
                    case 2:{
                        printf("La8os apantisi\n");
                        vat3=vat3+1;
                        goto epa4;
                        break;
                    }
                    case 3:{
                        printf("Pires 1 ponto\n");
                        vat3=vat3+2;
                        goto epa4;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat3=vat3-1;
                        m--;
                        goto z1;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat3=vat3-1;
                z11:
                if(m==0){
                goto epa4;
                    }
                printf("Erotisi 3\n");
                printf("Poia xronia dolofoni8ike o Tupac\n");
                printf("(1) 1999\n");
                printf("(3) 1996\n");
                scanf("%d",&z1);
                switch(z1){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat3=vat3+1;
                        goto epa4;
                        break;
                    }
                    case 3:{
                        printf("Pires 1 ponto\n");
                        vat3=vat3+2;
                        goto epa4;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji Erotisis\n");
                        vat3=vat3-1;
                        m--;
                        goto z11;
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat3=vat3+2;
                goto epa4;
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji Erotisis\n");
                vat3=vat3-1;
                m--;
                goto ero3;
                break;
            }
        }
        epa4:
        m=2;
        ero4:
        if(m==0){
        goto epa5;
        }
        printf("Erotisi 4\n");
        printf("Pote pe8ane o xxxtentencion\n");
        printf("(1) 2019\n");
        printf("(2) 2018\n");
        printf("(3) 2017\n");
        scanf("%d",&a1);
        switch(a1){
            case 1:{
                printf("La8os apantisi\n");
                vat4=vat4-1;
                a1:
                if(m==0){
                goto epa5;
                }
                printf("Erotisi 4\n");
                printf("Pote pe8ane o xxxtentencion\n");
                printf("(2) 2018\n");
                printf("(3) 2017\n");
                scanf("%d",&a1);
                switch(a1){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat4=vat4+2;
                        goto epa5;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat4=vat4+1;
                        goto epa5;
                        break;
                    }
                    default:{
                        printf("Exase 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat4=vat4-1;
                        m--;
                        goto a1;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat4=vat4+2;
                goto epa5;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat4=vat4-1;
                a11:
                if(m==0){
                goto epa5;
                }
                printf("Erotisi 4\n");
                printf("Pote pe8ane o xxxtentencion\n");
                printf("(1) 2019\n");
                printf("(2) 2018\n");
                scanf("%d",&a1);
                switch(a1){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat4=vat4+1;
                        goto epa5;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat4=vat4+2;
                        goto epa5;
                        break;
                    }
                    default:{
                        printf("Exase 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat4=vat4-1;
                        m--;
                        goto a11;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat4=vat4-1;
                m--;
                goto ero4;
                break;
            }
        }
        epa5:
        m=2;
        ero5:
        if(m==0){
        goto epa6;
        }
        printf("Erotisi 5\n");
        printf("Pote bgike to Earth Song tou Michael Jackson\n");
        printf("(1) 1981\n");
        printf("(2) 1982\n");
        printf("(3) 1983\n");
        scanf("%d",&b1);
        switch(b1){
            case 1:{
                printf("La8os apantisi\n");
                vat5=vat5-1;
                b1:
                if(m==0){
                goto epa6;
                }
                printf("Erotisi 5\n");
                printf("Pote bgike to Earth Song tou Michael Jackson\n");
                printf("(2) 1982\n");
                printf("(3) 1983\n");
                scanf("%d",&b1);
                switch(b1){
                    case 2:{
                        printf("Sosti apantisi\n");
                        vat5=vat5+2;
                        goto epa6;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat5=vat5+1;
                        goto epa6;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat5=vat5-1;
                        m--;
                        goto b1;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat5=vat5+2;
                goto epa6;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat5=vat5-1;
                b11:
                if(m==0){
                goto epa6;
                }
                printf("Erotisi 5\n");
                printf("Pote bgike to Earth Song tou Michael Jackson\n");
                printf("(1) 1981\n");
                printf("(2) 1982\n");
                scanf("%d",&b1);
                switch(b1){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat5=vat5+1;
                        goto epa6;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat5=vat5+2;
                        goto epa6;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat5=vat5-1;
                        m--;
                        goto b11;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat5=vat5-1;
                m--;    
                goto ero5;
                break;
            }
        }
        epa6:
        m=2;
        ero6:
        if(m==0){
        goto epa7;
        }
        printf("Erotisi 6\n");
        printf("Poio itan to kalitero Pop Hit tou 2021\n");
        printf("(1) Hold on - Justin Bieber\n");
        printf("(2) Therefore I am - Billie Eilish\n");
        printf("(3) Peaches - Justin Bieber\n");
        scanf("%d",&c1);
        switch(c1){
            case 1:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat6=vat6+2;
                goto epa7;
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat6=vat6-1;
                c1:
                if(m==0){
                goto epa7;
                }
                printf("Erotisi 6\n");
                printf("Poio itan to kalitero Pop Hit tou 2021\n");
                printf("(1) Hold on - Justin Bieber\n");
                printf("(3) Peaches - Justin Bieber\n");
                scanf("%d",&c1);
                switch(c1){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat6=vat6+2;
                        goto epa7;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat6=vat6+1;
                        goto epa7;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat6=vat6-1;
                        m--;
                        goto c1;
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("La8os apanatisi\n");
                vat6=vat6-1;
                c11:
                if(m==0){
                goto epa7;
                }
                printf("Erotisi 6\n");
                printf("Poio itan to kalitero Pop Hit tou 2021\n");
                printf("(1) Hold on - Justin Bieber\n");
                printf("(2) Therefore I am - Billie Eilish\n");
                scanf("%d",&c1);
                switch(c1){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat6=vat6+2;
                        goto epa7;
                        break;
                    }
                    case 2:{
                        printf("La8os apantisi\n");
                        vat6=vat6+1;
                        goto epa7;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat6=vat6-1;
                        m--;
                        goto c11;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat6=vat6-1;
                m--;
                goto ero6;
                break;
            }
        }
        epa7:
        m=2;
        ero7:
        if(m==0){
        goto epa8;
        }
        printf("Erotisi 7\n");
        printf("Pote genni8ike i Ariana Grande\n");
        printf("(1) 1991\n");
        printf("(2) 1992\n");
        printf("(3) 1993\n");
        scanf("%d",&x2);
        switch(x2){
            case 1:{
                printf("La8os apantisi\n");
                vat7=vat7-1;
                x2:
                if(m==0){
                goto epa8;
                }
                printf("Erotisi 7\n");
                printf("Pote genni8ike i Ariana Grande\n");
                printf("(2) 1992\n");
                printf("(3) 1993\n");
                scanf("%d",&x2);
                switch(x2){
                    case 2:{
                        printf("La8os apantisi\n");
                        vat7=vat7+1;
                        goto epa8;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat7=vat7+2;
                        goto epa8;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        m--;
                        vat7=vat7-1;
                        goto x2;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat7=vat7-1;
                x22:
                if(m==0){
                goto epa8;
                }
                printf("Erotisi 7\n");
                printf("Pote genni8ike i Ariana Grande\n");
                printf("(1) 1991\n");
                printf("(3) 1993\n");
                scanf("%d",&x2);
                switch(x2){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat7=vat7+1;
                        goto epa8;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat7=vat7+2;
                        goto epa8;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        m--;
                        vat7=vat7-1;
                        goto x22;
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat7=vat7+2;
                goto epa8;
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat7=vat7-1;
                m--;
                goto ero7;
                break;
            }
        }
        epa8:
        m=2;
        ero8:
        if(m==0){
        goto epa9;
        }
        printf("Erotisi 8\n");
        printf("Pote idri8ike i Metallica\n");
        printf("(1) 28 oktombriou 1980\n");
        printf("(2) 28 oktombriou 1981\n");
        printf("(3) 28 oktombriou 1982\n");
        scanf("%d",&y2);
        switch(y2){
            case 1:{
                printf("La8os apantisi\n");
                vat8=vat8-1;
                y2:
                if(m==0){
                goto epa9;
                }
                printf("Erotisi 8\n");
                printf("Pote idri8ike i Metallica\n");
                printf("(2) 28 oktombriou 1981\n");
                printf("(3) 28 oktombriou 1982\n");
                scanf("%d",&y2);
                switch(y2){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat8=vat8+2;
                        goto epa9;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat8=vat8+1;
                        goto epa9;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat8=vat8-1;
                        m--;
                        goto y2;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat8=vat8+2;
                goto epa9;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat8=vat8-1;
                y22:
                if(m==0){
                goto epa9;
                }
                printf("Erotisi 8\n");
                printf("Pote idri8ike i Metallica\n");
                printf("(1) 28 oktombriou 1980\n");
                printf("(2) 28 oktombriou 1981\n");
                scanf("%d",&y2);
                switch(y2){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat8=vat8+1;
                        goto epa9;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat8=vat8+2;
                        goto epa9;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat8=vat8-1;
                        m--;
                        goto y22;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat8=vat8-1;
                m--;
                goto ero8;
                break; 
            }
        }
        epa9:
        m=2;
        ero9:
        if(m==0){
        goto epa10;
        }
        printf("Erotisi 9\n");
        printf("Pote kikloforise to Monster ton Skillet\n");
        printf("(1)14 Iouliou 2010\n");
        printf("(2)14 Iouliou 2008\n");
        printf("(3)14 Iouliou 2009\n");
        scanf("%d",&z2);
        switch(z2){
            case 1:{
                printf("La8os apantisi\n");
                vat9=vat9-1;
                z2:
                if(m==0){
                goto epa10;
                }
                printf("Erotisi 9\n");
                printf("Pote kikloforise to Monster ton Skillet\n");
                printf("(2)14 Iouliou 2008\n");
                printf("(3)14 Iouliou 2009\n");
                scanf("%d",&z2);
                switch(z2){
                    case 2:{
                        printf("La8os apantisi\n");
                        vat9=vat9+1;
                        goto epa10;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 potno\n");
                        vat9=vat9+2;
                        goto epa10;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat9=vat9-1;
                        m--;
                        goto z2;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat9=vat9-1;
                z22:
                if(m==0){
                goto epa10;
                }
                printf("Erotisi 9\n");
                printf("Pote kikloforise to Monster ton Skillet\n");
                printf("(1)14 Iouliou 2010\n");
                printf("(3)14 Iouliou 2009\n");
                scanf("%d",&z2);
                switch(z2){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat9=vat9+1;
                        goto epa10;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 potno\n");
                        vat9=vat9+2;
                        goto epa10;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat9=vat9-1;
                        m--;
                        goto z22;
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat9=vat9+2;
                goto epa10;
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat9=vat9-1;
                m--;
                goto ero9;
                break; 
            }
        }
        epa10:
        m=2;
        ero10:
        if(m==0){
        goto eidikotel;
        }
        printf("Erotisi 10\n");
        printf("Pote bgike to Don't Cry apo tous Guns n'Roses\n");
        printf("(1)1991\n");
        printf("(2)1992\n");
        printf("(3)1993\n");
        scanf("%d",&a2);
        switch(a2){
            case 1:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat10=vat10+2;
                goto eidikotel;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat10=vat10-1;
                a2:
                if(m==0){
                goto eidikotel;
                }
                printf("Erotisi 10\n");
                printf("Pote bgike to Don't Cry apo tous Guns n'Roses\n");
                printf("(1)1991\n");
                printf("(3)1993\n");
                scanf("%d",&a2);
                switch(a2){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 potno\n");
                        vat10=vat10+2;
                        goto eidikotel;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat10=vat10+1;
                        goto eidikotel;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat10=vat10-1;
                        m--;
                        goto a2;
                        break; 
                    }
                }
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat10=vat10-1;
                a22:
                if(m==0){
                goto eidikotel;
                }
                printf("Erotisi 10\n");
                printf("Pote bgike to Don't Cry apo tous Guns n'Roses\n");
                printf("(1)1991\n");
                printf("(2)1992\n");
                scanf("%d",&a2);
                switch(a2){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat10=vat10+2;
                        goto eidikotel;
                        break;
                    }
                    case 2:{
                        printf("La8os apantisi\n");
                        vat10=vat10+1;
                        goto eidikotel;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat10=vat10-1;
                        m--;
                        goto a22;
                        break; 
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat10=vat10-1;
                m--;
                goto ero10;
                break;
            }
        }
        break;
    }
    case 2:{
        printf("Epelejes genikou periexomenou\n");
        epa11:
        m=2;
        ero11:
        if(m==0){
        goto epa22;
        }
        printf("Erotisi 1\n");
        printf("Poso kanei 15*4\n");
        printf("(1) 55\n");
        printf("(2) 60\n");
        printf("(3) 65\n");
        scanf("%d",&x3);
        switch(x3){
            case 1:{
                printf("La8os apantisi\n");
                vat11=vat11-1;
                x3:
                if(m==0){
                goto epa22;
                }
                printf("Erotisi 1\n");
                printf("Poso kanei 15*4\n");
                printf("(2) 60\n");
                printf("(3) 65\n");
                scanf("%d",&x3);
                switch(x3){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat11=vat11+2;
                        goto epa22;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat11=vat11+1;
                        goto epa22;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        
                        m--;vat11=vat11-1;
                        goto x3;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat11=vat11+2;
                goto epa22;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat11=vat11-1;
                x31:
                if(m==0){
                goto epa22;
                }
                printf("Erotisi 1\n");
                printf("Poso kanei 15*4\n");
                printf("(1) 55\n");
                printf("(2) 60\n");
                scanf("%d",&x3);
                switch(x3){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat11=vat11+1;
                        goto epa22;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat11=vat11+2;
                        goto epa22;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        m--;
                        vat11=vat11-1;
                        goto x31;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                m--;
                vat11=vat11-1;
                goto ero11;
                break;
            }
        }
        epa22:
        m=2;
        ero22:
        if(m==0){
        goto epa33;
        }
        printf("Erotisi 2\n");
        printf("Poia xronia bgike o Titanikos\n");
        printf("(1) 1996\n");
        printf("(2) 1997\n");
        printf("(3) 1998\n");
        scanf("%d",&y3);
        switch(y3){
            case 1:{
                printf("La8os apantisi\n");
                vat22=vat22-1;
                y3:
                if(m==0){
                goto epa33;
                }
                printf("Erotisi 2\n");
                printf("Poia xronia bgike o Titanikos\n");
                printf("(2) 1997\n");
                printf("(3) 1998\n");
                scanf("%d",&y3);
                switch(y3){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat22=vat22+2;
                        goto epa33;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat22=vat22+1;
                        goto epa33;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat22=vat22-1;
                        m--;
                        goto y3;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat22=vat22+2;
                goto epa33;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat22=vat22-1;
                y31:
                if(m==0){
                goto epa33;
                }
                printf("Erotisi 2\n");
                printf("Poia xronia bgike o Titanikos\n");
                printf("(1) 1996\n");
                printf("(2) 1997\n");
                scanf("%d",&y3);
                switch(y3){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat22=vat22+1;
                        goto epa33;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat22=vat22+2;
                        goto epa33;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        m--;
                        vat22=vat22-1;
                        goto y31;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat22=vat22-1;
                m--;
                goto ero22;
                break;
            }
        }
        epa33:
        m=2;
        ero33:
        if(m==0){
        goto epa44;
        }
        printf("Erotisi 3\n");
        printf("Poios einai o megaliteros se ogko nerou potamos ston kosmo\n");
        printf("(1) Amazonios\n");
        printf("(2) Neilos\n");
        printf("(3) Misisipis\n");
        scanf("%d",&z3);
        switch(z3){
            case 1:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat33=vat33+2;
                goto epa44;
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat33=vat33-1;
                z3:
                if(m==0){
                goto epa44;
                }
                printf("Erotisi 3\n");
                printf("Poios einai o megaliteros se ogko nerou potamos ston kosmo\n");
                printf("(1) Amazonios\n");
                printf("(3) Misisipis\n");
                scanf("%d",&z3);
                switch(z3){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat33=vat33+2;
                        goto epa44;
                        break;
                    }
                    case 2:{
                        printf("La8os apantisi\n");
                        vat33=vat33+1;
                        goto epa44;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        m--;
                        vat33=vat33-1;
                        goto z3;
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat33=vat33-1;
                z31:
                if(m==0){
                goto epa44;
                }
                printf("Erotisi 3\n");
                printf("Poios einai o megaliteros se ogko nerou potamos ston kosmo\n");
                printf("(1) Amazonios\n");
                printf("(2) Neilos\n");
                scanf("%d",&z3);
                switch(z3){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat33=vat33+2;
                        goto epa44;
                        break;
                    }
                    case 2:{
                        printf("La8os apantisi\n");
                        vat33=vat33+1;
                        goto epa44;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        m--;
                        vat33=vat33-1;
                        goto z31;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat33=vat33-1;
                m--;
                goto ero33;
                break;
            }
        }
        epa44:
        m=2;
        ero44:
        if(m==0){
        goto epa55;
        }
        printf("Erotisi 4\n");
        printf("Pose itan oi mouses stin arxaia mi8ologia\n");
        printf("(1) 7\n");
        printf("(2) 9\n");
        printf("(3) 12\n");
        scanf("%d",&a3);
        switch(a3){
            case 1:{
                printf("La8os apantisi\n");
                vat44=vat44-1;
                a3:
                if(m==0){
                goto epa55;
                }
                printf("Erotisi 4\n");
                printf("Pose itan oi mouses stin arxaia mi8ologia\n");
                printf("(2) 9\n");
                printf("(3) 12\n");
                scanf("%d",&a3);
                switch(a3){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat44=vat44+1;
                        goto epa55;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat44=vat44+1;
                        goto epa55;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat44=vat44-1;
                        m--;
                        goto a3;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat44=vat44+2;
                goto epa55;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat44=vat44-1;
                a31:
                if(m==0){
                goto epa55;
                }
                printf("Erotisi 4\n");
                printf("Pose itan oi mouses stin arxaia mi8ologia\n");
                printf("(1) 7\n");
                printf("(2) 9\n");
                scanf("%d",&a3);
                switch(a3){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat44=vat44+1;
                        goto epa55;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat44=vat44+2;
                        goto epa55;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat44=vat44-1;
                        m--;
                        goto a31;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat44=vat44-1;
                m--;
                goto ero44;
                break; 
            }
        }
        epa55:
        m=2;
        ero55:
        if(m==0){
        goto epa66;
        }
        printf("Erotisi 5\n");
        printf("Ti einai presbiopia\n");
        printf("(1) Otan blepeis pragmata me 8oloura\n");
        printf("(2) Otan duskoleuesai na deis apo makria\n");
        printf("(3) Otan duskoleuesai na deis apo konta\n");
        scanf("%d",&b3);
        switch(b3){
            case 1:{
                printf("La8os apantisi\n");
                vat55=vat55-1;
                b3:
                if(m==0){
                goto epa66;
                }
                printf("Erotisi 5\n");
                printf("Ti einai presbiopia\n");
                printf("(2) Otan duskoleuesai na deis apo makria\n");
                printf("(3) Otan duskoleuesai na deis apo konta\n");
                scanf("%d",&b3);
                switch(b3){
                    case 2:{
                        printf("La8os apantisi\n");
                        vat55=vat55+1;
                        goto epa66;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat55=vat55+2;
                        goto epa66;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat55=vat55-1;
                        m--;
                        goto b3; 
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat55=vat55-1;
                b31:
                if(m==0){
                goto epa66;
                }
                printf("Erotisi 5\n");
                printf("Ti einai presbiopia\n");
                printf("(1) Otan blepeis pragmata me 8oloura\n");
                printf("(3) Otan duskoleuesai na deis apo konta\n");
                scanf("%d",&b3);
                switch(b3){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat55=vat55+1;
                        goto epa66;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat55=vat55+2;
                        goto epa66;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat55=vat55-1;
                        m--;
                        goto b31; 
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat55=vat55+2;
                goto epa66;
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat55=vat55-1;
                m--;
                goto ero55;
                break;  
            }
        }
        epa66:
        m=2;
        ero66:
        if(m==0){
        goto epa77;
        }
        printf("Erotisi 6\n");
        printf("Poia xora brisketai pio konta ston Boreio Polo\n");
        printf("(1) Kanadas\n");
        printf("(2) Finlandia\n");
        printf("(3) Rosia\n");
        scanf("%d",&c3);
        switch(c3){
            case 1:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat66=vat66+2;
                goto epa77;
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat66=vat66-1;
                c3:
                if(m==0){
                goto epa77;
                }
                printf("Erotisi 6\n");
                printf("Poia xora brisketai pio konta ston Boreio Polo\n");
                printf("(1) Kanadas\n");
                printf("(3) Rosia\n");
                scanf("%d",&c3);
                switch(c3){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat66=vat66+2;
                        goto epa77;
                        break;
                    }
                    case 2:{
                        printf("La8os apantisi\n");
                        vat66=vat66+1;
                        goto epa77;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat66=vat66-1;
                        m--;
                        goto c3;
                        break; 
                    }
                }
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat66=vat66-1;
                c31:
                if(m==0){
                goto epa77;
                }
                printf("Erotisi 6\n");
                printf("Poia xora brisketai pio konta ston Boreio Polo\n");
                printf("(1) Kanadas\n");
                printf("(2) Finlandia\n");
                scanf("%d",&c3);
                switch(c3){
                    case 1:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat66=vat66+2;
                        goto epa77;
                        break;
                    }
                    case 2:{
                        printf("La8os apantisi\n");
                        vat66=vat66+1;
                        goto epa77;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat66=vat66-1;
                        m--;
                        goto c31;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat66=vat66-1;
                m--;
                goto ero66;
                break;  
            }
        }
        epa77:
        m=2;
        ero77:
        if(m==0){
        goto epa88;
        }
        printf("Erotisi 7\n");
        printf("Poios einai o idritis tou Instagram\n");
        printf("(1) Jack Dorsey\n");
        printf("(2) Kevin Systrom\n");
        printf("(3) Mark Zuckerberg\n");
        scanf("%d",&x4);
        switch(x4){
            case 1:{
                printf("La8os apantisi\n");
                vat77=vat77-1;
                x4:
                if(m==0){
                goto epa88;
                }
                printf("Erotisi 7\n");
                printf("Poios einai o idritis tou Instagram\n");
                printf("(2) Kevin Systrom\n");
                printf("(3) Mark Zuckerberg\n");
                scanf("%d",&x4);
                switch(x4){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat77=vat77+2;
                        goto epa88;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat77=vat77+1;
                        goto epa88;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat77=vat77-1;
                        m--;
                        goto x4;
                        break;  
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat77=vat77+2;
                goto epa88;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat77=vat77-1;
                x41:
                if(m==0){
                goto epa88;
                }
                printf("Erotisi 7\n");
                printf("Poios einai o idritis tou Instagram\n");
                printf("(1) Jack Dorsey\n");
                printf("(2) Kevin Systrom\n");
                scanf("%d",&x4);
                switch(x4){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat77=vat77+1;
                        goto epa88;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat77=vat77+2;
                        goto epa88;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat77=vat77-1;
                        m--;
                        goto x41;
                        break;   
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat77=vat77-1;
                m--;
                goto ero77;
                break;
            }
        }
        epa88:
        m=2;
        ero88:
        if(m==0){
        goto epa99;
        }
        printf("Erotisi 8\n");
        printf("Poia einai i ektasi tis Gis\n");
        printf("(1) Peripou 350 ekatommiria tetragonika xiliometra\n");
        printf("(2) Peripou 500 ekatommiria tetragonika xiliometra\n");
        printf("(3) Peripou 600 ekatommiria tetragonika xiliometra\n");
        scanf("%d",&y4);
        switch(y4){
            case 1:{
                printf("La8os apantisi\n");
                vat88=vat88-1;
                y4:
                if(m==0){
                goto epa99;
                }
                printf("Erotisi 8\n");
                printf("Poia einai i ektasi tis Gis\n");
                printf("(2) Peripou 500 ekatommiria tetragonika xiliometra\n");
                printf("(3) Peripou 600 ekatommiria tetragonika xiliometra\n");
                scanf("%d",&y4);
                switch(y4){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat88=vat88+2;
                        goto epa99;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat88=vat88+1;
                        goto epa99;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat88=vat88-1;
                        m--;
                        goto y4;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat88=vat88+2;
                goto epa99;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat88=vat88-1;
                y41:
                if(m==0){
                goto epa99;
                }
                printf("Erotisi 8\n");
                printf("Poia einai i ektasi tis Gis\n");
                printf("(1) Peripou 350 ekatommiria tetragonika xiliometra\n");
                printf("(2) Peripou 500 ekatommiria tetragonika xiliometra\n");
                scanf("%d",&y4);
                switch(y4){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat88=vat88-1;
                        goto epa99;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat88=vat88+2;
                        goto epa99;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat88=vat88-1;
                        m--;
                        goto y41;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat88=vat88-1;
                m--;
                goto ero88;
                break;
            }
        }
        epa99:
        m=2;
        ero99:
        if(m==0){
        goto epa1010;
        }
        printf("Erotisi 9\n");
        printf("Poios einai o efeuretis tou ilektrikou lamptira\n");
        printf("(1) Benjamin Franklin\n");
        printf("(2) Alexander Graham Bell\n");
        printf("(3) Thomas Edison\n");
        scanf("%d",&z4);
        switch(z4){
            case 1:{
                printf("La8os apantisi\n");
                vat99=vat99-1;
                z4:
                if(m==0){
                goto epa1010;
                }
                printf("Erotisi 9\n");
                printf("Poios einai o efeuretis tou ilektrikou lamptira\n");
                printf("(2) Alexander Graham Bell\n");
                printf("(3) Thomas Edison\n");
                scanf("%d",&z4);
                switch(z4){
                    case 2:{
                        printf("La8os apantisi\n");
                        vat99=vat99+1;
                        goto epa1010;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat99=vat99+2;
                        goto epa1010;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat99=vat99-1;
                        m--;
                        goto z4;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("La8os apantisi\n");
                vat99=vat99-1;
                z41:
                if(m==0){
                goto epa1010;
                }
                printf("Erotisi 9\n");
                printf("Poios einai o efeuretis tou ilektrikou lamptira\n");
                printf("(1) Benjamin Franklin\n");
                printf("(3) Thomas Edison\n");
                scanf("%d",&z4);
                switch(z4){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat99=vat99+1;
                        goto epa1010;
                        break;
                    }
                    case 3:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat99=vat99+2;
                        goto epa1010;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat99=vat99-1;
                        m--;
                        goto z41;
                        break;
                    }
                }
                break;
            }
            case 3:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat99=vat99+2;
                goto epa1010;
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat99=vat99-1;
                m--;
                goto ero99;
                break;
            }
        }
        epa1010:
        m=2;
        ero1010:
        if(m==0){
        goto genikotel;
        }
        printf("Erotisi 10\n");
        printf("Pote xtistike i piramida tis Gkizas\n");
        printf("(1) Peripou to 4000 p.x\n");
        printf("(2) Peripou to 2500 p.x\n");
        printf("(3) Peripou to 1000 p.x\n");
        scanf("%d",&a4);
        switch(a4){
            case 1:{
                printf("La8os apantisi\n");
                vat1010=vat1010-1;
                a4:
                if(m==0){
                goto genikotel;
                }
                printf("Erotisi 10\n");
                printf("Pote xtistike i piramida tis Gkizas\n");
                printf("(2) Peripou to 2500 p.x\n");
                printf("(3) Peripou to 1000 p.x\n");
                scanf("%d",&a4);
                switch(a4){
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat1010=vat1010+2;
                        goto genikotel;
                        break;
                    }
                    case 3:{
                        printf("La8os apantisi\n");
                        vat1010=vat1010-1;
                        goto genikotel;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat1010=vat1010-1;
                        m--;
                        goto a4;
                        break;
                    }
                }
                break;
            }
            case 2:{
                printf("Sosti apantisi\n");
                printf("Pires 2 pontous\n");
                vat1010=vat1010+2;
                goto genikotel;
                break;
            }
            case 3:{
                printf("La8os apantisi\n");
                vat1010=vat1010-1;
                a41:
                if(m==0){
                goto genikotel;
                }
                printf("Erotisi 10\n");
                printf("Pote xtistike i piramida tis Gkizas\n");
                printf("(1) Peripou to 4000 p.x\n");
                printf("(2) Peripou to 2500 p.x\n");
                scanf("%d",&a4);
                switch(a4){
                    case 1:{
                        printf("La8os apantisi\n");
                        vat1010=vat1010-1;
                        goto genikotel;
                        break;
                    }
                    case 2:{
                        printf("Sosti apantisi\n");
                        printf("Pires 1 ponto\n");
                        vat1010=vat1010+2;
                        goto genikotel;
                        break;
                    }
                    default:{
                        printf("Exases 1 ponto\n");
                        printf("Epanaliji erotisis\n");
                        vat1010=vat1010-1;
                        m--;
                        goto a41;
                        break;
                    }
                }
                break;
            }
            default:{
                printf("Exases 1 ponto\n");
                printf("Epanaliji erotisis\n");
                vat1010=vat1010-1;
                m--;
                goto ero1010;
                break;
            }
        }
    }
    default:{
        printf("Prepei na epilejeis 1 apo ta 2\n");
        goto arxi;
        break;
    }
}
eidikotel:
sumeid=abceidiko(vat1,vat2,vat3,vat4,vat5,vat6,vat7,vat8,vat9,vat10);
genikotel:
sumgen=abcgeniko(vat11,vat22,vat33,vat44,vat55,vat66,vat77,vat88,vat99,vat1010);
if(arxikierotisi==1){
    if(sumeid<=0){
        printf("Den pires kanenan ponto stis eidikes erotiseis\n");
    }
    else if((sumeid>=1)&&(sumeid<=19)){
        printf("Mprabo, pires %d/20 pontous stis eidikes erotiseis\n",sumeid);
    }
    else if(sumeid==20){
        printf("Aristeuses sto quiz kai pires 20/20 pontous stis eidikes erotiseis\n");
    }
}
else if(arxikierotisi==2){
    if(sumgen<=0){
        printf("Den pires kanenan ponto stis genikes erotiseis\n");
    }
    else if((sumgen>=1)&&(sumgen<=19)){
        printf("Mprabo, pires %d/20 pontous stis genikes erotiseis\n",sumgen);
    }
    else if(sumgen==20){
        printf("Aristeuses sto quiz kai pires 20/20 pontous stis genikes erotiseis\n");
    }
}
return 0;
}
int abceidiko(int vat1,int vat2,int vat3,int vat4,int vat5,int vat6,int vat7,int vat8,int vat9,int vat10){
    int sumeid2;
    sumeid2=vat1+vat2+vat3+vat4+vat5+vat6+vat7+vat8+vat9+vat10;
    return sumeid2;
}
int abcgeniko(int vat11,int vat22,int vat33,int vat44,int vat55,int vat66,int vat77,int vat88,int vat99,int vat1010){
    int sumgen2;
    sumgen2=vat11+vat22+vat33+vat44+vat55+vat66+vat77+vat88+vat99+vat1010;
    return sumgen2;
}
