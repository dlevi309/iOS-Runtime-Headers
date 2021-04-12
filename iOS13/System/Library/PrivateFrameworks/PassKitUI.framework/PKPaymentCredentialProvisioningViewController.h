/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>
#import <libobjc.A.dylib/PKPaymentProvisioningControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@class UIImage, PKPaymentCredentialMetadataTableController, PKPaymentCredential, PKPaymentSetupProduct, NSString;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol> {

	UIImage* _passSnapshotPlaceHolder;
	unsigned long long _credentialProvisioningType;
	unsigned long long _displayType;
	PKPaymentCredentialMetadataTableController* _metadataController;
	PKPaymentCredential* _paymentCredential;
	PKPaymentSetupProduct* _setupProduct;
	BOOL _allowsManualEntry;
	BOOL _previouslyAcceptedTerms;
	BOOL _snapshotNeedsCorners;
	UIImage* _passSnapshot;
	BOOL _shouldAutoProvision;

}

@property (assign,nonatomic) BOOL shouldAutoProvision;              //@synthesize shouldAutoProvision=_shouldAutoProvision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isComplete;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentPassUpdatedOnCredential:(id)arg1 ;
-(void)_terminateSetupFlow;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(BOOL)arg6 previouslyAcceptedTerms:(BOOL)arg7 ;
-(void)setPassSnapshot:(id)arg1 needsCorners:(BOOL)arg2 ;
-(void)setShouldAutoProvision:(BOOL)arg1 ;
-(void)_skipCard;
-(void)_updatePassSnapshotHeader;
-(void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newPaymentRequirementsRequest;
-(id)newPaymentEligibilityRequest;
-(void)_preflightCredentialFieldsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
-(id)_defaultHeaderViewSubTitleForLocalCredential;
-(id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
-(id)readonlyFieldIdentifiers;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)addDifferentCard:(id)arg1 ;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(BOOL)shouldAutoProvision;
@end

