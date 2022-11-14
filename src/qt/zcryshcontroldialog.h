// Copyright (c) 2017-2019 The cryshcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZcryshCONTROLDIALOG_H
#define ZcryshCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zcrysh/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZcryshControlDialog;
}

class CZcryshControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZcryshControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZcryshControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZcryshControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZcryshControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZcryshControlDialog(QWidget *parent);
    ~ZcryshControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZcryshControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZcryshControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZcryshCONTROLDIALOG_H
