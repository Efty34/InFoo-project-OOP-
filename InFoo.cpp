#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Team
{
    // string name;
    string country;
    string league;
    int foundedyear;
    string coachname;
    string biggestwin;
    string biggestloss;

public:
    string name;
    /*string country;
    string league;
    int foundedyear;
    string coachname;
    string biggestwin;
    string biggestloss;*/
    Team()
    {
    }
    Team(string Name, string Country, string League, int Foundedyear, string Coachname, string Biggestwin, string Biggestloss)
    {
        name = Name;
        country = Country;
        league = League;
        foundedyear = Foundedyear;
        coachname = Coachname;
        biggestwin = Biggestwin;
        biggestloss = Biggestloss;
    }

    void displayy()
    {
        cout << "Name is: " << name << endl;
        cout << "Name of the country: " << country << endl;
        cout << "Name of the league: " << league << endl;
        cout << "Founding year is: " << foundedyear << endl;
        cout << "Coach name: " << coachname << endl;
        cout << "Biggest win: " << biggestwin << endl;
        cout << "Biggest loss: " << biggestloss << endl;
    }
};

class club : public Team
{
    string ownleague;
    int nownleague;
    // string ucl;
    int nucl;
    string valuable_transfer;
    string vt_price;

public:
    club() {}
    club(string Name, string Country, string League, int Foundedyear, string Coachname, string Biggestwin, string Biggestloss, string Ownleague, int Nownleague, int Nucl, string Valuable_transfer, string Vt_price) : Team(Name, Country, League, Foundedyear, Coachname, Biggestwin, Biggestloss)
    {
        ownleague = Ownleague;
        nownleague = Nownleague;
        // ucl = Ucl;
        nucl = Nucl;
        valuable_transfer = Valuable_transfer;
        vt_price = Vt_price;
    }

    void displayy()
    {
        Team::displayy();
        cout << "Own league: " << ownleague << endl;
        cout << "Number of times won own league: " << nownleague << endl;
        // cout << "UCL: " << ucl << endl;
        cout << "Number of times won UCL: " << nucl << endl;
        cout << "Valuable transfer: " << valuable_transfer << endl;
        cout << "Price of valuable transfer: " << vt_price << endl;
    }
};

class international_team : public Team
{
    string continental;
    int ncontinental;
    // string wc;
    int nwc;

public:
    international_team() {}
    international_team(string Name, string Country, string League, int Foundedyear, string Coachname, string Biggestwin, string Biggestloss, string Continental, int Ncontinental, int Nwc) : Team(Name, Country, League, Foundedyear, Coachname, Biggestwin, Biggestloss)
    {
        continental = Continental;
        ncontinental = Ncontinental;
        // wc = Wc;
        nwc = Nwc;
    }

    void displayy()
    {
        Team::displayy();
        {
            cout << "Continental Trophy: " << continental << endl;
            cout << "NUmber of times won continental trophy: " << ncontinental << endl;
            cout << "Number of time won world cup:" << nwc << endl;
        }
    }
};

class club_database
{
    club c[10];

public:
    club_database()
    {
        c[0] = club("Real Madrid", "Spain", "La-Liga", 1902, "Carlo Ancelotti", "11-1 against Barcelona", "8-1 against Espanyol", "La-Liga", 33, 14, "Eden Hazard", "£88.3M");
        c[1] = club("Barcelona", "Spain", "La-Liga", 1899, " Xavi Hernandez", "10-1 against  Gimnastic de Tarragona", "12-1 against Athletic Club", "La-Liga", 26, 5, "Ousmane Dembele", "€120M");
        c[2] = club("Manchester City", "England", "English Premier League", 1880, "Pep Guardiola", "12-0 against Liverpool", "8-1 against Middlesbrough", "English Premier League", 8, 0, "Jack Grealish", "£100M");
        c[3] = club("Manchester United", "England", "English Premier League", 1878, "Erik ten Hag", "9-0 against Southampton", "7-0 against Blackburn", "English Premier League", 13, 3, "Paul Pogba", "£94.5M");
        c[4] = club("Arsenal", "England", "English Premier League", 1886, "Mikel Arteta", "12-0 against Loughborough", "8-2 against Manchester United", "English Premier League", 3, 0, "Nicolas Pepe", " £72M");
        c[5] = club("Bayern Munich", "Germany", "Bundesliga", 1990, "Thomas Tuchel", "11-1 against Borussia Dortmund ", "7-1 against Fortuna Dusseldorf", "Bundesliga", 31, 6, "Lucas Hernandez", "€80.00M");
        c[6] = club("Paris Saint Germain", "Paris", "Ligue-1", 1970, "Christophe Galtier", "10-0 against  Cote Chaude", "6-0 against Nantes", "Ligue-1", 10, 0, "Neymar Jr", "€222M");
        c[7] = club("Juventus", "Italy", "Seria A", 1897, "Massimiliano Allegri", "7-0 against Parma", "7-1 against AC Millan", "Seria A", 36, 2, "Cristiano Ronaldo", " €110M");
        c[8] = club("A.C Millan", "Italy", "Ligue-1", 1899, "Stefano Pioli", "13-0 against Audax Modena", "8-0 against Bologna", "Seria A", 18, 7, "Leonardo Bonucci", " £38M");
        c[9] = club("Liverpool", "England", "English Premier League", 1898, "Jurgen Klopp", "11-0 against Stromsgodset", "7-2 against Aston Villa", "English Premier League", 19, 6, "Darwin Nunez", " £85.6M");
    }

    club searchclub(string name)
    {
        for (int i = 0; i < 10; i++)
        {
            if (c[i].name.compare(name) == 0)
            {
                return c[i];
            }
        }
    }
};

class national_Database
{
    international_team it[10];

public:
    national_Database()
    {
        it[0] = international_team("Brazil", "N/A", "N/A", 1914, "Tite", "14-0 against Nicaragua", "7-1 against Germany", "Copa America", 9, 5);
    }
    international_team searchnational(string name)
    {
        for (int i = 0; i < 10; i++)
        {
            if (it[i].name.compare(name) == 0)
            {
                return it[i];
            }
        }
    }
};

int main()
{
    // main code
    //  club_database a;
    /*string clubname;
    cout << "Enter a club name: ";
    cin >> clubname;
    club x = a.searchclub(clubname);
    x.displayy();*/

    

    int op;
    char c;
    do
    {
        cout << "1.Club Information" << endl;
        cout << "2.Internation Team Information" << endl;
        cout << "----------------------------------" << endl;
        cout<<endl;
        cout << "Enter Choice:";
        cin >> op;


        if (op == 1)
        {
            cout << "----------Club Information----------" << endl;
            cout<<endl;
            cout<<"1.Real Madrid, 2.Barcelona, 3.Manchester City, 4.Manchester United, 5.Arsenal, 6.Bayern Munich, 7.Paris Saint Germain, 8.Juventus, 9.A.C Millan, 10.Liverpool"<<endl;
            cout<<endl;
            club_database a;

            string clubname;
            cout << "=> Enter a club name: ";
            cin >> clubname;
            cout<<endl;
            club x = a.searchclub(clubname);
            x.displayy();
        }
        else
        {
            cout << "----------International Team Information----------" << endl;
            national_Database b;
            string nationalteam;
            cout << "Enter a national team name: ";
            cin >> nationalteam;
            international_team x = b.searchnational(nationalteam);
            x.displayy();
        }
        cout<<endl;
        cout <<"Do you want to Continue or Exit [Y/N]? : ";
        cin >> c;
        cout<<endl;
    } while (c == 'y' || c == 'Y');

    return 0;
}
