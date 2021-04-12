/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerProtocol.h>
#import <libobjc.A.dylib/PKFieldDetectSuppressor.h>

@protocol OS_dispatch_queue, PKSubcredentialProvisioningFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSObject, NSString;

@interface PKSubcredentialPairingFlowController : NSObject <PKSubcredentialPairingFlowControllerProtocol, PKFieldDetectSuppressor> {

	NSObject*<OS_dispatch_queue> _queue;
	id<PKSubcredentialProvisioningFlowControllerDelegate> _delegate;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                      //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
+(id)sharingRequestForContext:(id)arg1 withCredential:(id)arg2 ;
+(id)credentialToShareForContext:(id)arg1 ;
+(id)contextFromPaymentCredential:(id)arg1 provisioningController:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowControllerDelegate>)delegate;
-(void)setDelegate:(id<PKSubcredentialProvisioningFlowControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg1 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)canProvisionOnRemoteDevice:(id)arg1 withSharingRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nextQueuedProvisioningViewControllerFromProvisioningOperation:(id)arg1 ;
-(void)provisioningWasCanceledWithOperation:(id)arg1 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(id)startingViewControllerForContext:(id)arg1 ;
@end

