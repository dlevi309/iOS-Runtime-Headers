/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicy.h>

@interface HMDHomeManagerXPCMessageSendAnyOptionsPolicy : HMDXPCMessageSendPolicy {

	BOOL _active;
	unsigned long long _options;
	unsigned long long _entitlements;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                  //@synthesize active=_active - In the implementation block
-(unsigned long long)entitlements;
-(BOOL)isActive;
-(unsigned long long)options;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(BOOL)arg3 ;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)canSendWithPolicyParameters:(id)arg1 ;
@end

