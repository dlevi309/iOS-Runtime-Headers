/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class NSNumber;

@interface BKUserProtectedConfiguration : NSObject {

	NSNumber* _unlockEnabled;
	NSNumber* _identificationEnabled;
	NSNumber* _loginEnabled;
	NSNumber* _applePayEnabled;
	NSNumber* _attentionDetectionEnabled;

}

@property (nonatomic,retain) NSNumber * unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(id)description;
-(id)dictionary;
-(NSNumber *)unlockEnabled;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 effective:(BOOL)arg2 ;
-(NSNumber *)identificationEnabled;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(NSNumber *)loginEnabled;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(NSNumber *)applePayEnabled;
-(void)setApplePayEnabled:(NSNumber *)arg1 ;
-(NSNumber *)attentionDetectionEnabled;
-(void)setAttentionDetectionEnabled:(NSNumber *)arg1 ;
@end

