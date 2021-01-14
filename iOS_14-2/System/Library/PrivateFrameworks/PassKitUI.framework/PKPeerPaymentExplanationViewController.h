/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDataSource.h>

@class PKPeerPaymentSetupFlowController, UIViewController, PKPeerPaymentSetupFlowProvisionConfiguration, NSString;

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentSetupFlowControllerDataSource> {

	unsigned long long _operations;
	PKPeerPaymentSetupFlowController* _peerPaymentSetupFlowController;
	UIViewController* _nextViewController;
	PKPeerPaymentSetupFlowProvisionConfiguration* _configuration;
	BOOL _hidesSetupLater;
	BOOL _allowsManualEntry;

}

@property (assign,nonatomic) BOOL allowsManualEntry;                //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsManualEntry;
-(void)_handleNextStep;
-(void)_presentDisplayableError:(id)arg1 ;
-(void)_addDifferentCard;
-(id)initWithProvisoningController:(id)arg1 setupDelegate:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 credential:(id)arg5 ;
-(BOOL)shouldPushTerms;
-(void)viewDidLoad;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)_bodyText;
-(void)_terminateSetupFlow;
-(void)_showSpinner:(BOOL)arg1 ;
@end

