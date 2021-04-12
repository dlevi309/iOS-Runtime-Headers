/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, PKDAPairingSessionManager, PKDASessionManager;

@interface PKDAManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PKDAPairingSessionManager* _pairingSessionManager;
	PKDASessionManager* _managementSessionManager;
	PKDASessionManager* _sharingSessionManager;

}

@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
-(BOOL)isSupported;
-(void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)prewarmWithIssuerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)declineSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)listCredentialsWithSession:(id)arg1 seid:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)decryptData:(id)arg1 withCredential:(id)arg2 ephemeralPublicKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)statusForReceivedSharingInvitationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)statusForSentSharingInvitationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)listCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 withSharedCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)probeTerminalForPairingStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateTrackingAttestation:(id)arg1 forCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

