/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFMessagePolicy.h>

@interface HMDXPCMessagePolicy : HMFMessagePolicy {

	unsigned long long _entitlements;

}

@property (readonly) unsigned long long entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
+(id)defaultPolicy;
+(id)policyWithEntitlements:(unsigned long long)arg1 ;
-(unsigned long long)entitlements;
-(id)init;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)__initWithEntitlements:(unsigned long long)arg1 ;
@end

