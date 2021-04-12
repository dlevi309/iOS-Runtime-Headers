/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>

@protocol PKPeerPaymentUpdatedTermsViewControllerDelegate;
@class NSString;

@interface PKPeerPaymentUpdatedTermsViewController : PKExplanationViewController <PKExplanationViewControllerDelegate> {

	NSString* _uniqueID;
	id<PKPeerPaymentUpdatedTermsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPeerPaymentUpdatedTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPeerPaymentUpdatedTermsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPeerPaymentUpdatedTermsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)showSpinner:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(id)initWithPassUniqueID:(id)arg1 ;
@end

