/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSubcredentialInvitationFlowControllerProtocol.h>

@protocol OS_dispatch_queue, PKSubcredentialProvisioningFlowControllerDelegate;
@class NSObject, NSString;

@interface PKSubcredentialInvitationFlowController : NSObject <PKSubcredentialInvitationFlowControllerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	id<PKSubcredentialProvisioningFlowControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)invitationFromRemoteDeviceWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<PKSubcredentialProvisioningFlowControllerDelegate>)delegate;
-(void)setDelegate:(id<PKSubcredentialProvisioningFlowControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg1 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provisioningWasCanceledWithOperation:(id)arg1 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg1 ;
@end

