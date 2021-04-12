/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSArray, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject {

	NSArray* _hostnames;
	NSArray* _addresses;
	HMDNetworkRouterFirewallRuleWANAddressRange* _addressRange;

}

@property (nonatomic,readonly) NSArray * hostnames;                                                     //@synthesize hostnames=_hostnames - In the implementation block
@property (nonatomic,readonly) NSArray * addresses;                                                     //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWANAddressRange * addressRange;              //@synthesize addressRange=_addressRange - In the implementation block
-(NSArray *)addresses;
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(NSArray *)hostnames;
-(HMDNetworkRouterFirewallRuleWANAddressRange *)addressRange;
-(id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3 ;
@end

