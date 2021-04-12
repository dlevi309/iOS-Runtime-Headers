/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPeerPaymentIdentityVerificationController, NSString;

@interface PKIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {

	PKPeerPaymentIdentityVerificationController* _controller;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	unsigned long long _identityVerificaionError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)_cancel;
-(CGSize)_snapshotSize;
-(id)_titleText;
-(id)_bodyText;
-(void)_processNextViewController;
-(void)_terminateFlow;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 identityVerificationController:(id)arg3 ;
@end

