/**
 * Copyright (c) 2012, Pecunia Project. All rights reserved.
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

#import <Cocoa/Cocoa.h>

#import "PXListView.h"
#import "TransfersListView.h"

@interface TransferTemplatesListView : PXListView <PXListViewDelegate>
{
@private
    id observedObject;
    id<TransfersActionDelegate> owner; // The member "delegate" is already taken.
}

@property (nonatomic, retain) id<TransfersActionDelegate> owner;
@property (nonatomic, readonly) NSNumberFormatter *numberFormatter;
@property (nonatomic, retain) NSArray *dataSource;

@end
