/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying> {

	BOOL _active;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (getter=isActive,readonly) BOOL active;                       //@synthesize active=_active - In the implementation block
-(id)signature;
-(BOOL)isActive;
-(unsigned long long)options;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
@end

