/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)identificationEnabled;
-(NSNumber *)biometryEnabled;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)unlockEnabled;
-(void)setUnlockTokenMaxLifetime:(NSNumber *)arg1 ;
-(id)description;
-(id)dictionary;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(NSNumber *)unlockTokenMaxLifetime;
-(NSNumber *)loginEnabled;
-(void)setBiometryEnabled:(NSNumber *)arg1 ;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
@end

