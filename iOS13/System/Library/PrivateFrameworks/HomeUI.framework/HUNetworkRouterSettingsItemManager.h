/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HUNetworkConfigurationItemListModule, HMHome, HFNetworkRouterItemProvider;

@interface HUNetworkRouterSettingsItemManager : HFItemManager {

	HFItem* _homeProtectionItem;
	HUNetworkConfigurationItemListModule* _networkConfigurationItemListModule;
	HMHome* _overrideHome;
	HFNetworkRouterItemProvider* _networkRouterItemProvider;

}

@property (nonatomic,retain) HFItem * homeProtectionItem;                                                            //@synthesize homeProtectionItem=_homeProtectionItem - In the implementation block
@property (nonatomic,retain) HUNetworkConfigurationItemListModule * networkConfigurationItemListModule;              //@synthesize networkConfigurationItemListModule=_networkConfigurationItemListModule - In the implementation block
@property (nonatomic,readonly) HMHome * overrideHome;                                                                //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HFNetworkRouterItemProvider * networkRouterItemProvider;                                //@synthesize networkRouterItemProvider=_networkRouterItemProvider - In the implementation block
+(/*^block*/id)_networkRouterItemComparator;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(HMHome *)overrideHome;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(HUNetworkConfigurationItemListModule *)networkConfigurationItemListModule;
-(id)networkRouterItemForProfile:(id)arg1 ;
-(BOOL)isItemNetworkRouterItem:(id)arg1 ;
-(HFItem *)homeProtectionItem;
-(HFNetworkRouterItemProvider *)networkRouterItemProvider;
-(void)setNetworkRouterItemProvider:(HFNetworkRouterItemProvider *)arg1 ;
-(void)setHomeProtectionItem:(HFItem *)arg1 ;
-(void)setNetworkConfigurationItemListModule:(HUNetworkConfigurationItemListModule *)arg1 ;
@end

