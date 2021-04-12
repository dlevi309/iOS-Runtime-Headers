/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@protocol OS_dispatch_queue;
@class NSObject, HFStaticItem;

@interface HUSiriHistoryItemManager : HFItemManager {

	NSObject*<OS_dispatch_queue> _queue;
	HFStaticItem* _deleteSiriHistoryItem;

}

@property (nonatomic,retain) HFStaticItem * deleteSiriHistoryItem;              //@synthesize deleteSiriHistoryItem=_deleteSiriHistoryItem - In the implementation block
-(id)didSelectItemAtIndexPath:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setDeleteSiriHistoryItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)deleteSiriHistoryItem;
-(id)initWithDelegate:(id)arg1 groupItem:(id)arg2 ;
-(id)didUpdateItemAtIndexPath:(id)arg1 ;
@end

