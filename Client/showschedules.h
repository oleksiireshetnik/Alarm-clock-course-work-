#ifndef SHOWSCHEDULES_H
#define SHOWSCHEDULES_H

#include <QWidget>
#include <QWidgetItem>

namespace Ui {
class showschedules;
}

class showschedules : public QWidget
{
    Q_OBJECT

public:
    explicit showschedules(QWidget *parent = 0);
    ~showschedules();

signals:
    void dateRequested(QString date);

private slots:
    void onSelectionChanged();
    void onChangeButtonClicked();
    void onDeleteButtonClicked();

private:
    Ui::showschedules *ui;
};

#endif // SHOWSCHEDULES_H
