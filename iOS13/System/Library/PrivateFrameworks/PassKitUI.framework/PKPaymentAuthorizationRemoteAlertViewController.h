/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKCompactNavigationContainerControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>
#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKLoadingViewControllerDelegate.h>

@protocol BSInvalidatable;
@class NSString, PKAssertion, PKPaymentRequest, PKPaymentAuthorizationServiceCompactNavigationContainerController, PKPaymentAuthorizationServiceNavigationController, PKPaymentProvisioningController, PKPaymentSetupNavigationController, PKPeerPaymentAccount, PKPaymentAuthorizationRemoteAlertViewControllerExportedObject, PKInAppPaymentService, NSXPCConnection;

@interface PKPaymentAuthorizationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, PKPaymentAuthorizationHostProtocol, PKPaymentSetupDelegate, SBSHardwareButtonEventConsuming, PKPaymentSetupViewControllerDelegate, PKLoadingViewControllerDelegate> {

	BOOL _didDismiss;
	BOOL _didSendAuthorizationDidPresent;
	BOOL _didSendAuthorizationDidFinish;
	long long _hostAppInterfaceOrientation;
	NSString* _hostApplicationIdentifier;
	int _statusBarVisibility;
	PKAssertion* _notificationSuppressionAssertion;
	NSString* _hostBundleIdentifier;
	NSString* _hostTeamID;
	NSString* _hostLocalizedAppName;
	PKPaymentRequest* _paymentRequest;
	BOOL _paymentAuthorizationPresented;
	PKPaymentAuthorizationServiceCompactNavigationContainerController* _navigationContainer;
	PKPaymentAuthorizationServiceNavigationController* _navigationController;
	long long _coachingState;
	PKPaymentProvisioningController* _paymentProvisioningController;
	PKPaymentSetupNavigationController* _paymentSetupNavigationController;
	BOOL _paymentSetupWasRequired;
	NSString* _applicationBindToken;
	PKPeerPaymentAccount* _peerPaymentAccount;
	BOOL _shouldAcquireLockButtonObserver;
	id<BSInvalidatable> _lockButtonObserver;
	BOOL _invalidated;
	BOOL _dismissAfterPaymentSetup;
	BOOL _isPerformingPaymentSetup;
	PKPaymentAuthorizationRemoteAlertViewControllerExportedObject* _exportedObject;
	PKInAppPaymentService* _inAppPaymentService;
	NSXPCConnection* _hostConnection;

}

@property (nonatomic,retain) PKPaymentAuthorizationRemoteAlertViewControllerExportedObject * exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) PKInAppPaymentService * inAppPaymentService;                                                 //@synthesize inAppPaymentService=_inAppPaymentService - In the implementation block
@property (nonatomic,retain) NSXPCConnection * hostConnection;                                                            //@synthesize hostConnection=_hostConnection - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                                           //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (assign,nonatomic) BOOL dismissAfterPaymentSetup;                                                               //@synthesize dismissAfterPaymentSetup=_dismissAfterPaymentSetup - In the implementation block
@property (nonatomic,readonly) BOOL isPerformingPaymentSetup;                                                             //@synthesize isPerformingPaymentSetup=_isPerformingPaymentSetup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(void)setExportedObject:(PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *)arg1 ;
-(PKPaymentAuthorizationRemoteAlertViewControllerExportedObject *)exportedObject;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(int)_preferredStatusBarVisibility;
-(void)_dismiss;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)consumeSinglePressUpForButtonKind:(long long)arg1 ;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1 ;
-(id)_remoteObjectProxy;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(PKInAppPaymentService *)inAppPaymentService;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)setInAppPaymentService:(PKInAppPaymentService *)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizeContext;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(id)_provisioningController;
-(NSXPCConnection *)hostConnection;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didInvalidateForRemoteAlert;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)viewController:(id)arg1 canProceedWithInstallment:(BOOL)arg2 featureApplication:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)loadingViewControllerDidCancel:(id)arg1 ;
-(void)authorizationViewControllerDidChangeUserIntentRequirement:(id)arg1 ;
-(void)authorizationViewControllerDidChangeCoachingState:(id)arg1 ;
-(void)authorizationViewController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2 ;
-(void)compactNavigationContainerControllerReceivedExternalTap:(id)arg1 ;
-(void)dismissWithRemoteOrigination:(BOOL)arg1 ;
-(void)_invalidateLockButtonObserver;
-(void)_handlePaymentRequestPresentationResultType:(long long)arg1 relevantUniqueID:(id)arg2 firstAttempt:(BOOL)arg3 ;
-(void)_canPresentPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_peerPaymentIdentityVerificationRequired;
-(void)_presentPaymentAuthorizationWithRelevantUniqueID:(id)arg1 ;
-(void)_presentInvalidAlert;
-(void)_presentVerifyPassAlertWithRelevantUniqueID:(id)arg1 ;
-(void)_presentActivatingPassAlertWithRelevantUniqueID:(id)arg1 ;
-(void)_presentLostModeAlertWithRelevantUniqueID:(id)arg1 ;
-(void)_presentApplyForFeature:(unsigned long long)arg1 ;
-(void)_presentPaymentSetup;
-(void)_presentAddCardAlert;
-(void)_presentPassNotSupportedAlertWithRelevantUniqueID:(id)arg1 ;
-(void)_presentPeerPaymentIdentityVerification;
-(void)_presentPeerPaymentIdentityVerificationAlert;
-(id)_configuredPaymentSetupNavigationController;
-(void)sendAuthorizationDidPresentIfNecessary;
-(void)_updatePearlViews;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(/*^block*/id)arg5 ;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 actionTitle:(id)arg4 actionHandler:(/*^block*/id)arg5 finalError:(id)arg6 ;
-(BOOL)_shouldBlockHardwareCancels;
-(void)_bindFeatureApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHostConnection:(NSXPCConnection *)arg1 ;
-(BOOL)dismissAfterPaymentSetup;
-(void)setDismissAfterPaymentSetup:(BOOL)arg1 ;
-(BOOL)isPerformingPaymentSetup;
@end

