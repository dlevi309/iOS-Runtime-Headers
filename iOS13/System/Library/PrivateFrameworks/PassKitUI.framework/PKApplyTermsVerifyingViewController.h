/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKApplyController, NSString, CLInUseAssertion;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {

	PKApplyController* _applyController;
	NSString* _termsIdentifier;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	BOOL _isProcessingTerms;
	unsigned long long _featureIdentifier;
	CLInUseAssertion* _inUseAssertion;

}
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_terminateSetupFlow;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)_showActivationSpinner:(BOOL)arg1 ;
-(void)_processTerms;
@end

