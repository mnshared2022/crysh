// Copyright (c) 2019 The cryshcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "qt/cryshcoin/settings/settingsnetworkwidget.h"
#include "qt/cryshcoin/settings/forms/ui_settingsnetworkwidget.h"
#include "optionsmodel.h"
#include "qt/cryshcoin/qtutils.h"

SettingsNetworkWidget::SettingsNetworkWidget(cryshcoinGUI* _window, QWidget *parent) :
    PWidget(_window, parent),
    ui(new Ui::SettingsNetworkWidget)
{
    ui->setupUi(this);

    this->setStyleSheet(parent->styleSheet());

    // Containers
    ui->left->setProperty("cssClass", "container");
    ui->left->setContentsMargins(10,10,10,10);

    // Buttons
    ui->pushButtonSave->setText(tr("SAVE"));
    ui->pushButtonReset->setText(tr("Reset to default"));
    setCssBtnPrimary(ui->pushButtonSave);
    setCssBtnSecondary(ui->pushButtonReset);

    connect(ui->pushButtonSave, SIGNAL(clicked()), parent, SLOT(onSaveOptionsClicked()));
}

void SettingsNetworkWidget::setMapper(QDataWidgetMapper *mapper){
}

SettingsNetworkWidget::~SettingsNetworkWidget()
{
    delete ui;
}
