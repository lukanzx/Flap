#ifndef BESTSCORE_H
#define BESTSCORE_H

#include<qfile.h>
#include<qstring.h>
#include<qcoreapplication.h>
#include<qdebug.h>

class bestscore
{

public:

    // 构造函数
    bestscore();

    // 初始化最高分分数
    int score;

    //存储最高分
    void save();

    //读入最高分
    void init();
};

#endif // SCORE_H
