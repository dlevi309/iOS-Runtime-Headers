/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialRemoteDevicePairingFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;
@class PKAppletSubcredentialSharingSession, PKWatchHeroCardExplainationHeaderView, PKPaymentAuthorizationCoordinator, LAContext, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKAddCredentialToWatchViewController : PKExplanationViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable> {

	PKAppletSubcredentialSharingSession* _sharingSession;
	id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
	BOOL _isAdvancing;
	PKWatchHeroCardExplainationHeaderView* _heroCardView;
	PKPaymentAuthorizationCoordinator* _authorizationCoordinator;
	/*^block*/id _authorizationRequestCompletion;
	LAContext* _LAContext;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PKSubcredentialProvisioningFlowController> flowController; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
-(void)dealloc;
-(unsigned long long)operation;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)resetState;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)subcredentialProvisioningConfiguration:(id)arg1 requestUserAuthWithCompletion:(/*^block*/id)arg2 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(BOOL)suppressFieldDetect;
-(void)invalidateUserAuth;
-(void)startProvisioning;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showSuccessCheckmark:(BOOL)arg1 ;
-(void)advanceToNextState;
-(void)presentPaymentSheetForSharingRequest:(id)arg1 ;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowController>)flowController;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(id)sharingSessionWithDelegate:(id)arg1 ;
@end

