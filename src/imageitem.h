#ifndef IMAGEITEM_H
#define IMAGEITEM_H

#include <QGraphicsPixmapItem>
#include <QPixmapCache>

class ImageItem : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    explicit ImageItem(QGraphicsItem *parent = 0);
    explicit ImageItem(const QPixmap &pixmap,QGraphicsItem *parent = 0);
    virtual ~ImageItem();

    void adjust();
    void adjust(int sx, int sy);

};

#endif
