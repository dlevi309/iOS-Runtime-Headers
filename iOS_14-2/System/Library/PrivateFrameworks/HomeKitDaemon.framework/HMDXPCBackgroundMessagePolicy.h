/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)requiresEntitlement;
-(id)__initWithEntitlementRequirement:(BOOL)arg1 ;
@end

