#include <iostream>
#include "../base/SkipList.h"

// #define FILE_PATH "../store/dumpFile"

int main(int argv, char* argc[]) {

    // 键值中的key用int型，如果用其他类型，需要自定义比较函数
    // 而且如果修改key的类型，同时需要修改skipList.load_file函数
    SkipList<int, std::string> mySkipList(6);
    mySkipList.insertElement(1, "北京");
    mySkipList.insertElement(3, "上海");
    mySkipList.insertElement(5, "广州");
    mySkipList.insertElement(7, "深圳");
    mySkipList.insertElement(9, "柳州");

    // 重复键值
    mySkipList.insertElement(5, "西安");
    mySkipList.insertElement(7, "青岛");
    mySkipList.insertElement(9, "南宁");

    std::cout << "SkipList's size : " << mySkipList.size() << std::endl;

    mySkipList.dumpFile();

    std::string value;
    mySkipList.searchElement(1, value);

    mySkipList.searchElement(4, value);

    mySkipList.displayList();

    mySkipList.deleteElement(1);
    mySkipList.deleteElement(4);

    std::cout << "SkipList's size : " << mySkipList.size() << std::endl;

    mySkipList.displayList();
}
