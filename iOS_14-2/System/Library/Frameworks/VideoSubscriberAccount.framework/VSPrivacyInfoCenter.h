/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface VSPrivacyInfoCenter : NSObject <MCProfileConnectionObserver> {

	int _registrationToken;
	long long _accountAccessStatus;

}

@property (assign,nonatomic) int registrationToken;                      //@synthesize registrationToken=_registrationToken - In the implementation block
@property (assign,nonatomic) long long accountAccessStatus;              //@synthesize accountAccessStatus=_accountAccessStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPrivacyInfoCenter;
-(int)registrationToken;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setRegistrationToken:(int)arg1 ;
-(void)dealloc;
-(long long)accountAccessStatus;
-(void)updateAccountAccessStatusWithResponse:(id)arg1 ;
-(id)updateAccountAccessStatusWithError:(id)arg1 ;
-(void)_invalidateAccountAccessStatus;
-(void)setAccountAccessStatus:(long long)arg1 ;
@end

