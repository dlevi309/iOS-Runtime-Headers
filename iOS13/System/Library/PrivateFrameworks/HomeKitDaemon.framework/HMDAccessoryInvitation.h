/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccessory;

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding> {

	NSUUID* _identifier;
	HMDAccessory* _accessory;
	long long _state;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(long long)state;
-(HMDAccessory *)accessory;
-(id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3 ;
@end

