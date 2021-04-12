/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSubcredentialInvitationFlowControllerProtocol.h>

@protocol PKSubcredentialProvisioningFlowControllerDelegate;
@class NSString;

@interface PKSubcredentialInvitationFlowController : NSObject <PKSubcredentialInvitationFlowControllerProtocol> {

	id<PKSubcredentialProvisioningFlowControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localDevicePassMatchingPairedTerminalIdentifier:(id)arg1 ;
+(BOOL)isPassPersonalizedOrPersonalizing:(id)arg1 ;
+(void)canAttemptLocalDeviceProvisioningWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)canAttemptRemoteDeviceProvisioningWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PKSubcredentialProvisioningFlowControllerDelegate>)delegate;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg1 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)alertForOperation:(id)arg1 withError:(id)arg2 retryHandler:(/*^block*/id)arg3 cancelationHandler:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<PKSubcredentialProvisioningFlowControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)localizedIssuerNameForProvisioningOperation:(id)arg1 ;
-(void)provisioningWasCanceledWithOperation:(id)arg1 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg1 ;
@end

