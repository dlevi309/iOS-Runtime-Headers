/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PURemotePasscodePolicy;

@interface PURemoteDeviceState : NSObject <NSSecureCoding> {

	BOOL _passcodeSet;
	BOOL _passcodeLocked;
	BOOL _unlockOnly;
	BOOL _wristDetectEnabled;
	unsigned _version;
	PURemotePasscodePolicy* _passcodePolicy;

}

@property (assign,nonatomic) unsigned version;                                                 //@synthesize version=_version - In the implementation block
@property (assign,getter=hasPasscodeSet,nonatomic) BOOL passcodeSet;                           //@synthesize passcodeSet=_passcodeSet - In the implementation block
@property (assign,getter=isPasscodeLocked,nonatomic) BOOL passcodeLocked;                      //@synthesize passcodeLocked=_passcodeLocked - In the implementation block
@property (assign,getter=isUnlockOnly,nonatomic) BOOL unlockOnly;                              //@synthesize unlockOnly=_unlockOnly - In the implementation block
@property (assign,getter=isWristDetectEnabled,nonatomic) BOOL wristDetectEnabled;              //@synthesize wristDetectEnabled=_wristDetectEnabled - In the implementation block
@property (nonatomic,retain) PURemotePasscodePolicy * passcodePolicy;                          //@synthesize passcodePolicy=_passcodePolicy - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isPasscodeLocked;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setPasscodePolicy:(PURemotePasscodePolicy *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(BOOL)hasPasscodeSet;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
-(PURemotePasscodePolicy *)passcodePolicy;
-(BOOL)isUnlockOnly;
-(BOOL)isWristDetectEnabled;
-(void)setPasscodeLocked:(BOOL)arg1 ;
-(void)setUnlockOnly:(BOOL)arg1 ;
-(void)setWristDetectEnabled:(BOOL)arg1 ;
@end

