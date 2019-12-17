#include "mainwindow.h"
#include <QApplication>

int execute(int argc, char *argv[])
{
    std::cout << "Starting in console mode..." << std::endl;
//    utils_tree<int>* tree = nullptr;
//    for(int i = 0; i < argc; i++) {
//        if(!strcmp("console", argv[i]) || !strcmp("-console", argv[i]) || !strcmp("-c", argv[i])) continue;
//        std::cout << "Tree found: " << argv[i] << std::endl;
//        std::string s = argv[i];
//        tree = new utils_tree<int>(s);
//    }
//    if (!tree) return 1;
//    if (tree->is_bst()) std::cout << "Tree is BST" << std::endl;
//    else std::cout << "Tree is not BST" << std::endl;
//    if (tree->is_pyramid()) std::cout << "Tree is pyramid" << std::endl;
//    else std::cout << "Tree is not pyramid" << std::endl;
//    delete tree;
    return 0;
}


int main(int argc, char *argv[])
{
    for(int i = 0; i < argc; i++) {
        if(!strcmp("console", argv[i]) || !strcmp("-console", argv[i]) || !strcmp("-c", argv[i])) {
            return execute(argc - 1, argv + 1);
        }
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}