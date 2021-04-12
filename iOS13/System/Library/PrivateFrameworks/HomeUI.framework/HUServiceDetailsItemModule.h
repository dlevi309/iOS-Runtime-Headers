/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HMHome, HFItem;

@interface HUServiceDetailsItemModule : HFItemModule {

	HMHome* _home;
	HFItem* _sourceItem;

}

@property (nonatomic,retain) HMHome * home;                    //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HFItem * sourceItem;              //@synthesize sourceItem=_sourceItem - In the implementation block
+(/*^block*/id)serviceDetailsItemSectionComparatorForSortStrategy:(id)arg1 ;
-(HMHome *)home;
-(id)itemProviders;
-(void)setHome:(HMHome *)arg1 ;
-(HFItem *)sourceItem;
-(void)setSourceItem:(HFItem *)arg1 ;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
@end

