/*
* @title    : 1546번 평균(브론즈 5)
* @content  : 1차원 배열
* @author   : 신세은
* @date     : 230527
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/
#include <iostream>

using namespace std;

int main()
{
    int iN = 0, iM = 0, iSum = 0;
    cin >> iN;
    int iArray[1000] = { 0 };
    double newAvg = 0.0;

    for (int i = 0; i < iN; ++i)
    {
        cin >> iArray[i];

        if (iM < iArray[i])
            iM = iArray[i];
    }

    for (int i = 0; i < iN; ++i)
    {
        newAvg += (double)iArray[i] / (double)iM * 100;
    }

    newAvg /= iN;

    cout << fixed;
    cout.precision(2);

    cout << newAvg;

    return 0;
}