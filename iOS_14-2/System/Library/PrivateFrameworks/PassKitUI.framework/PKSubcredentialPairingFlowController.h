/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerProtocol.h>

@protocol PKSubcredentialProvisioningFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSString;

@interface PKSubcredentialPairingFlowController : NSObject <PKSubcredentialPairingFlowControllerProtocol> {

	id<PKSubcredentialProvisioningFlowControllerDelegate> _delegate;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                      //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharingRequestForContext:(id)arg1 withCredential:(id)arg2 ;
+(id)credentialToShareForContext:(id)arg1 ;
+(id)contextFromPaymentCredential:(id)arg1 provisioningController:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowControllerDelegate>)delegate;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg1 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)alertForOperation:(id)arg1 withError:(id)arg2 retryHandler:(/*^block*/id)arg3 cancelationHandler:(/*^block*/id)arg4 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setDelegate:(id<PKSubcredentialProvisioningFlowControllerDelegate>)arg1 ;
-(void)nextViewControllerFromHeroViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)canProvisionOnRemoteDeviceWithContext:(id)arg1 sharingRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nextQueuedProvisioningViewControllerFromProvisioningOperation:(id)arg1 ;
-(id)localizedIssuerNameForProvisioningOperation:(id)arg1 ;
-(void)provisioningWasCanceledWithOperation:(id)arg1 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)prewarmPairingWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)startingViewControllerForContext:(id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
@end

