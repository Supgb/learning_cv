#include<opencv2/core.hpp>
#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat convex = Mat::zeros(480, 640, CV_8UC3);

	circle(convex, Point(320, 240), 5, Scalar(255, 0, 255), -1);
	ellipse(convex, Point(320, 240), Size(100, 200), 0, 0, 360, Scalar(0, 255, 0), 3);
	// Size(sub axe, main axe)
	ellipse(convex, Point(320, 240), Size(100, 200), 45, 0, 360, Scalar(0, 255, 0), 3);
	ellipse(convex, Point(320, 240), Size(100, 200), 90, 0, 360, Scalar(0, 255, 0), 3);
	ellipse(convex, Point(320, 240), Size(100, 200), -45, 0, 360, Scalar(0, 255, 0), 3);

	imshow("win", convex);
	waitKey(0);
	destroyAllWindows();
}