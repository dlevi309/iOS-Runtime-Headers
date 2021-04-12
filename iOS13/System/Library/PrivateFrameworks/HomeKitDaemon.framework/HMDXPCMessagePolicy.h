/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)entitlements;
-(id)__initWithEntitlements:(unsigned long long)arg1 ;
@end

