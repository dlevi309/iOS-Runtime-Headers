/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleConfiguration.h>

@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {

	BOOL _isFiltered;
	BOOL _useFallbackForRTP;
	BOOL _useFallbackForHDS;

}
+(id)fallbackIdentifier;
+(id)fallbackConfigurationForRuleset:(id)arg1 ;
-(id)description;
-(id)initWithAccessory:(id)arg1 sourceConfiguration:(id)arg2 ;
@end

