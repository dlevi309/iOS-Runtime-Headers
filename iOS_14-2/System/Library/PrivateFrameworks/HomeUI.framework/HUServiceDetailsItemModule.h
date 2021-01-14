/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSourceItem:(HFItem *)arg1 ;
-(id)itemProviders;
-(HFItem *)sourceItem;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 ;
@end

