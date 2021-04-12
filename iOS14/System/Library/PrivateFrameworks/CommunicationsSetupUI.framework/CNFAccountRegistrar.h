/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/


@class IMAccount, NSTimer, UIViewController;

@interface CNFAccountRegistrar : NSObject {

	/*^block*/id _completionBlock;
	IMAccount* _account;
	NSTimer* _registrationTimer;
	long long _serviceType;
	UIViewController* _presentationViewController;

}

@property (copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) IMAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (retain) NSTimer * registrationTimer;                                //@synthesize registrationTimer=_registrationTimer - In the implementation block
@property (assign) long long serviceType;                                      //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) UIViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
-(IMAccount *)account;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setAccount:(IMAccount *)arg1 ;
-(UIViewController *)presentationViewController;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(void)_stopTimer;
-(void)_startTimer;
-(id)initWithServiceType:(long long)arg1 presentationViewController:(id)arg2 ;
-(void)continueRegistrationForAccount:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)registerAccountWithUsername:(id)arg1 password:(id)arg2 service:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(long long)serviceType;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(void)dealloc;
-(void)_registrationTimerFired:(id)arg1 ;
-(void)setRegistrationTimer:(NSTimer *)arg1 ;
-(NSTimer *)registrationTimer;
-(void)_configureAliasesForAccount:(id)arg1 ;
-(void)_continueRegisteringAuthenticatedAccount:(id)arg1 ;
@end

