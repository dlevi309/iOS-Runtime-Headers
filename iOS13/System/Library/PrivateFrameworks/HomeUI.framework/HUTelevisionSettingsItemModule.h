/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(id)itemProviders;
-(HMAccessory *)accessory;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFItem *)showPowerModeSelectionItem;
-(id)showPowerModeSelection;
-(void)_createItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 accessory:(id)arg3 ;
@end

