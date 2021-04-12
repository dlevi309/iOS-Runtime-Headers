/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUNetworkConfigurationSettingsModule, HFNetworkConfigurationGroupItem;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager {

	HUNetworkConfigurationSettingsModule* _networkConfigurationSettingsModule;

}

@property (nonatomic,readonly) HFNetworkConfigurationGroupItem * sourceNetworkConfigurationGroupItem; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModule * networkConfigurationSettingsModule;              //@synthesize networkConfigurationSettingsModule=_networkConfigurationSettingsModule - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2 ;
-(HUNetworkConfigurationSettingsModule *)networkConfigurationSettingsModule;
-(HFNetworkConfigurationGroupItem *)sourceNetworkConfigurationGroupItem;
-(void)setNetworkConfigurationSettingsModule:(HUNetworkConfigurationSettingsModule *)arg1 ;
@end

