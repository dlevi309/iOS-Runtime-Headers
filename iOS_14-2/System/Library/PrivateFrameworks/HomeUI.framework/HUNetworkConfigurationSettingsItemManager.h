/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUNetworkConfigurationSettingsModule, HFNetworkConfigurationGroupItem;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager {

	HUNetworkConfigurationSettingsModule* _networkConfigurationSettingsModule;

}

@property (nonatomic,readonly) HFNetworkConfigurationGroupItem * sourceNetworkConfigurationGroupItem; 
@property (nonatomic,retain) HUNetworkConfigurationSettingsModule * networkConfigurationSettingsModule;              //@synthesize networkConfigurationSettingsModule=_networkConfigurationSettingsModule - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2 ;
-(HUNetworkConfigurationSettingsModule *)networkConfigurationSettingsModule;
-(HFNetworkConfigurationGroupItem *)sourceNetworkConfigurationGroupItem;
-(void)setNetworkConfigurationSettingsModule:(HUNetworkConfigurationSettingsModule *)arg1 ;
@end

