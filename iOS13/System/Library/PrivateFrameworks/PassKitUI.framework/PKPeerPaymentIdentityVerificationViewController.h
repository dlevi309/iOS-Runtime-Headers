/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>

@class PKPeerPaymentIdentityVerificationController, NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationViewController : PKPaymentSetupFieldsViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {

	PKPeerPaymentIdentityVerificationController* _controller;
	NSArray* _visibleFieldIdentifiers;
	unsigned long long _identityVerificaionError;
	NSString* _headerTitle;
	NSString* _headerSubtitle;

}

@property (nonatomic,retain) NSString * headerTitle;                 //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) NSString * headerSubtitle;              //@synthesize headerSubtitle=_headerSubtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)_handleCancelButtonTapped:(id)arg1 ;
-(void)_terminateFlow;
-(void)_showNavigationBarSpinner:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(NSString *)headerSubtitle;
-(void)setHeaderSubtitle:(NSString *)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 visibleFieldIdentifiers:(id)arg3 ;
-(id)initWithController:(id)arg1 visibleFieldIdentifiers:(id)arg2 ;
@end

