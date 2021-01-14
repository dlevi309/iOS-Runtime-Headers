/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

