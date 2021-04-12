/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPeerPaymentIdentityVerificationController, PKPaymentSetupFieldPicker, NSString, PKTableHeaderView, NSArray;

@interface PKPeerPaymentIdentityVerificationPickerViewController : PKPaymentSetupTableViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {

	PKPeerPaymentIdentityVerificationController* _controller;
	PKPaymentSetupFieldPicker* _pickerField;
	NSString* _footerText;
	PKTableHeaderView* _headerView;
	unsigned long long _identityVerificaionError;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	BOOL _navigationEnabled;
	BOOL _rightBarButtonItemsEnabled;
	NSString* _headerTitle;
	NSString* _headerSubtitle;
	id<PKPaymentSetupViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * headerTitle;                                                //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) NSString * headerSubtitle;                                             //@synthesize headerSubtitle=_headerSubtitle - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isComplete;
-(NSString *)headerTitle;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_handleError:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 pickerField:(id)arg3 footerText:(id)arg4 ;
-(void)_handleCancelButtonTapped:(id)arg1 ;
-(void)_handleNextButtonTapped:(id)arg1 ;
-(void)_setRightBarButtonItemsEnabled:(BOOL)arg1 ;
-(void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)_processNextViewController;
-(void)_terminateFlow;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)headerView;
-(void)_showNavigationBarSpinner:(BOOL)arg1 ;
-(void)_updateRightBarButtonState;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithController:(id)arg1 pickerField:(id)arg2 footerText:(id)arg3 ;
-(void)hideActivitySpinner;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(NSString *)headerSubtitle;
-(void)setHeaderSubtitle:(NSString *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
@end

