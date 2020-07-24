#ifndef PAGEINFO_H
#define PAGEINFO_H

#include <QObject>
#include <DWidget>

class DeviceBaseInfo;

using namespace Dtk::Widget;
class PageInfo : public DWidget
{
public:
    PageInfo(QWidget *parent = nullptr);

    /**
     * @brief updateTable : 更新数据
     * @param lst ：需要更新的数据
     */
    virtual void updateInfo(const QList<DeviceBaseInfo *> &lst) = 0;

    virtual void setLabel(const QString &itemstr) = 0;

    virtual void clearContent();

protected:
    void paintEvent(QPaintEvent *e) override;
};

#endif // PAGEINFO_H