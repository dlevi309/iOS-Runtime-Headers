/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKSubcredentialLocalDevicePairingFlowControllerOperation.h>

@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;
@class PKAppletSubcredentialPairingSession, PKCredentialProvisioningView, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingViewController : UIViewController <PKSubcredentialLocalDevicePairingFlowControllerOperation> {

	PKAppletSubcredentialPairingSession* _pairingSession;
	id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
	PKCredentialProvisioningView* _provisioningView;
	BOOL _isCancelling;
	BOOL _isAdvancing;
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)subcredentialProvisioningController:(id)arg1 didEnterState:(long long)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)suppressFieldDetect;
-(void)startProvisioning;
-(void)advanceToNextState;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowController>)flowController;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(id)pairingSessionWithDelegate:(id)arg1 ;
-(void)handleCancelButton;
-(void)updateUIForState:(long long)arg1 ;
@end

