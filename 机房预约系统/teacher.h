#pragma once 
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "Identity.h"
#include "orderFile.h"
#include <vector>

class Teacher: public Identity
{
public:

    // 默认构造
    Teacher();

    // 有参构造
    Teacher(int empId, string name, string pwd);

    // 菜单界面
    virtual void operMenu();

    // 查看所有预约
    void showAllOrder();

    // 审核预约
    void validOrder();

    // 教师编号
    int m_EmpId;

};