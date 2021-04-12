/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject {

	HMFNetAddress* _addressStart;
	HMFNetAddress* _addressEnd;

}

@property (nonatomic,readonly) HMFNetAddress * addressStart;              //@synthesize addressStart=_addressStart - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * addressEnd;                //@synthesize addressEnd=_addressEnd - In the implementation block
-(id)attributeDescriptions;
-(id)prettyJSONDictionary;
-(HMFNetAddress *)addressStart;
-(HMFNetAddress *)addressEnd;
-(id)initWithAddressStart:(id)arg1 addressEnd:(id)arg2 ;
@end

