/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentDocumentSubmissionControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@class PKPaymentDocumentSubmissionController, NSString;

@interface PKPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {

	PKPaymentDocumentSubmissionController* _controller;
	long long _context;
	long long _currentState;
	long long _currentSide;
	unsigned long long _featureIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateUIWithState:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(id)paymentSetupMarker;
-(void)captureController:(id)arg1 showLoading:(BOOL)arg2 ;
-(void)captureController:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3 ;
-(id)_secondaryButton;
-(void)didSelectSetupLater;
-(void)viewDidLoad;
-(void)_cancelPressed;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
@end
