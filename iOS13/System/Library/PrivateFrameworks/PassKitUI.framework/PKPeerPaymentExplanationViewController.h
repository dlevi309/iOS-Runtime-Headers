/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentSelectPassesViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentTermsController, PKPeerPaymentWebService, UIImage, NSString;

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSelectPassesViewControllerDelegate, PKExplanationViewControllerDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	PKPeerPaymentCredential* _credential;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPeerPaymentTermsController* _termsController;
	PKPeerPaymentWebService* _peerPaymentWebService;
	UIImage* _passSnapShot;
	BOOL _hidesSetupLater;
	BOOL _presentedDeviceToDeviceEncryptionFlow;
	BOOL _allowsManualEntry;

}

@property (assign,nonatomic) BOOL allowsManualEntry;                //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(CGSize)_snapshotSize;
-(id)_bodyText;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)_handleNextStep;
-(void)_presentSetupWillCompleteLaterAlertController;
-(void)_presentDeviceToDeviceEncryptionFlow;
-(void)_presentAlertControllerForError:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(void)_addDifferentCard;
-(void)_continuePressed;
-(void)_presentNextViewController;
-(void)_displayTermsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 ;
-(BOOL)allowsManualEntry;
@end

