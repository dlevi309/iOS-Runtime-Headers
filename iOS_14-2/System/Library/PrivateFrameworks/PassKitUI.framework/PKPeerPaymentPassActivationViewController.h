/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDataSource.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPeerPaymentSetupFlowController, PKPeerPaymentSetupFlowHeroView, NSString;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {

	PKPeerPaymentSetupFlowController* _peerPaymentSetupFlowController;
	PKPeerPaymentSetupFlowHeroView* _heroView;
	unsigned long long _state;
	unsigned long long _operations;
	BOOL _shouldShowAddDebitCardViewController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setState:(unsigned long long)arg1 ;
-(void)_beginSetup;
-(void)_handleActivatedState;
-(void)_handleNextStep;
-(void)_presentDisplayableError:(id)arg1 ;
-(id)_titleStringForState;
-(id)_bodyStringForState;
-(BOOL)_shouldShowAddDebitCardViewController;
-(void)_presentActivationFailedErrorAlert;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(BOOL)shouldPushTerms;
-(void)viewDidLoad;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
@end

