/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UINavigationController.h>

@class HRProfile, SFSafariViewController, HKClinicalProvider, WDClinicalGatewayProxy;

@interface WDClinicalOnboardingOAuthNavigationViewController : UINavigationController {

	BOOL _showProviderNotFound;
	BOOL _onboardingSourceIsDeepLink;
	HRProfile* _profile;
	SFSafariViewController* _safariViewController;
	HKClinicalProvider* _providerToPresent;
	WDClinicalGatewayProxy* _gatewayProxyToTry;

}

@property (nonatomic,readonly) HRProfile * profile;                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) SFSafariViewController * safariViewController;              //@synthesize safariViewController=_safariViewController - In the implementation block
@property (nonatomic,retain) HKClinicalProvider * providerToPresent;                       //@synthesize providerToPresent=_providerToPresent - In the implementation block
@property (nonatomic,retain) WDClinicalGatewayProxy * gatewayProxyToTry;                   //@synthesize gatewayProxyToTry=_gatewayProxyToTry - In the implementation block
@property (assign,nonatomic) BOOL showProviderNotFound;                                    //@synthesize showProviderNotFound=_showProviderNotFound - In the implementation block
@property (assign,nonatomic) BOOL onboardingSourceIsDeepLink;                              //@synthesize onboardingSourceIsDeepLink=_onboardingSourceIsDeepLink - In the implementation block
+(id)clinicalOnboardingOauthViewControllerWithProfile:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setShowProviderNotFound:(BOOL)arg1 ;
-(HRProfile *)profile;
-(void)viewDidLoad;
-(BOOL)showProviderNotFound;
-(id)_onboardingViewController;
-(void)createRootViewController;
-(void)beginListeningToNotification;
-(void)presentSafariViewController;
-(BOOL)onboardingSourceIsDeepLink;
-(void)completionNotificationHandler:(id)arg1 ;
-(void)showClinicalAccountEducationViewControllerWithAccount:(id)arg1 ;
-(HKClinicalProvider *)providerToPresent;
-(void)dismissViewController;
-(void)setGatewayProxyToTry:(WDClinicalGatewayProxy *)arg1 ;
-(WDClinicalGatewayProxy *)gatewayProxyToTry;
-(void)presentSafariViewController:(id)arg1 withGatewayUrl:(id)arg2 ;
-(void)setProviderToPresent:(HKClinicalProvider *)arg1 ;
-(void)setOnboardingSourceIsDeepLink:(BOOL)arg1 ;
-(SFSafariViewController *)safariViewController;
@end

