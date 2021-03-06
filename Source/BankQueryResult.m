/**
 * Copyright (c) 2009, 2013, Pecunia Project. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#import "BankQueryResult.h"

@implementation BankQueryResult

@synthesize accountNumber;
@synthesize accountSubnumber;
@synthesize bankCode;
@synthesize currency;
@synthesize balance;
@synthesize oldBalance;
@synthesize statements;
@synthesize account;
@synthesize userId;
@synthesize standingOrders;
@synthesize isImport;
@synthesize ccNumber;
@synthesize lastSettleDate;


- (BOOL)isEqual:(BankQueryResult*)result
{
    if ([accountNumber isEqualToString:result.accountNumber] && [bankCode isEqualToString:result.bankCode]) {
        return (accountSubnumber == nil && result.accountSubnumber == nil) ||
        (accountSubnumber != nil && result.accountSubnumber != nil && [accountSubnumber isEqualToString:result.accountSubnumber]);
    }
    return NO;
}

@end
