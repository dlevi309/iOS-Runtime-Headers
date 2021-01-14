/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HFServiceLikeItem;
@class HMHome, HFItem, HFStaticItemProvider;

@interface HUAssociatedSceneAndTriggerModule : HFItemModule {

	HMHome* _home;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	unsigned long long _context;
	HFItem* _scenesItem;
	HFItem* _triggersItem;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,readonly) HFStaticItemProvider * staticItemProvider;                    //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) HFItem * scenesItem;                                          //@synthesize scenesItem=_scenesItem - In the implementation block
@property (nonatomic,readonly) HFItem * triggersItem;                                        //@synthesize triggersItem=_triggersItem - In the implementation block
-(unsigned long long)context;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(HMHome *)home;
-(HFStaticItemProvider *)staticItemProvider;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 serviceLikeItem:(id)arg3 context:(unsigned long long)arg4 ;
-(HFItem *)scenesItem;
-(HFItem *)triggersItem;
@end

