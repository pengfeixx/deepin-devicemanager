/*
* Copyright (C) 2019 ~ 2020 UnionTech Software Technology Co.,Ltd
*
* Author:      zhangkai <zhangkai@uniontech.com>
* Maintainer:  zhangkai <zhangkai@uniontech.com>
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "../src/Widget/RichTextDelegate.h"
#include "../src/Page/PageTableWidget.h"
#include "../tests/ut_Head.h"
#include <QCoreApplication>
#include <QPaintEvent>
#include <QPainter>

#include <gtest/gtest.h>
#include <tests/stub.h>

class RichTextDelegate_UT : public UT_HEAD
{
public:
    virtual void setup()
    {
    }
    void TearDown()
    {
        delete m_rtDelegate;
    }
    RichTextDelegate *m_rtDelegate;
};

TEST_F(RichTextDelegate_UT, ut_paint)
{
    m_rtDelegate = new RichTextDelegate(nullptr);
    PageTableWidget *widget = new PageTableWidget;
    QStyleOptionViewItem option;
    QPainter painter(widget);
    QModelIndex index;
    m_rtDelegate->paint(&painter, option, index);
}

TEST_F(RichTextDelegate_UT, ut_createEditor)
{
    m_rtDelegate = new RichTextDelegate(nullptr);
    PageTableWidget *widget = new PageTableWidget;
    QStyleOptionViewItem option;
    QPainter painter(widget);
    QModelIndex index;
    m_rtDelegate->createEditor(nullptr, option, index);
}

TEST_F(RichTextDelegate_UT, ut_sizeHint)
{
    m_rtDelegate = new RichTextDelegate(nullptr);
    PageTableWidget *widget = new PageTableWidget;
    QStyleOptionViewItem option;
    QPainter painter(widget);
    QModelIndex index;
    m_rtDelegate->sizeHint(option, index);
}

TEST_F(RichTextDelegate_UT, ut_addRow)
{
    m_rtDelegate = new RichTextDelegate(nullptr);
    QDomDocument doc;
    QDomElement table;
    doc.setNodeValue("/");
    QPair<QString, QString> pair = QPair<QString, QString>("/", "/");
    m_rtDelegate->addRow(doc, table, pair);
}
