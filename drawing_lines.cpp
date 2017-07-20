#include<opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	//g(i, j) = alpha*f(i, j) + beta;
	double alpha = 2.2;		// Contrast control;
	int beta = 50;			// Brightness control;

						// Introduction;

	Mat src = imread(argv[1]);
	Mat dst = Mat::zeros(src.size(), src.type());

	for (int i = 0; i < src.rows - 1; i++)
	{
		const uchar* _1Df = src.ptr<uchar>(i);
		uchar* _1Dd = dst.ptr<uchar>(i);
		for (int j = 0; j < src.cols*src.channels(); j++)
		{
			*_1Dd++ = saturate_cast<uchar>(alpha*_1Df[j] + beta);
		}
	}

	imshow("win", dst);
	imshow("origal", src);
	waitKey(0);


}