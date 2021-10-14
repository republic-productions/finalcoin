// Copyright (c) 2011-2020 The Finalcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FINALCOIN_QT_FINALCOINADDRESSVALIDATOR_H
#define FINALCOIN_QT_FINALCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FinalcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FinalcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Finalcoin address widget validator, checks for a valid finalcoin address.
 */
class FinalcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FinalcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // FINALCOIN_QT_FINALCOINADDRESSVALIDATOR_H
