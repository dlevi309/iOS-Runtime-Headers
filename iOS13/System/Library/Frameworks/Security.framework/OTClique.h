/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSString, OTConfigurationContext, NSMutableDictionary;

@interface OTClique : NSObject {

	NSString* _cliqueMemberIdentifier;
	OTConfigurationContext* _ctx;
	NSMutableDictionary* _defaults;

}

@property (nonatomic,copy) NSString * cliqueMemberIdentifier;              //@synthesize cliqueMemberIdentifier=_cliqueMemberIdentifier - In the implementation block
@property (nonatomic,retain) OTConfigurationContext * ctx;                 //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaults;               //@synthesize defaults=_defaults - In the implementation block
+(BOOL)platformSupportsSOS;
+(id)newFriendsWithContextData:(id)arg1 error:(id*)arg2 ;
+(id)newFriendsWithContextData:(id)arg1 resetReason:(long long)arg2 error:(id*)arg3 ;
+(id)performEscrowRecoveryWithContextData:(id)arg1 escrowArguments:(id)arg2 error:(id*)arg3 ;
+(id)findOptimalBottleIDsWithContextData:(id)arg1 error:(id*)arg2 ;
+(id)recoverWithContextData:(id)arg1 bottleID:(id)arg2 escrowedEntropy:(id)arg3 error:(id*)arg4 ;
+(void)setNewRecoveryKeyWithData:(id)arg1 recoveryKey:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)recoverOctagonUsingData:(id)arg1 recoveryKey:(id)arg2 reply:(/*^block*/id)arg3 ;
+(BOOL)setCDPEnabled:(id)arg1 error:(id*)arg2 ;
+(long long)getCDPStatus:(id)arg1 error:(id*)arg2 ;
+(id)resetProtectedData:(id)arg1 error:(id*)arg2 ;
-(id)makeOTControl:(id*)arg1 ;
-(BOOL)isOctagonPairingEnabled;
-(void)setPairingDefault:(BOOL)arg1 ;
-(void)removePairingDefault;
-(id)initWithContextData:(id)arg1 error:(id*)arg2 ;
-(id)initWithContextData:(id)arg1 ;
-(NSString *)cliqueMemberIdentifier;
-(BOOL)establish:(id*)arg1 ;
-(BOOL)resetAndEstablish:(long long)arg1 error:(id*)arg2 ;
-(id)setupPairingChannelAsInitiator:(id)arg1 ;
-(id)setupPairingChannelAsInitator:(id)arg1 error:(id*)arg2 ;
-(id)setupPairingChannelAsAcceptor:(id)arg1 ;
-(id)setupPairingChannelAsAcceptor:(id)arg1 error:(id*)arg2 ;
-(long long)_fetchCliqueStatus:(id)arg1 error:(id*)arg2 ;
-(long long)fetchCliqueStatus:(id)arg1 error:(id*)arg2 ;
-(long long)fetchCliqueStatus:(id*)arg1 ;
-(long long)cachedCliqueStatus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)removeFriendsInClique:(id)arg1 error:(id*)arg2 ;
-(BOOL)leaveClique:(id*)arg1 ;
-(id)peerDeviceNamesByPeerID:(id*)arg1 ;
-(BOOL)joinAfterRestore:(id*)arg1 ;
-(BOOL)safariPasswordSyncingEnabled:(id*)arg1 ;
-(BOOL)isLastFriend:(id*)arg1 ;
-(BOOL)waitForInitialSync:(id*)arg1 ;
-(id)copyViewUnawarePeerInfo:(id*)arg1 ;
-(BOOL)viewSet:(id)arg1 disabledViews:(id)arg2 ;
-(BOOL)setUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id*)arg3 ;
-(BOOL)tryUserCredentialsAndDSID:(id)arg1 password:(id)arg2 error:(id*)arg3 ;
-(id)copyPeerPeerInfo:(id*)arg1 ;
-(BOOL)peersHaveViewsEnabled:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestToJoinCircle:(id*)arg1 ;
-(BOOL)accountUserKeyAvailable;
-(void)fetchEscrowContents:(/*^block*/id)arg1 ;
-(void)performedCDPStateMachineRun:(id)arg1 success:(BOOL)arg2 error:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)waitForOctagonUpgrade:(id*)arg1 ;
-(void)performedFailureCDPStateMachineRun:(id)arg1 error:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performedSuccessfulCDPStateMachineRun:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCliqueMemberIdentifier:(NSString *)arg1 ;
-(OTConfigurationContext *)ctx;
-(void)setCtx:(OTConfigurationContext *)arg1 ;
-(NSMutableDictionary *)defaults;
-(void)setDefaults:(NSMutableDictionary *)arg1 ;
@end

