/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKSubcredentialMessageComposeViewControllerDelegate.h>

@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;
@class PKPaymentPass, PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, NSArray, PKSubcredentialMessageComposeViewController, NSString;

@interface PKAppletSubcredentialEntitlementPickerViewController : PKPaymentSetupTableViewController <PKSubcredentialMessageComposeViewControllerDelegate> {

	PKPaymentPass* _pass;
	PKSharedCredentialsGroupController* _groupController;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	NSArray* _supportedEntitlements;
	long long _selectedEntitlementIndex;
	id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;
	BOOL _isSharing;
	PKSubcredentialMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) PKSubcredentialMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)handleSharedButton;
-(id)initWithSharedCredentialsGroupController:(id)arg1 delegate:(id)arg2 sharingRequest:(id)arg3 ;
-(void)viewDidLoad;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(void)setMessageComposeViewController:(PKSubcredentialMessageComposeViewController *)arg1 ;
-(PKSubcredentialMessageComposeViewController *)messageComposeViewController;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

