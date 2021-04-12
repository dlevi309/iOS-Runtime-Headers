/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject {

	NSSet* _hostnames;
	NSSet* _addresses;
	HMDNetworkRouterFirewallRuleWANAddressRange* _addressRange;

}

@property (nonatomic,readonly) NSSet * hostnames;                                                       //@synthesize hostnames=_hostnames - In the implementation block
@property (nonatomic,readonly) NSSet * addresses;                                                       //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) HMDNetworkRouterFirewallRuleWANAddressRange * addressRange;              //@synthesize addressRange=_addressRange - In the implementation block
-(NSSet *)addresses;
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(NSSet *)hostnames;
-(HMDNetworkRouterFirewallRuleWANAddressRange *)addressRange;
-(id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3 ;
@end

