/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAttentionDetectionEnabled:(NSNumber *)arg1 ;
-(NSNumber *)identificationEnabled;
-(NSNumber *)unlockEnabled;
-(NSNumber *)applePayEnabled;
-(id)description;
-(id)dictionary;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(NSNumber *)attentionDetectionEnabled;
-(NSNumber *)loginEnabled;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(void)setApplePayEnabled:(NSNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 effective:(BOOL)arg2 ;
@end

