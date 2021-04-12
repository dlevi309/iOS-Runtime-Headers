/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 serviceLikeItem:(id)arg3 context:(unsigned long long)arg4 ;
-(HFItem *)scenesItem;
-(HFItem *)triggersItem;
-(HFStaticItemProvider *)staticItemProvider;
@end

