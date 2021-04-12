/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(long long)accountAccessStatus;
-(void)updateAccountAccessStatusWithResponse:(id)arg1 ;
-(id)updateAccountAccessStatusWithError:(id)arg1 ;
-(void)_invalidateAccountAccessStatus;
-(void)setAccountAccessStatus:(long long)arg1 ;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
@end

