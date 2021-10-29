#include <cmath>
#include <iostream>

class Point2d
{
private:
	double or_x{};
	double or_y{};

public:
	Point2d(double x = 0.0, double y = 0.0)
		: or_x{ x }, or_y{ y }
	{
	}

	void print() const
	{
		std::cout << "Point2d(" << or_x << " , " << or_y << ")\n";
	}

	friend double distanceFrom(const Point2d& x, const Point2d& y);

};

double distanceFrom(const Point2d& a, const Point2d& b)
{
	return std::sqrt((a.or_x - b.or_x) * (a.or_x - b.or_x) + (a.or_y - b.or_y) * (a.or_y - b.or_y));
}

int main()
{
	Point2d first{};
	Point2d second{ 3.0, 4.0 };
	first.print();
	second.print();
	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}
