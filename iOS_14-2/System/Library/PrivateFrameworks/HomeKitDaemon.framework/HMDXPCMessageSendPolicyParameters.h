/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@interface HMDXPCMessageSendPolicyParameters : NSObject {

	unsigned long long _entitlements;

}

@property (nonatomic,readonly) unsigned long long entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
-(unsigned long long)entitlements;
-(id)signature;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntitlements:(unsigned long long)arg1 ;
@end

