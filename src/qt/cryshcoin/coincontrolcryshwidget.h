// Copyright (c) 2019 The cryshcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLcryshWIDGET_H
#define COINCONTROLcryshWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlcryshWidget;
}

class CoinControlcryshWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlcryshWidget(QWidget *parent = nullptr);
    ~CoinControlcryshWidget();

private:
    Ui::CoinControlcryshWidget *ui;
};

#endif // COINCONTROLcryshWIDGET_H
