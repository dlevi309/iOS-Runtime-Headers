/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@protocol HFServiceLikeItem;
@class HFItem, HMHome;

@interface HUAssociatedSceneListItem : HFItem {

	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	HMHome* _home;
	unsigned long long _context;

}

@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                              //@synthesize context=_context - In the implementation block
-(unsigned long long)context;
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(id)initWithHome:(id)arg1 serviceLikeItem:(id)arg2 context:(unsigned long long)arg3 ;
@end

