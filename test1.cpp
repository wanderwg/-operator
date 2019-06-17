class Date
{
public:
	Date(int year = 2010, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//Ç°ÖÃ++
	Date& operator++()
	{
		_day += 1;
		return *this;
	}

	//ºóÖÃ++
	Date operator++(int)
	{
		Date temp(*this);
		_day += 1;
		return temp;
	}

private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2019, 6, 17);
	Date d2;

	d2 = ++d1;
	d2 = d1++;
	return 0;
}
