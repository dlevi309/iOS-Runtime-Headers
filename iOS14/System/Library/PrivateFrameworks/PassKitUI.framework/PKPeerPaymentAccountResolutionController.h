/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPeerPaymentAccountResolutionControllerDelegate, PKPassLibraryDataProvider, PKPaymentSetupDelegate;
@class PKPeerPaymentWebService, PKPeerPaymentActionViewController, PKPeerPaymentAccount, NSString;

@interface PKPeerPaymentAccountResolutionController : NSObject <MFMailComposeViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKPeerPaymentActionViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {

	id<PKPeerPaymentAccountResolutionControllerDelegate> _delegate;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	long long _context;
	PKPeerPaymentWebService* _webService;
	PKPeerPaymentActionViewController* _peerPaymentActionViewController;
	PKPeerPaymentAccount* _account;
	id<PKPaymentSetupDelegate> _setupDelegate;

}

@property (nonatomic,retain) PKPeerPaymentAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<PKPeerPaymentAccountResolutionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupDelegate> setupDelegate;                                   //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1 passLibraryDataProvider:(id)arg2 ;
+(BOOL)_hasPeerPaymentPassProvisionedForAccount:(id)arg1 passLibraryDataProvider:(id)arg2 ;
+(id)_peerPaymentPassForAccount:(id)arg1 passLibraryDataProvider:(id)arg2 ;
+(BOOL)_canShowContactSupportForPass:(id)arg1 ;
+(BOOL)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1 ;
-(PKPeerPaymentAccount *)account;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(id<PKPeerPaymentAccountResolutionControllerDelegate>)delegate;
-(void)_presentViewController:(id)arg1 ;
-(id<PKPaymentSetupDelegate>)setupDelegate;
-(void)setDelegate:(id<PKPeerPaymentAccountResolutionControllerDelegate>)arg1 ;
-(id)_peerPaymentPass;
-(unsigned long long)currentPeerPaymentAccountResolution;
-(void)_dismissViewController;
-(void)_peerPaymentAccountChanged:(id)arg1 ;
-(void)presentResolutionForCurrentAccountStateWithCompletion:(/*^block*/id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)peerPaymentActionViewControllerDidCancel:(id)arg1 ;
-(void)peerPaymentActionViewControllerDidPerformAction:(id)arg1 ;
-(void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 delegate:(id)arg4 passLibraryDataProvider:(id)arg5 ;
-(BOOL)_hasPeerPaymentPassProvisioned;
-(void)setSetupDelegate:(id<PKPaymentSetupDelegate>)arg1 ;
-(void)_presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentActivationFlowWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentIdentityVerificationWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentContactAppleSupportAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentReOpenFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentPeerPaymentAction:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)_callSupportWithPhoneNumber:(id)arg1 ;
-(void)_emailSupportWithEmailAddress:(id)arg1 ;
-(void)_openSupportWebsiteWithWebsiteURL:(id)arg1 ;
-(id)_contactAppleSupportAlertControllerForPass:(id)arg1 ;
-(void)_presentActivationFlowWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)peerPaymentPassIsProvisionedOnDevice;
-(id)_paymentWebService;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)dealloc;
@end

