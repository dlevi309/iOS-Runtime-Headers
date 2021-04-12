/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)context;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 serviceLikeItem:(id)arg2 context:(unsigned long long)arg3 ;
@end

