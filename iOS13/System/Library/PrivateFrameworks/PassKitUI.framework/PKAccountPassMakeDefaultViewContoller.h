/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKAccountFlowControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKAccountFlowController, PKAccountPostProvisioningContent, CLInUseAssertion, NSString;

@interface PKAccountPassMakeDefaultViewContoller : PKExplanationViewController <PKAccountFlowControllerDelegate, PKViewControllerPreflightable> {

	PKAccountFlowController* _accountController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	unsigned long long _featureIdentifier;
	PKAccountPostProvisioningContent* _makeDefaultPostProvisioningContent;
	CLInUseAssertion* _inUseAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2 ;
-(BOOL)_willPerformProvisioningActions;
-(void)_presentDisplayableError:(id)arg1 ;
@end

