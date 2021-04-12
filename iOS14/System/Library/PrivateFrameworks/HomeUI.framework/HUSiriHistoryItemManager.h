/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDeleteSiriHistoryItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)deleteSiriHistoryItem;
-(id)initWithDelegate:(id)arg1 groupItem:(id)arg2 ;
-(id)didUpdateItemAtIndexPath:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)didSelectItemAtIndexPath:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
@end

