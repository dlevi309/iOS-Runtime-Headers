/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStatusItemProvider;

@interface HFHomeStatusItemManager : HFItemManager {

	HFStaticItem* _showDetailsItem;
	unsigned long long _maxStatusItemCount;
	HFStatusItemProvider* _statusItemProvider;
	long long _latestOverallPriority;
	unsigned long long _latestOverallLoadingState;

}

@property (assign,nonatomic) unsigned long long maxStatusItemCount;                     //@synthesize maxStatusItemCount=_maxStatusItemCount - In the implementation block
@property (nonatomic,retain) HFStaticItem * showDetailsItem;                            //@synthesize showDetailsItem=_showDetailsItem - In the implementation block
@property (nonatomic,retain) HFStatusItemProvider * statusItemProvider;                 //@synthesize statusItemProvider=_statusItemProvider - In the implementation block
@property (assign,nonatomic) long long latestOverallPriority;                           //@synthesize latestOverallPriority=_latestOverallPriority - In the implementation block
@property (assign,nonatomic) unsigned long long latestOverallLoadingState;              //@synthesize latestOverallLoadingState=_latestOverallLoadingState - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)initWithMaxStatusItems:(unsigned long long)arg1 delegate:(id)arg2 ;
-(id)_showDetailsItemTitle;
-(void)setShowDetailsItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)showDetailsItem;
-(void)setStatusItemProvider:(HFStatusItemProvider *)arg1 ;
-(HFStatusItemProvider *)statusItemProvider;
-(unsigned long long)maxStatusItemCount;
-(unsigned long long)_overflowStatusItemCount;
-(long long)_overallPriority;
-(void)setMaxStatusItemCount:(unsigned long long)arg1 ;
-(long long)latestOverallPriority;
-(void)setLatestOverallPriority:(long long)arg1 ;
-(unsigned long long)latestOverallLoadingState;
-(void)setLatestOverallLoadingState:(unsigned long long)arg1 ;
@end

