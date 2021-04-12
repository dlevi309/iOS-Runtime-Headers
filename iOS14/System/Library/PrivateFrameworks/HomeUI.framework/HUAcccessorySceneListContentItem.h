/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@protocol HFServiceLikeItem;
@class HFItem, HMHome;

@interface HUAcccessorySceneListContentItem : HFItem {

	unsigned long long _contentSource;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	HMHome* _home;

}

@property (nonatomic,readonly) unsigned long long contentSource;                        //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                           //@synthesize home=_home - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)contentSource;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(HMHome *)home;
-(id)initWithContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 ;
@end

