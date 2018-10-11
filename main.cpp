#include <QCoreApplication>
#include <QDebug>

void test(int number) {
    //int number = 50;
    qInfo() << "2 Test number is at: " << &number << " = " << number;
}

void testRef(int &number) {
    //int number = 50;
    qInfo() << "4 Test number is at: " << &number << " = " << number;

    int age = 44;
    qInfo() << "4 Test age is at: " << &age << " = " << age;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "1 Test number is at: " << &number << " = " << number;

    test(number);

    bool ok = true;
    if(ok) {
         qInfo() << "3 Test number is at: " << &number << " = " << number;
    }

    testRef(number);
    //age does not exist in this scope!!!
    qInfo() << "4 Test age is at: " << &age << " = " << age;

    return a.exec();
}
