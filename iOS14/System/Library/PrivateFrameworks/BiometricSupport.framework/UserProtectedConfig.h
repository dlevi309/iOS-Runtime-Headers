/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@interface UserProtectedConfig : NSObject {

	int _unlockEnabled;
	int _identificationEnabled;
	int _loginEnabled;
	int _applePayEnabled;
	int _attentionDetectionEnabled;

}

@property (assign,nonatomic) int unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (assign,nonatomic) int identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (assign,nonatomic) int loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (assign,nonatomic) int applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (assign,nonatomic) int attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(void)setAttentionDetectionEnabled:(int)arg1 ;
-(id)init;
-(int)identificationEnabled;
-(int)unlockEnabled;
-(int)applePayEnabled;
-(void)setUnlockEnabled:(int)arg1 ;
-(int)attentionDetectionEnabled;
-(int)loginEnabled;
-(void)setIdentificationEnabled:(int)arg1 ;
-(void)setLoginEnabled:(int)arg1 ;
-(void)setApplePayEnabled:(int)arg1 ;
@end

