#ifndef SCHOOL_H
#define SCHOOL_H

#include <QObject>

class school : public QObject
{
    Q_OBJECT
public:
    explicit school(QObject *parent = nullptr);

signals:
    void sendMessages();
    void sendClose();

public slots:
};

#endif // SCHOOL_H
