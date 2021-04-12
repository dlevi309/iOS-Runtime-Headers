/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy {

	BOOL _requiresEntitlement;

}

@property (readonly) BOOL requiresEntitlement;              //@synthesize requiresEntitlement=_requiresEntitlement - In the implementation block
+(id)defaultPolicy;
+(id)policyWithEntitlementRequirement:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)requiresEntitlement;
-(id)__initWithEntitlementRequirement:(BOOL)arg1 ;
@end

