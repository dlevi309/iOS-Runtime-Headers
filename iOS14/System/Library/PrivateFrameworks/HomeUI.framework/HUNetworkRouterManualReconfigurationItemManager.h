/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMHome, HFNetworkConfigurationItemProvider;

@interface HUNetworkRouterManualReconfigurationItemManager : HFItemManager {

	HMHome* _overrideHome;
	HFNetworkConfigurationItemProvider* _networkConfigurationItemProvider;

}

@property (nonatomic,readonly) HMHome * overrideHome;                                                            //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HFNetworkConfigurationItemProvider * networkConfigurationItemProvider;              //@synthesize networkConfigurationItemProvider=_networkConfigurationItemProvider - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(HMHome *)overrideHome;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isItemNetworkConfigurationItem:(id)arg1 ;
-(HFNetworkConfigurationItemProvider *)networkConfigurationItemProvider;
-(void)setNetworkConfigurationItemProvider:(HFNetworkConfigurationItemProvider *)arg1 ;
-(id)networkConfigurationItemForProfile:(id)arg1 ;
@end

