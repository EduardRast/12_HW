#include <iostream>
#include <cmath>

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
		std::cout << "Point2d(" << or_x << ", " << or_y << ")\n";
	}
	
	double distanceTo(const Point2d& other) const
	{
		return std::sqrt((or_x - other.or_x) * (or_x - other.or_x) + (or_y - other.or_y) * (or_y - other.or_y));
	}
};


int main()
{
   Point2d first{};
   Point2d second{ 5.6, 8.8};
   first.print();
   second.print();

    return 0;
}v
