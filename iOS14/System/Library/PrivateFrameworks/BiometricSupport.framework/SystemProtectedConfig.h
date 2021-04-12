/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)identificationEnabled;
-(int)biometryEnabled;
-(int)unlockEnabled;
-(void)setUnlockTokenMaxLifetime:(int)arg1 ;
-(void)setUnlockEnabled:(int)arg1 ;
-(int)unlockTokenMaxLifetime;
-(int)loginEnabled;
-(void)setBiometryEnabled:(int)arg1 ;
-(void)setIdentificationEnabled:(int)arg1 ;
-(void)setLoginEnabled:(int)arg1 ;
@end

