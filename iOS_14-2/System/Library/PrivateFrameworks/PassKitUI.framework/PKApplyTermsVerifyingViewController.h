/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_showActivationSpinner:(BOOL)arg1 ;
-(void)_processTerms;
-(void)viewDidLoad;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)_terminateSetupFlow;
-(void)dealloc;
@end

