/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKSubcredentialProvisioningControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PKPaymentService, PKSubcredentialProvisioningController, PKAppletSubcredentialSharingSession, NPKStandaloneFirstUnlockCoordinator, NPKWatchSubcredentialProvisioningService, NSString;

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	PKPaymentService* _paymentService;
	PKSubcredentialProvisioningController* _subcredentialProvisioningController;
	PKAppletSubcredentialSharingSession* _sharingSession;
	/*^block*/id _completion;
	NPKStandaloneFirstUnlockCoordinator* _firstUnlockCoordinator;
	NPKWatchSubcredentialProvisioningService* _subcredentialProvisioningService;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) PKPaymentService * paymentService;                                                        //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,retain) PKSubcredentialProvisioningController * subcredentialProvisioningController;              //@synthesize subcredentialProvisioningController=_subcredentialProvisioningController - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialSharingSession * sharingSession;                                     //@synthesize sharingSession=_sharingSession - In the implementation block
@property (nonatomic,copy) id completion;                                                                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NPKStandaloneFirstUnlockCoordinator * firstUnlockCoordinator;                             //@synthesize firstUnlockCoordinator=_firstUnlockCoordinator - In the implementation block
@property (nonatomic,retain) NPKWatchSubcredentialProvisioningService * subcredentialProvisioningService;              //@synthesize subcredentialProvisioningService=_subcredentialProvisioningService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canAddSecureElementPassWithConfiguration:(id)arg1 ;
+(BOOL)canAddSecureElementPass;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(void)accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)completion;
-(PKPaymentService *)paymentService;
-(void)setPaymentService:(PKPaymentService *)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 ;
-(PKAppletSubcredentialSharingSession *)sharingSession;
-(void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)registerCredentialsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_paymentWebService;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_errorWithCode:(long long)arg1 message:(id)arg2 ;
-(NPKStandaloneFirstUnlockCoordinator *)firstUnlockCoordinator;
-(void)setFirstUnlockCoordinator:(NPKStandaloneFirstUnlockCoordinator *)arg1 ;
-(void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)arg1 ;
-(void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)arg1 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)statusForSentInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusForReceivedInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_canAcceptInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_listSubcredentialInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(void)_setUpSubcredentialProvisioningController;
-(PKSubcredentialProvisioningController *)subcredentialProvisioningController;
-(void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)arg1 ;
-(void)_handleProvisioningAttemptForConfiguration:(id)arg1 error:(id)arg2 ;
-(void)_makeConfigurationForInvitation:(id)arg1 session:(id)arg2 metadata:(id)arg3 paymentWebService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)canAcceptInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchInvitationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performBlockFollowingFirstUnlockWithBlock:(/*^block*/id)arg1 ;
-(void)deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_setAccountAttestationAnonymizationSalt:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_requestSubcredentialInvitation:(id)arg1 fromIDSHandle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_registerCredentialsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_revokeCredentialsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_removeSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_declineRelatedInvitationsIfNecessaryForInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(NPKWatchSubcredentialProvisioningService *)subcredentialProvisioningService;
-(void)startProvisioningWithInvitation:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAccountAttestationAnonymizationSalt:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_statusForSentInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_statusForReceivedInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_endProvisioningWithPassForInvitation:(id)arg1 error:(id)arg2 ;
-(BOOL)_isInvitationUniqueForPairedReaderIdentifier:(id)arg1 ;
-(void)_fetchInvitationMatchingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSubcredentialProvisioningController:(PKSubcredentialProvisioningController *)arg1 ;
-(void)setSharingSession:(PKAppletSubcredentialSharingSession *)arg1 ;
-(void)listSubcredentialInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(void)_startProvisioningForProvisioningController:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_invokeCompletionWithPassForInvitation:(id)arg1 error:(id)arg2 ;
-(void)startProvisioningWithInvitationIdentifier:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestSubcredentialInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineRelatedInvitationsIfNecessaryForInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_deviceSupportsSubcredentialProvisioning;
-(void)setSubcredentialProvisioningService:(NPKWatchSubcredentialProvisioningService *)arg1 ;
@end

