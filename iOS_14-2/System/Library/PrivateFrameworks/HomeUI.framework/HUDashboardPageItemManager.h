/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFReorderableHomeKitItemList;

@interface HUDashboardPageItemManager : HFItemManager

@property (nonatomic,readonly) HFReorderableHomeKitItemList * reorderableRoomList; 
-(id)_itemForSorting;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFReorderableHomeKitItemList *)reorderableRoomList;
@end

