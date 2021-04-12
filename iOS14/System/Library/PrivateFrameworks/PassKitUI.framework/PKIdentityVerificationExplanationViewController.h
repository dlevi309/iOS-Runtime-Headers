/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_titleText;
-(void)_cancel;
-(CGSize)_snapshotSize;
-(id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 identityVerificationController:(id)arg3 ;
-(void)_processNextViewController;
-(void)_terminateFlow;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(id)_bodyText;
@end

