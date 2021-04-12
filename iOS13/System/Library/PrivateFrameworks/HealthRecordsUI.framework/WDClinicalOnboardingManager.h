/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class HRProfile, WDClinicalGatewayProxy, WDClinicalOnboardingOAuthNavigationViewController;

@interface WDClinicalOnboardingManager : NSObject {

	HRProfile* _profile;
	WDClinicalGatewayProxy* _pendingOnboardingGateway;
	WDClinicalOnboardingOAuthNavigationViewController* _inFlightLoginViewController;

}

@property (nonatomic,retain) HRProfile * profile;                                                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WDClinicalGatewayProxy * pendingOnboardingGateway;                                                   //@synthesize pendingOnboardingGateway=_pendingOnboardingGateway - In the implementation block
@property (assign,nonatomic,__weak) WDClinicalOnboardingOAuthNavigationViewController * inFlightLoginViewController;              //@synthesize inFlightLoginViewController=_inFlightLoginViewController - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(WDClinicalOnboardingOAuthNavigationViewController *)inFlightLoginViewController;
-(id)gatewayProxyWithActivity:(id)arg1 ;
-(void)_startOrReplaceLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_presentAccount:(id)arg1 presentingViewController:(id)arg2 ;
-(void)setPendingOnboardingGateway:(WDClinicalGatewayProxy *)arg1 ;
-(void)setInFlightLoginViewController:(WDClinicalOnboardingOAuthNavigationViewController *)arg1 ;
-(void)_dismissInFlightLoginViewControllerIfExistsWithCompletion:(/*^block*/id)arg1 ;
-(void)_startLoginWithLoginViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_didDismissLoginViewController:(id)arg1 ;
-(void)onboardWithActivity:(id)arg1 presentingViewController:(id)arg2 ;
-(void)registerInflightOnboardingViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getPendingOnboardingGatewayAndClear;
-(WDClinicalGatewayProxy *)pendingOnboardingGateway;
@end

