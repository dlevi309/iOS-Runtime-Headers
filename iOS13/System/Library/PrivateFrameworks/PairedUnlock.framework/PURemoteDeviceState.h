/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(PURemotePasscodePolicy *)passcodePolicy;
-(void)setPasscodePolicy:(PURemotePasscodePolicy *)arg1 ;
-(BOOL)hasPasscodeSet;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(BOOL)isPasscodeLocked;
-(BOOL)isUnlockOnly;
-(BOOL)isWristDetectEnabled;
-(void)setPasscodeLocked:(BOOL)arg1 ;
-(void)setUnlockOnly:(BOOL)arg1 ;
-(void)setWristDetectEnabled:(BOOL)arg1 ;
@end

