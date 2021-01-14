/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKPaymentSelectPassesViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentServiceObserver.h>
#import <libobjc.A.dylib/PKPeerPaymentConfirmNameViewControllerDelegate.h>

@protocol PKPassLibraryDataProvider, PKPeerPaymentSetupFlowControllerDataSource, PKPeerPaymentSetupFlowControllerConfiguration;
@class PKPaymentPass, PKPeerPaymentTermsController, PKSecurityCapabilitiesController, PKPeerPaymentConfirmNameViewController, PKAppleCashSharingRecipientCapabilitiesFetchStatus, NSHashTable, UIViewController, PKPeerPaymentCredential, PKPaymentProvisioningController, PKPeerPaymentWebService, PKPaymentWebService, PKPeerPaymentService, PKPeerPaymentAccount, UIImage, NSString;

@interface PKPeerPaymentSetupFlowController : NSObject <PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentServiceObserver, PKPeerPaymentConfirmNameViewControllerDelegate> {

	PKPaymentPass* _peerPaymentPass;
	PKPeerPaymentTermsController* _termsController;
	PKSecurityCapabilitiesController* _securityCapabiltiesController;
	BOOL _hasPresentedDeviceToDeviceEncryptionFlow;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	PKPeerPaymentConfirmNameViewController* _confirmNameViewControllerBeingPresented;
	PKAppleCashSharingRecipientCapabilitiesFetchStatus* _familyMemberCapabilitiesFetchStatus;
	unsigned long long _operations;
	unsigned long long _completedOperations;
	/*^block*/id _nextViewControllerCompletion;
	os_unfair_lock_s _delegatesLock;
	NSHashTable* _delegates;
	UIViewController*<PKPeerPaymentSetupFlowControllerDataSource> _parentViewController;
	long long _context;
	id<PKPeerPaymentSetupFlowControllerConfiguration> _configuration;
	PKPeerPaymentCredential* _peerPaymentCredential;
	PKPaymentProvisioningController* _provisioningController;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccount* _peerPaymentAccount;
	UIImage* _passSnapShot;

}

@property (nonatomic,retain) UIViewController*<PKPeerPaymentSetupFlowControllerDataSource> parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) long long context;                                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<PKPeerPaymentSetupFlowControllerConfiguration> configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentCredential * peerPaymentCredential;                                               //@synthesize peerPaymentCredential=_peerPaymentCredential - In the implementation block
@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;                                      //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentWebService * peerPaymentWebService;                                               //@synthesize peerPaymentWebService=_peerPaymentWebService - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * paymentWebService;                                                       //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentService * peerPaymentService;                                                     //@synthesize peerPaymentService=_peerPaymentService - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentAccount * peerPaymentAccount;                                                     //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,readonly) UIImage * passSnapShot;                                                                        //@synthesize passSnapShot=_passSnapShot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOperations:(unsigned long long)arg1 ;
-(id)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_addAssociatedAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentNameConfirmationViewControllerWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentTermWithTermsResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasTooManyPasses;
-(BOOL)_peerPaymentPassIsProvisioned;
-(void)confirmNameViewController:(id)arg1 enteredFirstName:(id)arg2 lastName:(id)arg3 ;
-(void)confirmNameViewControllerCancelled:(id)arg1 ;
-(UIViewController*<PKPeerPaymentSetupFlowControllerDataSource>)parentViewController;
-(PKPeerPaymentCredential *)peerPaymentCredential;
-(long long)context;
-(BOOL)_willDisplayErrorForOperationOperationInContext:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_termsOperationWithTermsResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentManateeCapableOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkManateeCapabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentEnsurePassCountWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleDisplayableError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentMissingTLKsFlowWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkMissingTLKsWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupCloudStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkCloudStoreSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)_provisionPassWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentIdentityVerificationFlowWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIImage *)passSnapShot;
-(void)nextViewControllerAfterPerfomingOperations:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPeerPaymentCredential:(id)arg1 provisioningController:(id)arg2 passLibraryDataProvider:(id)arg3 configuration:(id)arg4 context:(long long)arg5 ;
-(id<PKPeerPaymentSetupFlowControllerConfiguration>)configuration;
-(PKPeerPaymentWebService *)peerPaymentWebService;
-(id)passesIncludingPeerPaymentPass:(BOOL)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(unsigned long long)_cipState;
-(id)_peerPaymentWebService;
-(void)didReceiveAppleCashSharingRecipientCapabilities:(id)arg1 forHandle:(id)arg2 ;
-(PKPeerPaymentService *)peerPaymentService;
-(void)_handlePeerPaymentAccountDidChangeNotification;
-(void)setParentViewController:(UIViewController*<PKPeerPaymentSetupFlowControllerDataSource>)arg1 ;
-(id)firstPeerPaymentAccountSetupViewController;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)selectPassesViewControllerDidTapBackButton:(id)arg1 ;
-(void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(PKPaymentWebService *)paymentWebService;
-(id)familyMemberCashCapabilitiesStatus;
-(void)_fetchAppleCashCapabilitiesIfNecessary;
-(void)_fitlerOperations:(unsigned long long)arg1 peerPaymentAccount:(id)arg2 context:(long long)arg3 ;
-(void)_nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_completedOperation:(unsigned long long)arg1 ;
-(id)_paymentWebService;
@end

