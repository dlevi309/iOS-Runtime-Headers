/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class NSSet, HMHome, HMAccessory, HFItem;

@interface HUTelevisionSettingsItemModule : HFItemModule {

	NSSet* _itemProviders;
	HMHome* _home;
	HMAccessory* _accessory;
	HFItem* _showPowerModeSelectionItem;

}

@property (nonatomic,readonly) HMHome * home;                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HFItem * showPowerModeSelectionItem;              //@synthesize showPowerModeSelectionItem=_showPowerModeSelectionItem - In the implementation block
+(id)_powerModeSelectionCharacteristicForAccessory:(id)arg1 ;
+(BOOL)_supportsAccessory:(id)arg1 ;
-(HMAccessory *)accessory;
-(id)itemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(HFItem *)showPowerModeSelectionItem;
-(id)showPowerModeSelection;
-(void)_createItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 accessory:(id)arg3 ;
@end

