/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_presentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2 ;
-(void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2 ;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)dealloc;
-(BOOL)_willPerformProvisioningActions;
@end

