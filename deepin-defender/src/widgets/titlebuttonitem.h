// SPDX-FileCopyrightText: 2019 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "settingsitem.h"
#include "labels/tipslabel.h"

#include <QPushButton>

namespace def {
namespace widgets {

class TitleButtonItem : public SettingsItem
{
    Q_OBJECT
public:
    explicit TitleButtonItem(QWidget *parent = nullptr);

    inline QPushButton *button() { return m_button; }
    void setTitle(QString str);
    void setButtonText(QString str);

    // 设置相关标签名称
    void setAccessibleParentText(QString sAccessibleName);

Q_SIGNALS:

private:
    TipsLabel *m_titleLabel;
    QPushButton *m_button;
};

} // namespace widgets
} // namespace def
