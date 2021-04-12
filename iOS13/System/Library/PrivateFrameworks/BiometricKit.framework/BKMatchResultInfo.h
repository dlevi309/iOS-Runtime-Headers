/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BKIdentity *)identity;
-(BOOL)unlocked;
-(void)setUnlocked:(BOOL)arg1 ;
-(void)setIdentity:(BKIdentity *)arg1 ;
-(id)initWithServerIdentity:(id)arg1 details:(id)arg2 ;
-(long long)lockoutState;
-(void)setLockoutState:(long long)arg1 ;
-(BOOL)credentialAdded;
-(void)setCredentialAdded:(BOOL)arg1 ;
@end

