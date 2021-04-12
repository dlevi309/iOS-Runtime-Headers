/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSXPCConnection;

@interface OTControl : NSObject {

	BOOL _synchronous;
	BOOL _sync;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL sync;                                 //@synthesize sync=_sync - In the implementation block
@property (assign) BOOL synchronous;                          //@synthesize synchronous=_synchronous - In the implementation block
+(id)controlObject:(id*)arg1 ;
+(id)controlObject:(BOOL)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)sync;
-(BOOL)synchronous;
-(void)setSynchronous:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg1 sync:(BOOL)arg2 ;
-(id)getConnection:(/*^block*/id)arg1 ;
-(void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)reset:(/*^block*/id)arg1 ;
-(void)signingKey:(/*^block*/id)arg1 ;
-(void)octagonSigningPublicKey:(/*^block*/id)arg1 ;
-(void)encryptionKey:(/*^block*/id)arg1 ;
-(void)octagonEncryptionPublicKey:(/*^block*/id)arg1 ;
-(void)listOfRecords:(/*^block*/id)arg1 ;
-(void)listOfEligibleBottledPeerRecords:(/*^block*/id)arg1 ;
-(void)signIn:(id)arg1 container:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)signOut:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)notifyIDMSTrustLevelChangeForContainer:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleIdentityChangeForSigningKey:(id)arg1 ForEncryptionKey:(id)arg2 ForPeerID:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)rpcEpochWithConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)rpcVoucherWithConfiguration:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)rpcJoinWithConfiguration:(id)arg1 vouchData:(id)arg2 vouchSig:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)status:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchEgoPeerID:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchCliqueStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)fetchTrustStatus:(id)arg1 context:(id)arg2 configuration:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)startOctagonStateMachine:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetAndEstablish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 resetReason:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)establish:(id)arg1 context:(id)arg2 altDSID:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)leaveClique:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)removeFriendsInClique:(id)arg1 context:(id)arg2 peerIDs:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)peerDeviceNamesByPeerID:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchAllViableBottles:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)restore:(id)arg1 contextID:(id)arg2 bottleSalt:(id)arg3 entropy:(id)arg4 bottleID:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)fetchEscrowContents:(id)arg1 contextID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)createRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)joinWithRecoveryKey:(id)arg1 contextID:(id)arg2 recoveryKey:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)healthCheck:(id)arg1 context:(id)arg2 skipRateLimitingCheck:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)attemptSosUpgrade:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)waitForOctagonUpgrade:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)postCDPFollowupResult:(BOOL)arg1 type:(id)arg2 error:(id)arg3 containerName:(id)arg4 contextName:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)refetchCKKSPolicy:(id)arg1 contextID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCDPEnabled:(id)arg1 contextID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getCDPStatus:(id)arg1 contextID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setSync:(BOOL)arg1 ;
@end

