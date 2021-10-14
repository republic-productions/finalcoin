// Copyright (c) 2020 The Finalcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FINALCOIN_QT_PEERTABLESORTPROXY_H
#define FINALCOIN_QT_PEERTABLESORTPROXY_H

#include <QSortFilterProxyModel>

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

class PeerTableSortProxy : public QSortFilterProxyModel
{
    Q_OBJECT

public:
    explicit PeerTableSortProxy(QObject* parent = nullptr);

protected:
    bool lessThan(const QModelIndex& left_index, const QModelIndex& right_index) const override;
};

#endif // FINALCOIN_QT_PEERTABLESORTPROXY_H
