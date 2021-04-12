/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/


@class UIViewController;

@interface ENUIViewControllerFactory : NSObject {

	 inflightOnboardingStack;
	 inflightVerificationStack;

}

@property (assign,__weak,nonatomic) UIViewController * inflightOnboardingStack; 
@property (assign,__weak,nonatomic) UIViewController * inflightVerificationStack; 
+(id)sharedInstance;
-(id)init;
-(UIViewController *)inflightOnboardingStack;
-(void)setInflightOnboardingStack:(UIViewController *)arg1 ;
-(UIViewController *)inflightVerificationStack;
-(void)setInflightVerificationStack:(UIViewController *)arg1 ;
-(id)createOnboardingStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 fromAvailabilityAlert:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)createAnalyticsConsentStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createVerificationStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 sessionIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)createKeyReleaseDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createPreApprovalDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

