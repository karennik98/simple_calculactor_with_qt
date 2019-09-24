#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QStack>
#include <QLCDNumber>
#include <QPushButton>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
public:
    QPushButton* createButton(const QString& str);
    void calculate();
public slots:
    void slotButtonClocked();
private:
    QLCDNumber* m_plcd;
    QStack<QString> m_stk;
    QString m_strDisplay;
};
#endif // CALCULATOR_H
