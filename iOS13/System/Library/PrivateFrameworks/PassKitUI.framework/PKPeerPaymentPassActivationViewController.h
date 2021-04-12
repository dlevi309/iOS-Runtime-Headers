/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentWebService, PKPeerPaymentTermsController, UIImage, PKPeerPaymentSetupFlowHeroView, NSString;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	PKPeerPaymentCredential* _credential;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	unsigned long long _state;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentTermsController* _termsController;
	UIImage* _passSnapShot;
	BOOL _shouldShowAddDebitCardViewController;
	PKPeerPaymentSetupFlowHeroView* _heroView;
	BOOL _presentedDeviceToDeviceEncryptionFlow;

}

@property (assign,nonatomic) BOOL presentedDeviceToDeviceEncryptionFlow;              //@synthesize presentedDeviceToDeviceEncryptionFlow=_presentedDeviceToDeviceEncryptionFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setState:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(CGSize)_snapshotSize;
-(void)_handleError:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)_beginSetup;
-(void)_handleActivatedState;
-(void)_handleNextStep;
-(void)_presentMissingTLKsAlert;
-(void)_presentActivationFailedErrorAlert;
-(void)_checkCloudStoreState;
-(void)_presentSetupWillCompleteLaterAlertController;
-(void)_presentDeviceToDeviceEncryptionFlow;
-(void)_provisionPeerPaymentPass;
-(void)_processCloudStorePCSError;
-(void)_initalizeCloudStoreWithTargetDevice:(id)arg1 ifNecessaryWithCompletion:(/*^block*/id)arg2 ;
-(void)_resetApplyPayManateeView;
-(void)_presentAlertControllerForError:(id)arg1 ;
-(id)_titleStringForState;
-(id)_bodyStringForState;
-(void)_setShowSpinner:(BOOL)arg1 ;
-(BOOL)_shouldShowAddDebitCardViewController;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5 ;
-(void)setPresentedDeviceToDeviceEncryptionFlow:(BOOL)arg1 ;
-(void)_presentTermsAndConditionsWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentIdentityVerificationWithError:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)_presentAddDebitCardViewController;
-(BOOL)presentedDeviceToDeviceEncryptionFlow;
@end

