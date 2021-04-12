/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@interface SystemProtectedConfig : NSObject {

	int _biometryEnabled;
	int _unlockEnabled;
	int _identificationEnabled;
	int _loginEnabled;
	int _unlockTokenMaxLifetime;

}

@property (assign,nonatomic) int biometryEnabled;                     //@synthesize biometryEnabled=_biometryEnabled - In the implementation block
@property (assign,nonatomic) int unlockEnabled;                       //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) int identificationEnabled;               //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (assign,nonatomic) int loginEnabled;                        //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (assign,nonatomic) int unlockTokenMaxLifetime;              //@synthesize unlockTokenMaxLifetime=_unlockTokenMaxLifetime - In the implementation block
-(id)init;
-(int)unlockEnabled;
-(void)setUnlockEnabled:(int)arg1 ;
-(int)identificationEnabled;
-(void)setIdentificationEnabled:(int)arg1 ;
-(int)loginEnabled;
-(void)setLoginEnabled:(int)arg1 ;
-(int)biometryEnabled;
-(void)setBiometryEnabled:(int)arg1 ;
-(int)unlockTokenMaxLifetime;
-(void)setUnlockTokenMaxLifetime:(int)arg1 ;
@end

