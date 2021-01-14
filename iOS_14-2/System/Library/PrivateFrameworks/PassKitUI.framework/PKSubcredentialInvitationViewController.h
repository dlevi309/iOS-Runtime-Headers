/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialInvitationProvisioningFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialInvitationFlowControllerProtocol;
@class PKAppletSubcredentialSharingSession, PKHeroCardExplainationHeaderView, NSString, PKPeerPaymentContactResolver, PKSubcredentialInvitationFlowControllerContext;

@interface PKSubcredentialInvitationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKSubcredentialInvitationProvisioningFlowControllerOperation, PKViewControllerPreflightable> {

	PKAppletSubcredentialSharingSession* _session;
	PKHeroCardExplainationHeaderView* _heroCardView;
	id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
	id<PKSubcredentialProvisioningViewModelProtocol> _remoteProvisioningViewModel;
	NSString* _contactName;
	PKPeerPaymentContactResolver* _contactResolver;
	BOOL _shouldSurfaceRemoteDeviceProvisioningErrors;
	PKSubcredentialInvitationFlowControllerContext* _provisioningContext;
	id<PKSubcredentialInvitationFlowControllerProtocol> _flowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,retain) PKSubcredentialInvitationFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
-(unsigned long long)operation;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)showSuccessCheckmark:(BOOL)arg1 ;
-(void)advanceToNextState;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialInvitationFlowControllerContext *)arg1 ;
-(id)sharingSessionWithDelegate:(id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3 ;
-(void)resetState;
-(void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)viewDidLoad;
-(id)contactKeysToFetch;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;
-(id)bodyTextForContext:(id)arg1 ;
-(void)startLocalDeviceProvisioning;
-(void)startRemoteDeviceProvisioning;
@end

