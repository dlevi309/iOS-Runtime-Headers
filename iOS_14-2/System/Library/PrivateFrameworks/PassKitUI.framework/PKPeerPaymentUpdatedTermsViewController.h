/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidLoad;
-(void)showSpinner:(BOOL)arg1 ;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithPassUniqueID:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
@end

