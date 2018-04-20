#include "strutils.h"

#include <QDebug>

using namespace STU;

StrUtils::StrUtils()
{

}

int StrUtils::SubIndex(const char *chStr, int nSize, char ch)
{
    char* chTmp = (char*)malloc(nSize);
    strcpy(chTmp, chStr);
    int j = 0;
    while(chTmp[j] != ch)
    {
        j++;
    }
    free(chTmp);
    return j;
}

QPoint STU::StrUtils::SplitStrToPt(QString strXY, char chIdle)
{
    char chX[20];
    strcpy(chX, strXY.toStdString().data());
    int j = 0;
    while(chX[j] != chIdle)
    {
        j++;
    }
    qDebug() << "2" << j;
    char chX1[20];
    j = 0;
    while(chX[j] != chIdle)
    {
        chX1[j] = chX[j];
        j++;
    }
    qDebug() << "3";
    char chX2[20];
    const char* chBufx = strchr(chX1, '=');
    strcpy(chX, chBufx);
    qDebug() << chX;
    j = 1;
    while(chX[j] != '\0')
    {
        chX2[j - 1] = chX[j];
        j++;
    }

    const char* chBuf = strchr(strXY.toStdString().data(), chIdle);
    qDebug() << chBuf;
    const char* chY = strchr(chBuf, '=');
    char chY1[20];
    char chY2[20];
    strcpy(chY1, chY);
    int i = 1;
    while(chY1[i] != '\0')
    {
        chY2[i-1] = chY1[i];
        i++;
    }

    QPoint pt = QPoint(atoi(chX2), atoi(chY2));
    qDebug() << pt.x() << "--" << pt.y();
    return pt;
}
