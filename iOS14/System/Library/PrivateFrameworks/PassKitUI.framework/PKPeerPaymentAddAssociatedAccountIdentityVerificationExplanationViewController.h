/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@class PKPeerPaymentSetupFlowController, NSString;

@interface PKPeerPaymentAddAssociatedAccountIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {

	PKPeerPaymentSetupFlowController* _controller;
	/*^block*/id _cancelHandler;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id cancelHandler;                        //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cancelHandler;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(void)viewDidLoad;
-(void)setCancelHandler:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
@end

