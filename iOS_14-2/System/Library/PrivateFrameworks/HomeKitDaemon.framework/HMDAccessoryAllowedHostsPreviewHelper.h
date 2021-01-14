/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerClient.h>

@class HMDHome, HMDNetworkRouterFirewallRuleManager, NSDate, NSString;

@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject <HMDNetworkRouterFirewallRuleManagerClient> {

	HMDHome* _home;
	HMDNetworkRouterFirewallRuleManager* _firewallRuleManager;
	os_unfair_lock_s _lock;
	NSDate* _expires;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)helperForHome:(id)arg1 ;
-(id)attributeDescriptions;
-(void)fetchAllowedHostsForAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1 ;
@end

