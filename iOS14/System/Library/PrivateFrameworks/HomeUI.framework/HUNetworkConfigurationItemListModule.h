/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HMHome, HFNetworkConfigurationGroupItemProvider;

@interface HUNetworkConfigurationItemListModule : HFItemModule {

	HMHome* _home;
	HFNetworkConfigurationGroupItemProvider* _networkConfigurationGroupItemProvider;

}

@property (nonatomic,retain) HFNetworkConfigurationGroupItemProvider * networkConfigurationGroupItemProvider;              //@synthesize networkConfigurationGroupItemProvider=_networkConfigurationGroupItemProvider - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                              //@synthesize home=_home - In the implementation block
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMHome *)home;
-(id)networkConfigurationGroupItemForProfile:(id)arg1 ;
-(BOOL)isItemNetworkConfigurationGroupItem:(id)arg1 ;
-(HFNetworkConfigurationGroupItemProvider *)networkConfigurationGroupItemProvider;
-(void)setNetworkConfigurationGroupItemProvider:(HFNetworkConfigurationGroupItemProvider *)arg1 ;
@end

