// SPDX-FileCopyrightText: 2016 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef DCC_TRANSLUCENTFRAME_H
#define DCC_TRANSLUCENTFRAME_H

#include <QFrame>

namespace def {
namespace widgets {

class TranslucentFrame : public QFrame
{
    Q_OBJECT
public:
    explicit TranslucentFrame(QWidget *parent = nullptr);
};

}
} // namespace dcc

#endif // DCC_TRANSLUCENTFRAME_H
