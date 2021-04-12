/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject {

	NSNumber* _biometryEnabled;
	NSNumber* _unlockEnabled;
	NSNumber* _identificationEnabled;
	NSNumber* _loginEnabled;
	NSNumber* _unlockTokenMaxLifetime;

}

@property (nonatomic,retain) NSNumber * biometryEnabled;                     //@synthesize biometryEnabled=_biometryEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * unlockEnabled;                       //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * identificationEnabled;               //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * loginEnabled;                        //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * unlockTokenMaxLifetime;              //@synthesize unlockTokenMaxLifetime=_unlockTokenMaxLifetime - In the implementation block
-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)unlockEnabled;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(NSNumber *)identificationEnabled;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(NSNumber *)loginEnabled;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(NSNumber *)biometryEnabled;
-(void)setBiometryEnabled:(NSNumber *)arg1 ;
-(NSNumber *)unlockTokenMaxLifetime;
-(void)setUnlockTokenMaxLifetime:(NSNumber *)arg1 ;
@end

