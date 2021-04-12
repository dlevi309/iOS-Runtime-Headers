/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSNumber, SPHandle, NSString;

@interface SPCommand : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enableLostMode;
	NSUUID* _identifier;
	NSUUID* _beaconIdentifier;
	long long _type;
	NSDate* _expiration;
	NSNumber* _duration;
	SPHandle* _handle;
	NSString* _lostModeMessage;
	NSString* _lostModePhoneNumber;
	NSString* _obfuscatedIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * beaconIdentifier;                    //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                          //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) SPHandle * handle;                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * lostModeMessage;                   //@synthesize lostModeMessage=_lostModeMessage - In the implementation block
@property (nonatomic,copy) NSString * lostModePhoneNumber;               //@synthesize lostModePhoneNumber=_lostModePhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * obfuscatedIdentifier;              //@synthesize obfuscatedIdentifier=_obfuscatedIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enableLostMode;                        //@synthesize enableLostMode=_enableLostMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskName; 
+(BOOL)supportsSecureCoding;
+(id)enableNotifyWhenFound:(id)arg1 ;
+(id)disableNotifyWhenFound:(id)arg1 ;
+(id)locate:(id)arg1 ;
+(id)startNotifyWhenFound:(id)arg1 ;
+(id)stopNotifyWhenFound:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(SPHandle *)handle;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSNumber *)duration;
-(void)setHandle:(SPHandle *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSDate *)expiration;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSString *)taskName;
-(id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 ;
-(id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 identifier:(id)arg9 ;
-(void)setBeaconIdentifier:(NSUUID *)arg1 ;
-(void)setLostModeMessage:(NSString *)arg1 ;
-(void)setLostModePhoneNumber:(NSString *)arg1 ;
-(void)setObfuscatedIdentifier:(NSString *)arg1 ;
-(NSString *)lostModeMessage;
-(NSString *)lostModePhoneNumber;
-(NSString *)obfuscatedIdentifier;
-(NSUUID *)beaconIdentifier;
-(BOOL)enableLostMode;
-(void)setEnableLostMode:(BOOL)arg1 ;
@end

