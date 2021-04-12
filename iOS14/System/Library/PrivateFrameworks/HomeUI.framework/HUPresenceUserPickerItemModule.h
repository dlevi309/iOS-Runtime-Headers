/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@protocol HUPresenceUserPickerItemModuleDelegate;
@class HUPresenceLocationDeviceFooterItem, HUPresenceActivationOptionItem, HMHome, HFPresenceEventBuilder, HUPresenceUserPickerItemModuleOptions, NSDictionary, HFStaticItemProvider, HULocationDeviceManager, HFItem;

@interface HUPresenceUserPickerItemModule : HFItemModule {

	HUPresenceLocationDeviceFooterItem* _footerItem;
	HUPresenceActivationOptionItem* _singleUserSummaryItem;
	HMHome* _home;
	id<HUPresenceUserPickerItemModuleDelegate> _delegate;
	HFPresenceEventBuilder* _presenceEventBuilder;
	HUPresenceUserPickerItemModuleOptions* _options;
	NSDictionary* _activationOptionStateByGranularity;
	HFStaticItemProvider* _staticItemProvider;
	HULocationDeviceManager* _locationDeviceManager;

}

@property (nonatomic,readonly) NSDictionary * activationOptionStateByGranularity;                     //@synthesize activationOptionStateByGranularity=_activationOptionStateByGranularity - In the implementation block
@property (nonatomic,readonly) HFStaticItemProvider * staticItemProvider;                             //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;                       //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUPresenceUserPickerItemModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HFPresenceEventBuilder * presenceEventBuilder;                         //@synthesize presenceEventBuilder=_presenceEventBuilder - In the implementation block
@property (nonatomic,retain) HUPresenceUserPickerItemModuleOptions * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) HFItem * footerItem;                                                   //@synthesize footerItem=_footerItem - In the implementation block
@property (nonatomic,readonly) HFItem * singleUserSummaryItem;                                        //@synthesize singleUserSummaryItem=_singleUserSummaryItem - In the implementation block
+(id)sectionID;
+(/*^block*/id)_userItemComparator;
+(id)footerSectionID;
-(id<HUPresenceUserPickerItemModuleDelegate>)delegate;
-(HFItem *)footerItem;
-(HUPresenceUserPickerItemModuleOptions *)options;
-(void)setOptions:(HUPresenceUserPickerItemModuleOptions *)arg1 ;
-(void)setDelegate:(id<HUPresenceUserPickerItemModuleDelegate>)arg1 ;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(HFStaticItemProvider *)staticItemProvider;
-(void)_createItemProviders;
-(HULocationDeviceManager *)locationDeviceManager;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 presenceEvent:(id)arg3 options:(id)arg4 delegate:(id)arg5 ;
-(HFItem *)singleUserSummaryItem;
-(NSDictionary *)activationOptionStateByGranularity;
-(HFPresenceEventBuilder *)presenceEventBuilder;
-(BOOL)_isUserHandleSelected:(id)arg1 ;
-(unsigned long long)_activationGranularityForUserItem:(id)arg1 ;
-(void)_updateSelected:(BOOL)arg1 forUserHandle:(id)arg2 ;
-(void)_resetSelectionForCustomLocation;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(id)stateForActivationOptionItem:(id)arg1 ;
-(BOOL)_shouldUseSingleUserStyle;
-(id)_sortedActivationGranularities;
-(id)_allSelectedAndSupportedUsers;
-(BOOL)_canDeselectUserHandle:(id)arg1 ;
-(id)activationOptionItemForGranularity:(unsigned long long)arg1 ;
-(void)selectActivationOptionItem:(id)arg1 ;
-(void)toggleExpandedForActivationOptionItem:(id)arg1 ;
-(id)stateForUserItem:(id)arg1 ;
-(void)selectUserItem:(id)arg1 ;
-(void)deselectUserItem:(id)arg1 ;
-(id)confirmationPromptForOptionItem:(id)arg1 ;
-(BOOL)_isPresenceAuthorizedForUser:(id)arg1 ;
@end

