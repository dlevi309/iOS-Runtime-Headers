/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKSubcredentialProvisioningControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PKPaymentService, PKPaymentWebService, PKSubcredentialProvisioningController, PKAppletSubcredentialSharingSession, NPKStandaloneFirstUnlockCoordinator, NSString;

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	PKPaymentService* _paymentService;
	PKPaymentWebService* _paymentWebService;
	PKSubcredentialProvisioningController* _subcredentialProvisioningController;
	PKAppletSubcredentialSharingSession* _sharingSession;
	/*^block*/id _completion;
	NPKStandaloneFirstUnlockCoordinator* _firstUnlockCoordinator;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) PKPaymentService * paymentService;                                                        //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                                                  //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,retain) PKSubcredentialProvisioningController * subcredentialProvisioningController;              //@synthesize subcredentialProvisioningController=_subcredentialProvisioningController - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingSession * sharingSession;                                     //@synthesize sharingSession=_sharingSession - In the implementation block
@property (nonatomic,copy) id completion;                                                                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NPKStandaloneFirstUnlockCoordinator * firstUnlockCoordinator;                             //@synthesize firstUnlockCoordinator=_firstUnlockCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canAddSecureElementPassWithConfiguration:(id)arg1 ;
+(BOOL)canAddSecureElementPass;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)setPaymentService:(PKPaymentService *)arg1 ;
-(PKPaymentService *)paymentService;
-(PKAppletSubcredentialSharingSession *)sharingSession;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithCallbackQueue:(id)arg1 paymentWebService:(id)arg2 ;
-(void)_queue_canAcceptInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_listSubcredentialInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(void)_setUpSubcredentialProvisioningController;
-(PKSubcredentialProvisioningController *)subcredentialProvisioningController;
-(void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)arg1 ;
-(void)_startProvisioningForProvisioningController:(id)arg1 withConfiguration:(id)arg2 ;
-(NPKStandaloneFirstUnlockCoordinator *)firstUnlockCoordinator;
-(void)_endProvisioningWithPassForInvitation:(id)arg1 error:(id)arg2 ;
-(void)_makeAcceptInvitationConfigurationWithSession:(id)arg1 invitationIdentifier:(id)arg2 metadata:(id)arg3 paymentWebService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_setAccountAttestationAnonymizationSalt:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_requestSubcredentialInvitation:(id)arg1 fromIDSHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSubcredentialProvisioningController:(PKSubcredentialProvisioningController *)arg1 ;
-(void)setSharingSession:(PKAppletSubcredentialSharingSession *)arg1 ;
-(void)listSubcredentialInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(void)canAcceptInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchInvitationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invokeCompletionWithPassForInvitation:(id)arg1 error:(id)arg2 ;
-(void)setFirstUnlockCoordinator:(NPKStandaloneFirstUnlockCoordinator *)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 ;
-(void)startProvisioningWithInvitationIdentifier:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAccountAttestationAnonymizationSalt:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSubcredentialInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_deviceSupportsSubcredentialProvisioning;
@end

