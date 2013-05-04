/**
 * Copyright (c) 2012, 2013, Pecunia Project. All rights reserved.
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

@class TransfersListView;
@class TransferTemplate;

@protocol TransfersActionDelegate

- (void)draggingStartsFor: (id)sender;
- (BOOL)canAcceptDropFor: (id)sender context: (id<NSDraggingInfo>)info;
- (void)concludeDropOperation: (id)sender context: (id<NSDraggingInfo>)info;
- (BOOL)startTransferFromTemplate: (TransferTemplate *)template;
- (void)deleteSelectionFrom: (id)sender;

@end

@interface TransfersListView : PXListView <PXListViewDelegate>
{
@private
    id observedObject;

    NSDateFormatter *dateFormatter;
    NSCalendar      *calendar;

    BOOL pendingReload;
    BOOL pendingRefresh;
    BOOL autoCasing;
}

@property (nonatomic, strong) id<TransfersActionDelegate> owner; // The member "delegate" is already defined.
@property (nonatomic, strong) NSArray                     *dataSource;

@end
