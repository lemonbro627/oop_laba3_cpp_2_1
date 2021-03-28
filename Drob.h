class Drob  {
    protected:
        int chis = 0;
        int znam = 1;
    public:
        Drob();
        Drob(int i, int j);
        void SetChis(int i);
        void SetZnam(int i);
        void SetDrob(int i, int j);
        int& GetChis();
        int& GetZnam();
        //-------------------------------------
        friend Drob& operator*(Drob& left, Drob& right);
        friend Drob& operator/(Drob& left, Drob& right);
        friend Drob& operator+(Drob& left, Drob& right);
        friend Drob& operator-(Drob& left, Drob& right);
        Drob& operator=(Drob& right);
        friend bool operator<(Drob& left, Drob& right);
        friend bool operator>(Drob& left, Drob& right);
        friend bool operator==(Drob& left, Drob& right);
};
