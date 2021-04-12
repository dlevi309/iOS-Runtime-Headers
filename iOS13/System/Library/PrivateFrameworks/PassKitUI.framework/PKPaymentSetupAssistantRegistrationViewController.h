/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupHeroViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class UIButton, NSMutableArray, NSArray, NSString;

@interface PKPaymentSetupAssistantRegistrationViewController : PKPaymentSetupHeroViewController <PKPaymentSetupViewControllerDelegate> {

	UIButton* _skipButton;
	id<PKPaymentSetupViewControllerDelegate> _externalDelegate;
	BOOL _isPreflighting;
	NSMutableArray* _preflightCompletionHandlers;
	unsigned long long _preflightResult;

}

@property (nonatomic,readonly) NSArray * requiredPaymentSetupFileURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setupAssistantNeedsToRun;
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
+(id)defaultWebServiceForContext:(long long)arg1 ;
+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1 ;
-(void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(BOOL)arg3 error:(id)arg4 ;
-(void)viewControllerDidFinishChangingPasscodeComplex:(id)arg1 ;
-(void)viewControllerDidFailToChangePasscodeComplex:(id)arg1 ;
-(void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(/*^block*/id)arg2 ;
-(void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(BOOL)arg2 error:(id)arg3 ;
-(void)_setExternalDelegate:(id)arg1 ;
-(NSArray *)requiredPaymentSetupFileURLs;
-(void)bridgeSetupAssistantDidFinishPasscodeChange;
-(void)bridgeSetupAssistantDidFailToChangePasscode;
@end

