/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>
#import <libobjc.A.dylib/PKPaymentProvisioningControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@class UIImage, PKPaymentCredentialMetadataTableController, PKPaymentCredential, PKPaymentSetupProduct, PKAddPaymentPassRequest, NSString;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol> {

	UIImage* _passSnapshotPlaceHolder;
	unsigned long long _credentialProvisioningType;
	unsigned long long _displayType;
	PKPaymentCredentialMetadataTableController* _metadataController;
	PKPaymentCredential* _paymentCredential;
	PKPaymentSetupProduct* _setupProduct;
	BOOL _allowsManualEntry;
	BOOL _previouslyAcceptedTerms;
	UIImage* _passSnapshot;
	BOOL _passSnapshotNeedsCorners;
	CGSize _passSnapshotOverrideSize;
	PKAddPaymentPassRequest* _addRequest;
	BOOL _shouldAutoProvision;

}

@property (assign,nonatomic) BOOL shouldAutoProvision;              //@synthesize shouldAutoProvision=_shouldAutoProvision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isComplete;
-(void)_updatePassSnapshotHeader;
-(void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newPaymentRequirementsRequest;
-(id)newPaymentEligibilityRequest;
-(id)newPaymentProvisioningRequest;
-(void)_preflightCredentialFieldsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAddRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(id)defaultFields;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
-(id)_defaultHeaderViewSubTitleForLocalCredential;
-(id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
-(id)readonlyFieldIdentifiers;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(void)addDifferentCard:(id)arg1 ;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isProvisioningPaymentAccount;
-(BOOL)shouldAutoProvision;
-(void)_skipCard;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(BOOL)_isPaymentAccount;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(BOOL)arg6 previouslyAcceptedTerms:(BOOL)arg7 ;
-(void)setPassSnapshot:(id)arg1 needsCorners:(BOOL)arg2 ;
-(void)setShouldAutoProvision:(BOOL)arg1 ;
-(void)loadView;
-(void)paymentPassUpdatedOnCredential:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_terminateSetupFlow;
-(void)dealloc;
@end

