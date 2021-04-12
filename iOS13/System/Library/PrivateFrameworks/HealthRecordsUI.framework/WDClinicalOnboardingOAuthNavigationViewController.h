/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(HRProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)dismissViewController;
-(SFSafariViewController *)safariViewController;
-(id)_onboardingViewController;
-(void)setShowProviderNotFound:(BOOL)arg1 ;
-(BOOL)showProviderNotFound;
-(void)setGatewayProxyToTry:(WDClinicalGatewayProxy *)arg1 ;
-(void)createRootViewController;
-(void)beginListeningToNotification;
-(void)presentSafariViewController;
-(BOOL)onboardingSourceIsDeepLink;
-(void)completionNotificationHandler:(id)arg1 ;
-(void)showClinicalAccountEducationViewControllerWithAccount:(id)arg1 ;
-(HKClinicalProvider *)providerToPresent;
-(WDClinicalGatewayProxy *)gatewayProxyToTry;
-(void)presentSafariViewController:(id)arg1 withGatewayUrl:(id)arg2 ;
-(void)setProviderToPresent:(HKClinicalProvider *)arg1 ;
-(void)setOnboardingSourceIsDeepLink:(BOOL)arg1 ;
@end

