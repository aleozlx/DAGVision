#ifndef WINDOW2_H
#define WINDOW2_H

#include <QWidget>
class RenderArea;

class window2 : public QWidget
{
    Q_OBJECT
public:
    explicit window2(QWidget *parent = nullptr);

private:
    RenderArea *renderArea;
};

#endif // WINDOW2_H
