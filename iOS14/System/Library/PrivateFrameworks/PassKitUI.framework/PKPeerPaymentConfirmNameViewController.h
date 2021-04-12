/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPeerPaymentConfirmNameViewControllerDelegate;
@class PKFamilyMember, UIBarButtonItem, NSString;

@interface PKPeerPaymentConfirmNameViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupViewControllerDelegate> {

	PKFamilyMember* _familyMember;
	long long _context;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _spinnerButton;
	BOOL _showSpinner;
	id<PKPeerPaymentConfirmNameViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentConfirmNameViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPeerPaymentConfirmNameViewControllerDelegate>)delegate;
-(id)initWithFamilyMember:(id)arg1 delegate:(id)arg2 context:(long long)arg3 ;
-(void)_continue;
-(void)setDelegate:(id<PKPeerPaymentConfirmNameViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)showSpinner:(BOOL)arg1 ;
-(void)_cancelPressed;
-(void)_donePressed;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
@end

