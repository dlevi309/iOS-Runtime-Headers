/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

