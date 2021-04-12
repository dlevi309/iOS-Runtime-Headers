/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class BKIdentity;

@interface BKMatchResultInfo : NSObject {

	BOOL _unlocked;
	BOOL _credentialAdded;
	BKIdentity* _identity;
	long long _lockoutState;

}

@property (nonatomic,retain) BKIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) long long lockoutState;              //@synthesize lockoutState=_lockoutState - In the implementation block
@property (assign,nonatomic) BOOL unlocked;                       //@synthesize unlocked=_unlocked - In the implementation block
@property (assign,nonatomic) BOOL credentialAdded;                //@synthesize credentialAdded=_credentialAdded - In the implementation block
-(void)setIdentity:(BKIdentity *)arg1 ;
-(BKIdentity *)identity;
-(void)setUnlocked:(BOOL)arg1 ;
-(long long)lockoutState;
-(BOOL)unlocked;
-(id)initWithServerIdentity:(id)arg1 details:(id)arg2 device:(id)arg3 ;
-(void)setLockoutState:(long long)arg1 ;
-(BOOL)credentialAdded;
-(void)setCredentialAdded:(BOOL)arg1 ;
@end

