/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialRemoteDevicePairingFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;
@class PKAppletSubcredentialSharingSession, PKWatchHeroCardExplainationHeaderView, PKPaymentAuthorizationCoordinator, LAContext, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKAddCredentialToWatchViewController : PKExplanationViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKExplanationViewControllerDelegate, PKSubcredentialRemoteDevicePairingFlowControllerOperation, PKViewControllerPreflightable> {

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
@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
-(unsigned long long)operation;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)invalidateUserAuth;
-(void)startProvisioning;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showSuccessCheckmark:(BOOL)arg1 ;
-(void)advanceToNextState;
-(void)presentPaymentSheetForSharingRequest:(id)arg1 ;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(id)sharingSessionWithDelegate:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3 ;
-(void)resetState;
-(void)subcredentialProvisioningConfiguration:(id)arg1 requestUserAuthWithCompletion:(/*^block*/id)arg2 ;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(BOOL)suppressFieldDetect;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)dealloc;
@end

