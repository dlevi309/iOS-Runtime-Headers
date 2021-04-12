/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSSet, HMHome, HFNetworkConfigurationItemProvider;

@interface HUNetworkConfigurationMismatchItemManager : HFItemManager {

	NSSet* _profiles;
	HMHome* _overrideHome;
	HFNetworkConfigurationItemProvider* _networkConfigurationItemProvider;

}

@property (nonatomic,readonly) HMHome * overrideHome;                                                            //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HFNetworkConfigurationItemProvider * networkConfigurationItemProvider;              //@synthesize networkConfigurationItemProvider=_networkConfigurationItemProvider - In the implementation block
@property (nonatomic,readonly) NSSet * profiles;                                                                 //@synthesize profiles=_profiles - In the implementation block
-(NSSet *)profiles;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(HMHome *)overrideHome;
-(BOOL)isItemNetworkConfigurationItem:(id)arg1 ;
-(id)initWithProfiles:(id)arg1 delegate:(id)arg2 ;
-(HFNetworkConfigurationItemProvider *)networkConfigurationItemProvider;
-(void)setNetworkConfigurationItemProvider:(HFNetworkConfigurationItemProvider *)arg1 ;
-(id)networkConfigurationItemForProfile:(id)arg1 ;
@end

