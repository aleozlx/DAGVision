#include "window2.h"
#include "renderarea.h"

#include <QtWidgets>

window2::window2(QWidget *parent) : QWidget(parent)
{
    renderArea = new RenderArea;
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setColumnStretch(0, 1);
    mainLayout->setColumnStretch(3, 1);
    mainLayout->addWidget(renderArea, 0, 0, 1, 4);
    setLayout(mainLayout);
    setWindowTitle(tr("Rect Test"));

    renderArea->setShape(RenderArea::Rect);
}
