/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicy.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy {

	unsigned long long _requiredEntitlements;

}

@property (readonly) unsigned long long requiredEntitlements;              //@synthesize requiredEntitlements=_requiredEntitlements - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)requiredEntitlements;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)canSendWithPolicyParameters:(id)arg1 ;
-(id)initWithRequiredEntitlements:(unsigned long long)arg1 ;
@end

