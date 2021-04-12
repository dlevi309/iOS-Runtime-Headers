/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(int)unlockEnabled;
-(void)setUnlockEnabled:(int)arg1 ;
-(int)identificationEnabled;
-(void)setIdentificationEnabled:(int)arg1 ;
-(int)loginEnabled;
-(void)setLoginEnabled:(int)arg1 ;
-(int)applePayEnabled;
-(void)setApplePayEnabled:(int)arg1 ;
-(int)attentionDetectionEnabled;
-(void)setAttentionDetectionEnabled:(int)arg1 ;
@end

